/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 00:24:26 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/15 22:04:56 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        std::cout << "TEST 1: grade sign = 75, grade exec = 75" << std::endl;
        Form pasport = Form("pasport", 75, 75);
        std::cout << pasport;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try
    {
        std::cout << "TEST 2: grade sign = 0, grade exec = 75" << std::endl;
        Form snils = Form("snils", 0, 75);
        std::cout << snils;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try
    {
        std::cout << "TEST 3: grade sign = 75, grade exec = 151" << std::endl;
        Form snils = Form("snils", 75, 151);
        std::cout << snils;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try
    {
        std::cout << "TEST 4: Bureaucrat's grade = 10, try sign pasport 75 75" << std::endl;
        Bureaucrat p("Pasportistka", 10);
        std::cout << p;
        Form inn = Form("inn", 75, 75);
        std::cout << inn;
        p.signForm(inn);
        std::cout << inn;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

     try
    {
        std::cout << "TEST 5: Bureaucrat's grade = 90, try sign pasport 75 75" << std::endl;
        Bureaucrat p("Pasportistka", 90);
        std::cout << p;
        Form inn = Form("inn", 75, 75);
        std::cout << inn;
        p.signForm(inn);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
}

// clang++ -Wall -Wextra -Werror *.cpp -o test