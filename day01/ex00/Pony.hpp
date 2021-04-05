/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:33:23 by gmarva            #+#    #+#             */
/*   Updated: 2021/03/28 18:16:56 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP
#include <iostream>
#include <string>

class MyLittlePony
{
private:
    std::string name;
    std::string owner;
    std::string country;
    int age;
    int weight;
    int growth;
public:
    MyLittlePony(std::string name, std::string owner, std::string country, int age, int weight, int growth);
    ~MyLittlePony();
    void PonyDataPrint();
};

#endif