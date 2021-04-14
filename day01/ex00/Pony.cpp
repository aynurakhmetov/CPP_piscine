/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:33:26 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/09 14:01:02 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

MyLittlePony::MyLittlePony(std::string name, std::string owner, std::string country, int age, int weight, int growth)
{
    this->_name = name;
    this->_owner = owner;
    this->_country = country;
    this->_age = age;
    this->_weight = weight;
    this->_growth = growth;
    std::cout << "Пони " << this->_name << " родился." << std::endl;
}

MyLittlePony::~MyLittlePony()
{
    std::cout << "Пони " << this->_name << " улетел на небеса." << std::endl << std::endl;
}

void MyLittlePony::PonyDataPrint()
{    
    std::cout << "Привет, мой маленький пони. Тебя зовут " << _name << ". А я - твой хозяин " << _owner << "." << std::endl;
    std::cout << "Страна, в которой ты живешь, называется " << _country << std::endl;
    std::cout << "Тебе " << _age << " лет. Твой вес - " << _weight << " кг. А рост " << _growth << " см." << std::endl;
}
