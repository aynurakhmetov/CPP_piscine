/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:47:39 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/07 17:57:31 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    srand(time(NULL)); 
    std::cout << "НОВЫЙ РОБОТ:" << std::endl;
    FragTrap newFrag("РОБОТ АЛЕКСЕЙ");
    std::cout << std::endl;

    std::cout << "АТАКИ:" << std::endl;
    newFrag.rangedAttack("ЕДИНАЯ РОССИЯ");
    newFrag.meleeAtack("ДВОРЕЦ В ГЕЛЕНДЖИКЕ");
    std::cout << std::endl;

    std::cout << "УРОН:" << std::endl;
    newFrag.takeDamage(5);
    newFrag.takeDamage(10);
    newFrag.takeDamage(100);
    newFrag.takeDamage(-10);
    std::cout << std::endl;

    std::cout << "ВОССТАНОВЛЕНИЕ:" << std::endl;
    newFrag.beReparired(1);
    newFrag.beReparired(10);
    newFrag.beReparired(110);
    std::cout << std::endl;

    std::cout << "ОХОТНИК ЗА УБЕЖИЩАМИ:" << std::endl;
    newFrag.vaulthunter_dot_exe("ПИКАЧУ");
    newFrag.vaulthunter_dot_exe("БУЛЬБАЗАВР");
    newFrag.vaulthunter_dot_exe("ПСАЙДАК");
    newFrag.vaulthunter_dot_exe("СЕЙЛАРМУН");
    newFrag.vaulthunter_dot_exe("СЕЙЛАРМЕРКУРИ");
    std::cout << std::endl; 
    return 0;
}

// clang++ -Wall -Wextra -Werror *.cpp -o test