/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 23:08:31 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/25 23:11:17 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite) {
    std::cout << *it << std::endl;
++it; }
std::stack<int> s(mstack); return 0;
}