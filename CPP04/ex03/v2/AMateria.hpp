/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:29:33 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/29 14:40:07 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
protected:
    std::string type;
public:
    AMateria();
    AMateria(AMateria const & src);
    AMateria	&operator=(const AMateria &other);
    virtual ~AMateria();

    AMateria(std::string const & type);
    
    std::string const &getType() const;
    virtual AMateria* clone() const = 0;
    virtual void      use(ICharacter& target);
};

#endif