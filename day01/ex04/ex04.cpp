/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 21:49:06 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/08 19:21:58 by gmarva           ###   ########.fr       */
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

    std::cout << std::setw(30) << std::left  << "HI THIS IS POINTER: " << *strPointer << std::endl;
    std::cout << std::setw(30) << std::left  << "HI THIS IS REFERENCE: " << strReference << std::endl;
    return (0);
}

// clang++ -Wall -Wextra -Werror ex04.cpp -o test