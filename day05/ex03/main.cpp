/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 00:24:26 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/17 17:58:03 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        std::cout << "TEST 1" << std::endl;
        Intern someRandomIntern;
	    Form* rrf;
	    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << "Intern Create" << std::endl;
    }
    catch(const std::string e)
    {
        std::cerr << e << '\n';
    }

    try
    {
        std::cout << "TEST 2" << std::endl;
        Intern someRandomIntern;
	    Form* rrf;
	    rrf = someRandomIntern.makeForm("snils", "GrazhdaninRF");
    }
    catch(const std::string e)
    {
        std::cerr << e << '\n';
    }
}

// clang++ -Wall -Wextra -Werror *.cpp -o test
