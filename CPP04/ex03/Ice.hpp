/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:14:17 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/29 13:23:09 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice : public AMateria
{
    public:
        Ice();
        Ice(const std::string &type);
        Ice(const Ice &other);
        Ice	&operator=(const Ice &other);
        ~Ice();

        AMateria	*clone() const;
        void		use(ICharacter &target);
};

#endif