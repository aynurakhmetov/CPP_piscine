/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 15:06:55 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/11 13:49:26 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &copyMS)
{
    *this = copyMS;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &otherMS)
{
    for (int i = 0; i < 4; i++)
    {
        if (otherMS._inventory[i])
            this->_inventory[i] = otherMS._inventory[i]->clone();
    }
    return *this;
}

MateriaSource::~MateriaSource()
{   
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
        {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
    }
}

void MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = materia;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
		if (this->_inventory[i])
        {
            if (this->_inventory[i]->getType() == type)
			    return (this->_inventory[i]->clone());
        }
    }
	return (NULL); 
}
