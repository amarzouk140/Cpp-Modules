/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:34:52 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/29 15:31:35 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria*       materias[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource&  operator=(const MateriaSource & other);
        ~MateriaSource();


        AMateria*       createMateria(std::string const & type);
        void            learnMateria(AMateria* );
        AMateria*       getMateria(std::string const & type);
};


#endif