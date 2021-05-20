/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 00:24:26 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/16 00:49:26 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    srand(time(NULL));
    try
    {
        Bureaucrat jekeha("jekeha", 1);
		std::cout << jekeha;
        ShrubberyCreationForm home("treeNearHome");
		jekeha.signForm(home);
		jekeha.executeForm(home);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const std::string& e)
    {
        std::cerr << e << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat jekeha("jekeha", 140);
		std::cout << jekeha;
        ShrubberyCreationForm home("treeNearHome");
		jekeha.signForm(home);
		jekeha.executeForm(home);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const std::string& e)
    {
        std::cerr << e << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat jekeha("jekeha", 150);
		std::cout << jekeha;
        ShrubberyCreationForm home("treeNearHome");
		jekeha.signForm(home);
		jekeha.executeForm(home);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const std::string& e)
    {
        std::cerr << e << std::endl;
    }
    std::cout << "=============" << std::endl;

    try
    {
        Bureaucrat jekeha("jekeha", 1);
		std::cout << jekeha;
        PresidentialPardonForm home("pardonForm");
		jekeha.signForm(home);
		jekeha.executeForm(home);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const std::string& e)
    {
        std::cerr << e << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat jekeha("jekeha", 20);
		std::cout << jekeha;
        PresidentialPardonForm home("pardonForm");
		jekeha.signForm(home);
		jekeha.executeForm(home);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const std::string& e)
    {
        std::cerr << e << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat jekeha("jekeha", 150);
		std::cout << jekeha;
        PresidentialPardonForm home("pardonForm");
		jekeha.signForm(home);
		jekeha.executeForm(home);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const std::string& e)
    {
        std::cerr << e << std::endl;
    }
    std::cout << "=============" << std::endl;

    try
    {
        Bureaucrat jekeha("jekeha", 1);
		std::cout << jekeha;
        RobotomyRequestForm home("robotForm");
		jekeha.signForm(home);
		jekeha.executeForm(home);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const std::string& e)
    {
        std::cerr << e << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat jekeha("jekeha", 1);
		std::cout << jekeha;
        RobotomyRequestForm home("robotForm");
		jekeha.signForm(home);
		jekeha.executeForm(home);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const std::string& e)
    {
        std::cerr << e << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat jekeha("jekeha", 50);
		std::cout << jekeha;
        RobotomyRequestForm home("robotForm");
		jekeha.signForm(home);
		jekeha.executeForm(home);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const std::string& e)
    {
        std::cerr << e << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat jekeha("jekeha", 150);
		std::cout << jekeha;
        RobotomyRequestForm home("robotForm");
		jekeha.signForm(home);
		jekeha.executeForm(home);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const std::string& e)
    {
        std::cerr << e << std::endl;
    }
    std::cout << "=============" << std::endl;
    
}

// clang++ -Wall -Wextra -Werror *.cpp -o test