/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 00:24:26 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/17 18:06:28 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        std::cout << "TEST 1: grade = 75" << std::endl;
        Bureaucrat p("Pasportistka", 75);
        std::cout << p;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        std::cout << "TEST 2: grade = 1" << std::endl;
        Bureaucrat g("Gibdd", 1);
        std::cout << g;
        std::cout << "TEST 2.1: grade up, grade = 0" << std::endl;
        g.gradeUp();
        std::cout << g;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        std::cout << "TEST 3: grade = 150" << std::endl;
        Bureaucrat m("MFC", 1);
        std::cout << m;
        std::cout << "TEST 3.1: grade down, grade = 151" << std::endl;
        m.gradeUp();
        std::cout << m;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        std::cout << "TEST 4: grade = -1" << std::endl;
        Bureaucrat m("MFC", -1);
        std::cout << m;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }   

    std::cout << std::endl;

    try
    {
        std::cout << "TEST 5: grade = 151" << std::endl;
        Bureaucrat m("MFC", 151);
        std::cout << m;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }   
}

// clang++ -Wall -Wextra -Werror *.cpp -o test