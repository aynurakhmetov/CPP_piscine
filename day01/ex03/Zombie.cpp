/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:01:07 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/09 15:50:01 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    int numTypes;

    std::string types[] = {"Красивые", "Растения", "Роботы", "Рыбы", "Мутанты"};
    numTypes = rand() % 5;
    this->_name = randomName();
    this->_type = types[numTypes];
    std::cout << "Зомби <" << this->_name << "(" << this->_type << ")> создан" << std::endl;
}
 
Zombie::Zombie(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
    std::cout << "Зомби <" << this->_name << "(" << this->_type << ")> создан" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Зомби <" << this->_name << "(" << this->_type << ")> убит" << std::endl;
}

void Zombie::announce()
{
    std::cout << "<" << this->_name << "(" << this->_type << ")> Мозгиииииии..." << std::endl;
}

std::string Zombie::randomName()
{
    int numNames;
    std::string newName;

    std::string names[] = {"Айнур", "Ильнур", "Шамиль", "Руслан", "Аделя"};
    numNames = rand() % 5;
    newName = names[numNames];
    return (newName);
}
