/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:11:56 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/29 12:17:14 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
protected:
	std::string	type;

public:
	AMateria();
	AMateria(const std::string &type);
	AMateria(const AMateria &other);
	AMateria	&operator=(const AMateria &other);
	virtual ~AMateria();

	const std::string	&getType() const;
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);
};




#endif