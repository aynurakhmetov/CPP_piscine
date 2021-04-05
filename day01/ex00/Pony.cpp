/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:33:26 by gmarva            #+#    #+#             */
/*   Updated: 2021/03/28 18:24:00 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

MyLittlePony::MyLittlePony(std::string name, std::string owner, std::string country, int age, int weight, int growth)
{
    this->name = name;
    this->owner = owner;
    this->country = country;
    this->age = age;
    this->weight = weight;
    this->growth = growth;
}

MyLittlePony::~MyLittlePony()
{
    std::cout << "Пони " << this->name << " удален." << std::endl;
}

void MyLittlePony::PonyDataPrint()
{    
    std::cout << "Привет, мой маленький пони. Тебя зовут " << name << ". А я - твой хозяин " << owner << "." << std::endl;
    std::cout << "Страна, в которой ты живешь, называется " << country << std::endl;
    std::cout << "Тебе " << age << " лет. Твой вес - " << weight << " кг. А рост " << growth << " см." << std::endl;
}
