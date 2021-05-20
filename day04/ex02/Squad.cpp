/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:13:11 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/10 14:35:00 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _count(0), _unit(NULL)
{
}

Squad::Squad(Squad const &copySquad)
{
    this->deletesquad();
    *this = copySquad;
}

Squad &Squad::operator=(Squad const &otherSquad)
{
    this->deletesquad();
    this->_count = otherSquad._count;
    for (int i = 0; this->_unit[i] != 0; i++)
    {
        this->_unit[i] = otherSquad._unit[i]->clone();
    }
    return *this;
}

Squad::~Squad()
{
    this->deletesquad();
}

int Squad::getCount() const
{
    return this->_count;
}

ISpaceMarine* Squad::getUnit(int index) const
{
    return this->_unit[index];
}

int Squad::push(ISpaceMarine* spacemarine)
{
    int i = 0;
    
    if (!spacemarine)
    {
        std::cout << "PUSH ERROR: SpaceMarint is empty" << std::endl;
    }
    else if (!this->_unit)
    {
        this->_unit = new ISpaceMarine*[1];
        this->_unit[0] = spacemarine;
        this->_count += 1;
    }
    else
    {
        while (this->_unit[i] != 0)
            i++;
        ISpaceMarine **newUnit = new ISpaceMarine*[i + 2];
        newUnit[i + 1] = 0;
        i = 0;
        while (this->_unit[i] != 0)
        {
            if (this->_unit[i] == spacemarine)
                return this->_count;
            newUnit[i] = this->_unit[i];
            i++;
        }
        newUnit[i] = spacemarine;
        delete[] this->_unit;
        this->_unit = newUnit;
        this->_count += 1;
    }
    return this->_count;
}

void Squad::deletesquad()
{
    for (int i = 0; this->_unit[i] != 0; i++)
    {
        delete(this->_unit[i]);
    }
    if (this->_unit != NULL)
        delete [] this->_unit;
}
