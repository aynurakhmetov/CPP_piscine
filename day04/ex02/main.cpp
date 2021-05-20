/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 21:04:37 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 22:47:02 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	// TEST 0-1
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	// TEST 2-4
	std::cout << std::endl << "TEST 2" << std::endl;
	ISpaceMarine* nurlan = new TacticalMarine;
	ISpaceMarine* tambi = new AssaultTerminator;
	ISpaceMarine* reptiloid = new TacticalMarine;
	ISpaceMarine* leha = new AssaultTerminator;
	ISquad* chbd = new Squad;
	std::cout << "CHBD has " << chbd->getCount() << " comics" << std::endl;
	chbd->push(nurlan);
	chbd->push(tambi);
	chbd->push(reptiloid);
	chbd->push(leha);
	chbd->push(leha->clone());
	std::cout << "CHBD has " << chbd->getCount() << " comics" << std::endl;
	for (int i = 0; i < chbd->getCount(); ++i)
	{	std::cout << std::endl << i << "========" << std::endl;
		chbd->getUnit(i)->battleCry();
		chbd->getUnit(i)->meleeAttack();
		chbd->getUnit(i)->rangedAttack();
	}
	std::cout << std::endl;
	
	ISquad* brs(chbd);
	std::cout << "BRS has " << chbd->getCount() << " comics" << std::endl;
	std::cout << std::endl;
	
	chbd->push(reptiloid->clone());
	brs = chbd;
	std::cout << "BRS has " << chbd->getCount() << " comics" << std::endl;
	std::cout << std::endl;
	
	delete chbd;
	std::cout << std::endl;
	return 0;
}

// clang++ -Wall -Wextra -Werror *.cpp -o test