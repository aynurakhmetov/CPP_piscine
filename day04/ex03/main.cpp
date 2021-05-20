/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:31:49 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/11 21:47:15 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    // TEST 1, 2, 3
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
    
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
    
	delete bob;
	delete me;
	delete src;

    // TEST 4, 5
    std::cout << std::endl;
    AMateria *newIce = new Ice();
    AMateria *secondIce;
    secondIce = newIce->clone();

    Character *subZero = new Character("subzero");
    subZero->equip(newIce);
    std::cout << "XP of newIce = "  << newIce->getXP() << ", XP of secondIce = " << secondIce->getXP() << std::endl;
    subZero->use(1, *bob);
    std::cout << "XP of newIce = "  << newIce->getXP() << ", XP of secondIce = " << secondIce->getXP() << std::endl;
    subZero->use(0, *bob);
    std::cout << "XP of newIce = "  << newIce->getXP() << ", XP of secondIce = " << secondIce->getXP() << std::endl;
    subZero->equip(secondIce);
    subZero->use(1, *bob);
    std::cout << "XP of newIce = "  << newIce->getXP() << ", XP of secondIce = " << secondIce->getXP() << std::endl;
    subZero->use(2, *bob);
    std::cout << "XP of newIce = "  << newIce->getXP() << ", XP of secondIce = " << secondIce->getXP() << std::endl;

    delete bob;
    
    // TEST 6
    std::cout << std::endl;
    ICharacter *scorpion = new Character(*subZero);
    std::cout << scorpion->getName() << std::endl;
    scorpion = subZero;
    std::cout << scorpion->getName() << std::endl;

    delete scorpion;
    
     
	return 0;
}

// clang++ -Wall -Wextra -Werror *.cpp