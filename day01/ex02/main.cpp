/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:02:52 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/08 19:00:38 by gmarva           ###   ########.fr       */
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
        if (answer == "да")
        {
            std::cout << "Введите тип зомби?" << std::endl;
            std::getline(std::cin, type);
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

// clang++ -Wall -Wextra -Werror main.cpp Zombie.cpp ZombieEvent.cpp -o zombie