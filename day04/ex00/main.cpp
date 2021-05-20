/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 11:53:54 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/08 15:18:41 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "HalfBlood.hpp"

int main()
{
    // TESTS FROM SUBJECT TESTS 3-5
    std::cout << "|----------- From subject ----------|" << std::endl;
    Sorcerer robert("Robert", "the Magnificent");
    
    Victim jim("Jimmy");
    Peon joe("Joe");
    
    std::cout << robert << jim << joe;
    
    robert.polymorph(jim);
    robert.polymorph(joe);

    // MY TESTS
    srand(time(NULL));
    std::cout << std::endl << "|----------- My tests ----------|" << std::endl;
    
    // TEST 1 + TEST 2
    Sorcerer tom("Volandemort", "Dark Lord");
    HalfBlood hermione("Hermione Hranger");
    
    std::cout << tom << hermione;
    hermione.sayASpell();
    tom.polymorph(hermione);
    std::cout << std::endl;

    // TEST 2
    HalfBlood *severus = new HalfBlood("Severus Snape");
    Victim *harry = new Victim("Harry Potter");
    harry->getPolymorphed();
    harry = severus;
    harry->getPolymorphed();
    delete harry;
    std::cout << std::endl;
    

    //TEST 6
    //Sorcerer newSorcerer;
    
    return 0;
}


// clang++ -Wall -Wextra -Werror *.cpp -o test
// ./test