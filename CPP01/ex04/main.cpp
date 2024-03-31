/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:55:31 by amarzouk          #+#    #+#             */
/*   Updated: 2024/03/31 14:11:50 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


void    writeInsideFolderRplace(std::string fileName, std::string s1, std::string s2)
{
    std::string line;
    std::string str;
    size_t pos;
    
    std::ifstream Myfile(fileName.c_str());
    if(Myfile.is_open())
    {
        std::ofstream Myfile2((fileName + ".replace").c_str());
        while (getline(Myfile, line))
        {
            str += line;
            if(!Myfile.eof())
                str += '\n';
        }
        pos = str.find(s1);

        while (pos < str.length())
        {
            str.erase(pos, s1.length());
            str.insert(pos, s2);
            pos = str.find(s1, pos + s2.length()); 
        }
        Myfile2 << str;
        Myfile2.close();
        Myfile.close();
    }
    else
        std::cout << "File doesn't exist" << std::endl;
}

int main(int ac, char **av)
{
    std::string toReplace;
    if (ac != 4)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }
    else
    {
        toReplace = av[2];
        if (toReplace.empty())
        {
            std::cout << "Error: Empty string" << std::endl;
            return (1);
        }
        writeInsideFolderRplace(av[1], av[2], av[3]);
    }
    return 0;
}