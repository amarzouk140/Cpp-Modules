/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:46:21 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/25 22:47:57 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() 
{
    try 
    {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        // Using the addNumbers function to add a range of numbers
        std::vector<int> vec;
        vec.push_back(100);
        vec.push_back(200);
        vec.push_back(300);
        Span sp2 = Span(10);
        sp2.addNumbers(vec.begin(), vec.end());
        sp2.addNumber(1);
        sp2.addNumber(500);

        std::cout << "Shortest Span in sp2: " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest Span in sp2: " << sp2.longestSpan() << std::endl;
    } 
    catch (const std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}


// int main() {
//     try {
//         Span sp = Span(5);

//         sp.addNumber(6);
//         sp.addNumber(3);
//         sp.addNumber(17);
//         sp.addNumber(9);
//         sp.addNumber(11);

//         std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
//         std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

//         // Using the addNumbers function to add a range of numbers from different containers
//         std::vector<int> vec;
//         vec.push_back(100);
//         vec.push_back(200);
//         vec.push_back(300);

//         std::list<int> lst;
//         lst.push_back(400);
//         lst.push_back(500);
//         lst.push_back(600);

//         std::deque<int> deq;
//         deq.push_back(700);
//         deq.push_back(800);
//         deq.push_back(900);

//         Span sp2 = Span(20);
//         sp2.addNumbers(vec.begin(), vec.end());
//         sp2.addNumbers(lst.begin(), lst.end());
//         sp2.addNumbers(deq.begin(), deq.end());
//         sp2.addNumber(1);

//         std::cout << "Shortest Span in sp2: " << sp2.shortestSpan() << std::endl;
//         std::cout << "Longest Span in sp2: " << sp2.longestSpan() << std::endl;
//     } catch (const std::exception &e) 
//     {
//         std::cerr << e.what() << std::endl;
//     }

//     return 0;
// }