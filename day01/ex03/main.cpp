/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:01:16 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/02 21:45:48 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
    std::string answer;
    std::string number;
    ZombieHorde *newHorde;
    
    for (int i = 0; i < 1;)
    {
        std::cout << "Хотите создать зомби (да / нет)?" << std::endl;
        std::getline(std::cin, answer);
        if (answer == "да")
        {
            std::cout << "Введите количество зомби" << std::endl;
            std::getline(std::cin, number);
            newHorde = new ZombieHorde(atoi(number.c_str()));
            newHorde->announce();
            delete newHorde;
        }
        else if (answer == "нет")
        {
            i = 1;
        }
        else
            continue;
    }
    return (0);
}

// clang++ -Wall -Wextra -Werror main.cpp Zombie.cpp ZombieHorde.cpp -o zombie