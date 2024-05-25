/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:46:21 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/25 23:07:29 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() 
{
    try 
    {
        // subject small test
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        // Using the addNumbers function to add a range of numbers from different containers
        std::vector<int> vec;
        vec.push_back(100);
        vec.push_back(200);
        vec.push_back(300);

        std::list<int> lst;
        lst.push_back(400);
        lst.push_back(500);
        lst.push_back(600);

        std::deque<int> deq;
        deq.push_back(700);
        deq.push_back(800);
        deq.push_back(900);

        Span sp2 = Span(20);
        sp2.addNumbers(vec.begin(), vec.end());
        sp2.addNumbers(lst.begin(), lst.end());
        sp2.addNumbers(deq.begin(), deq.end());
        sp2.addNumber(1);
        sp2.addNumber(500); // This will add a duplicate number to test

        std::cout << "Shortest Span in sp2: " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest Span in sp2: " << sp2.longestSpan() << std::endl;

        // Large test with at least 10,000 numbers
        Span sp3 = Span(10000);
        sp3.fillRandomNumbers(10000, 100000); // Adding 10,000 random numbers

        std::cout << "Shortest Span in sp3: " << sp3.shortestSpan() << std::endl;
        std::cout << "Longest Span in sp3: " << sp3.longestSpan() << std::endl;

        // Test with sorted numbers to ensure shortest span is 1
        Span sp4 = Span(10000);
        for (int i = 0; i < 10000; ++i)
            sp4.addNumber(i);

        std::cout << "Shortest Span in sp4: " << sp4.shortestSpan() << std::endl;
        std::cout << "Longest Span in sp4: " << sp4.longestSpan() << std::endl;

    } 
    catch (const std::exception &e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}