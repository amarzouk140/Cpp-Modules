/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:14:17 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/29 11:22:13 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>
#include <string>

class ICE
{
    protected:
        std::string type;
    public:
        ICE();
        ICE(ICE const & src);
        ICE& operator=(ICE const & src);
        virtual ~ICE();
        std::string const &getType() const;
        virtual AMateria* clone() const;
        
}


#endif