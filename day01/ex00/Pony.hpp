/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:33:23 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/09 13:56:24 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP
#include <iostream>
#include <string>

class MyLittlePony
{
private:
    std::string _name;
    std::string _owner;
    std::string _country;
    int _age;
    int _weight;
    int _growth;
public:
    MyLittlePony(std::string name, std::string owner, std::string country, int age, int weight, int growth);
    ~MyLittlePony();
    void PonyDataPrint();
};

#endif