/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:02:52 by gmarva            #+#    #+#             */
/*   Updated: 2021/03/29 16:56:04 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    std::string answer;
    std::string type;
    ZombieEvent newEvent;
    
    for (int i = 0; i < 1;)
    {
        std::cout << "Хотите создать зомби (да / нет)?" << std::endl;
        std::getline(std::cin, answer);
        if (answer == "да")
        {
            std::cout << "Введите тип зомби?" << std::endl;
            std::getline(std::cin, type);
            newEvent.setZombieType(type);
            newEvent.randomChump();
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

// clang++ -Wall -Wextra -Werror main.cpp Zombie.cpp ZombieEvent.cpp -o zombie