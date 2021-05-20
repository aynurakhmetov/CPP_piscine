/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:01:16 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/09 16:35:02 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
    std::string answer;
    std::string number;
    ZombieHorde *newHorde;
    long long numberLL;
    
    for (;;)
    {
        numberLL = 0;
        std::cout << "Хотите создать зомби (\"да\" / \"нет\")?" << std::endl;
        std::getline(std::cin, answer);
        if (std::cin.eof())
        {
           break ;
        }
        if (answer == "да" || answer == "Да" || answer == "ДА")
        {
            std::cout << "Введите количество зомби" << std::endl;
            std::getline(std::cin, number);
            if (std::cin.eof())
                break ;
            for (int i = 0; number[i] != '\0'; i++)
            {
                if (number[i] >= '0' && number[i] <= '9')
                    numberLL = numberLL * 10 + number[i] - '0';
                else
                {
                    std::cout << "Ошибка! Принимается только положтельное натуральное число" << std::endl;
                    numberLL = -1; 
                    break ;
                }
            }
            if (numberLL > 0)
            {
                newHorde = new ZombieHorde(numberLL);
                newHorde->announce();
                delete newHorde;
            }
            else if (numberLL == 0)
            {
                std::cout << "Ошибка! Принимается только положтельное натуральное число" << std::endl;
            }
        }
        else if (answer == "нет" || answer == "Нет" || answer == "НЕТ")
        {
            break ;
        }
    }
    return (0);
}

// clang++ -Wall -Wextra -Werror *.cpp -o zombie