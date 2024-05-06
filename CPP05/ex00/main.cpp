/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:40:45 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/06 11:54:03 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("b", 1);
        std::cout << b;
        b.increment();
        std::cout << b;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try 
    {
        Bureaucrat c("c", 149);
        std::cout << c;
        c.decrement();
        std::cout << c;
        c.decrement();
        std::cout << c;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}