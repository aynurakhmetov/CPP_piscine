/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:47:39 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/21 19:21:17 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    srand(time(NULL)); 

    std::cout << "НОВЫЙ РОБОТ:" << std::endl;
    ClapTrap newClap("РОБОТ ПИР");
    std::cout << std::endl;

    std::cout << "АТАКИ:" << std::endl;
    newClap.rangedAttack("ДЕДЛАЙНЫ");
    newClap.meleeAtack("ПРОЕКТЫ");
    std::cout << std::endl;

    std::cout << "УРОН:" << std::endl;
    newClap.takeDamage(5);
    newClap.takeDamage(10);
    newClap.takeDamage(100);
    newClap.takeDamage(-10);
    std::cout << std::endl;

    std::cout << "ВОССТАНОВЛЕНИЕ:" << std::endl;
    newClap.beReparired(1);
    newClap.beReparired(10);
    newClap.beReparired(110);
    std::cout << std::endl;

    std::cout << "=======================================" << std::endl << std::endl;
    
    std::cout << "НОВЫЙ РОБОТ:" << std::endl;
    FragTrap newFrag("РОБОТ АЛЕКСЕЙ");
    std::cout << std::endl;

    std::cout << "АТАКИ:" << std::endl;
    newFrag.rangedAttack("ЕДИНАЯ РОССИЯ");
    newFrag.meleeAtack("РУССКИЙ РЭП");
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

    std::cout << "=======================================" << std::endl << std::endl;

    std::cout << "НОВЫЙ РОБОТ:" << std::endl;
    ScavTrap newScav("РОБОТ ЛЮБОВЬ");
    std::cout << std::endl;

    std::cout << "АТАКИ:" << std::endl;
    newScav.rangedAttack("ИК 2");
    newScav.meleeAtack("ГД");
    std::cout << std::endl;

    std::cout << "УРОН:" << std::endl;
    newScav.takeDamage(5);
    newScav.takeDamage(10);
    newScav.takeDamage(100);
    newScav.takeDamage(-10);
    std::cout << std::endl;

    std::cout << "ВОССТАНОВЛЕНИЕ:" << std::endl;
    newScav.beReparired(1);
    newScav.beReparired(10);
    newScav.beReparired(110);
    std::cout << std::endl;

    std::cout << "ОХОТНИК ЗА УБЕЖИЩАМИ:" << std::endl;
    newScav.challengeNewcomer("СЛАВА МЭРЛОУ");
    newScav.challengeNewcomer("САША ГУДКОВ");
    newScav.challengeNewcomer("ДАНЯ ПОПЕРЕЧНЫЙ");
    newScav.challengeNewcomer("ИЛЬЯ ВАРЛМАОВ");
    newScav.challengeNewcomer("ВИЛСАКОМ");
    std::cout << std::endl; 
    
    
    return 0;
}

// clang++ -Wall -Wextra -Werror *.cpp -o test