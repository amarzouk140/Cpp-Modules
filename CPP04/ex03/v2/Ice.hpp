/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:33:15 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/29 15:17:11 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

    public:
        Ice();
        Ice(const Ice &other);
        Ice	&operator=(const Ice &other);
        ~Ice();
        Ice(const std::string &type);

        AMateria*   clone() const;
        void        use(ICharacter& target);
};

#endif // ICE_HPP