/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:29:21 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 15:50:55 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "MagicWand.hpp"
#include "DarkLord.hpp"

int main()
{
    // TEST 0 FROM SUBJECT
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
    std::cout << "------DELETE-----" << std::endl;
    delete me;

    std::cout << std::endl << "------TEST 1-----" << std::endl;
    Enemy *mutant = new SuperMutant();
    Enemy *scorp = new RadScorpion();
    std::cout << "Mutant has " << mutant->getHP() << " HP and " << mutant->getType() << " type!" << std::endl;
    std::cout << "Scorp has " << scorp->getHP() << " HP and " << scorp->getType() << " type!" << std::endl;
    mutant->takeDamage(10);
    std::cout << "Mutant has " << mutant->getHP() << " HP and " << mutant->getType() << " type!" << std::endl;
    
    std::cout << std::endl << std::endl << "------TEST 2 & 3 & 4-----" << std::endl;
    Character *spidy = new Character("Spider Man");
    std::cout << *spidy;
    spidy->equip(pr);
    std::cout << "Plasma Rifle has " << pr->getAPCost() << " AP cost & " << pr->getDamage() 
        << " damages & " << pr->getName() << " name!" << std::endl;
    spidy->attack(mutant);
    std::cout << *spidy;
    spidy->equip(pf);
    std::cout << "Power Fist has " << pf->getAPCost() << " AP cost & " << pf->getDamage() 
        << " damages & " << pf->getName() << " name!" << std::endl;
    spidy->attack(mutant);
    std::cout << *spidy;
    spidy->recoverAP();
    std::cout << *spidy;
    delete spidy;

    std::cout << std::endl << std::endl << "------TEST 5-----" << std::endl;
    delete pr;
    delete pf;

    std::cout << std::endl << std::endl << "------TEST 6-----" << std::endl;
    Character *harry = new Character("Harry Potter");
    Enemy *darklord = new DarkLord();
    std::cout << "Dark Lord has " << darklord->getHP() << " HP and " << darklord->getType() << " type!" << std::endl;
    AWeapon *wand = new MagicWand();
    std::cout << "Weapon has " << wand->getAPCost() << " AP cost & " << wand->getDamage() 
        << " damages & " << wand->getName() << " name!" << std::endl;
    std::cout << *harry;
    harry->equip(wand);
    harry->attack(darklord);
    std::cout << "Dark Lord has " << darklord->getHP() << " HP and " << darklord->getType() << " type!" << std::endl;
    std::cout << *harry;
    harry->attack(darklord);
    std::cout << "Dark Lord has " << darklord->getHP() << " HP and " << darklord->getType() << " type!" << std::endl;
    std::cout << *harry;
    harry->attack(darklord);
    std::cout << "Dark Lord has " << darklord->getHP() << " HP and " << darklord->getType() << " type!" << std::endl;
    std::cout << *harry;
    harry->attack(darklord);
    std::cout << *harry;
    harry->recoverAP();
    std::cout << *harry;

    std::cout << std::endl << std::endl << "------TEST 7 & 8-----" << std::endl;
    std::cout << "Mutant has " << mutant->getHP() << " HP and " << mutant->getType() << " type!" << std::endl;
    std::cout << "Scorp has " << scorp->getHP() << " HP and " << scorp->getType() << " type!" << std::endl;
    mutant->takeDamage(10000);
    scorp->takeDamage(10000);
    std::cout << "Mutant has " << mutant->getHP() << " HP and " << mutant->getType() << " type!" << std::endl;
    std::cout << "Scorp has " << scorp->getHP() << " HP and " << scorp->getType() << " type!" << std::endl;
    delete mutant;
    delete scorp;

    std::cout << std::endl << std::endl << "------TEST 9-----" << std::endl;


    return 0;
}

// clang++ -Wall -Wextra -Werror *.cpp -o test