/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 21:49:06 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/09 16:49:16 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::string strToDisplay = "HI THIS IS BRAIN";
    std::string *strPointer = &strToDisplay;
    std::string &strReference = strToDisplay;

    //strReference = "WOW";
    //*strPointer = "Hello";
    //std::cout << std::setw(30) << std::left  << "HI THIS IS ORIGINAL STRING: " << strToDisplay << std::endl;
    
    std::cout << std::setw(30) << std::left  << "HI THIS IS POINTER: " << *strPointer << std::endl;
    std::cout << std::setw(30) << std::left  << "HI THIS IS REFERENCE: " << strReference << std::endl;
    return (0);
}

// clang++ -Wall -Wextra -Werror *.cpp -o test