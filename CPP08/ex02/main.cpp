/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 23:08:31 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/26 01:15:58 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() 
{
    // Test with MutantStack
    std::cout << "subject test for MutantStack:" << std::endl;
    
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top element: " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "Size after pop: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    std::cout << "MutantStack elements:" << std::endl;
    while (it != ite) 
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);

    // Test with std::list
    std::cout << "\nTesting std::list:" << std::endl;
    std::list<int> lstack;

    lstack.push_back(5);
    lstack.push_back(17);

    std::cout << "Top element: " << lstack.back() << std::endl;

    lstack.pop_back();

    std::cout << "Size after pop: " << lstack.size() << std::endl;

    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    lstack.push_back(0);

    std::list<int>::iterator lit = lstack.begin();
    std::list<int>::iterator lite = lstack.end();

    ++lit;
    --lit;

    std::cout << "std::list elements:" << std::endl;
    while (lit != lite) 
    {
        std::cout << *lit << std::endl;
        ++lit;
    }

    return 0;
}
