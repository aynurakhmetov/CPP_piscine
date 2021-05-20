/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:02:52 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/09 14:14:13 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    std::string answer;
    std::string type;
    ZombieEvent newEvent;
    
    for (;;)
    {
        std::cout << "Хотите создать зомби (да / нет)?" << std::endl;
        std::getline(std::cin, answer);
        if (std::cin.eof())
                break ;
        if (answer == "да")
        {
            std::cout << "Введите тип зомби?" << std::endl;
            std::getline(std::cin, type);
            if (std::cin.eof())
                break ;
            newEvent.setZombieType(type);
            newEvent.randomChump();
        }
        else if (answer == "нет")
        {
            break ;
        }
    }
    return (0);
}

// clang++ -Wall -Wextra -Werror *.cpp -o zombie