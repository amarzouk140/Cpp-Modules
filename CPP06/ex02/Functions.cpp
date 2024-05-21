/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:50:07 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/21 10:01:13 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate() 
{
    srand(static_cast<unsigned int>(time(0)));
    int random = rand() % 3;
    switch (random) 
    {
        case 0:
            std::cout << "Generated: A" << std::endl;
            return new A();
        case 1:
            std::cout << "Generated: B" << std::endl;
            return new B();
        case 2:
            std::cout << "Generated: C" << std::endl;
            return new C();
    }
    return NULL; // This line should never be reached
}

void identify(Base* p) 
{
    if (dynamic_cast<A*>(p))
        std::cout << "Pointer points to an instance of class A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Pointer points to an instance of class B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Pointer points to an instance of class C" << std::endl;
    else
        std::cout << "Pointer points to an unknown type" << std::endl;
}

void identify(Base& p) 
{
    try 
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Reference refers to an instance of class A" << std::endl;
        return;
    } 
    catch (...) {}
    try 
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "Reference refers to an instance of class B" << std::endl;
        return;
    } 
    catch (...) {}
    try 
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "Reference refers to an instance of class C" << std::endl;
        return;
    } 
    catch (...) {}
    std::cout << "Reference refers to an unknown type" << std::endl;
}