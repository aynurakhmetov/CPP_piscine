/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 01:03:28 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/17 17:58:31 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &intern)
{
    *this = intern;
}

Intern &Intern::operator=(Intern const &intern)
{
    (void)intern;
    return *this;
}

Intern::~Intern()
{
}

const std::string Intern::_forms[3] = {"shrubbery creation", "presidential pardon", "robotomy request"};

int Intern::_searchForm(std::string formName)
{
    int k = 0;
    std::string massage = "!!! Form not found";

    for (int i = 0; i < 3; i++)
    {
        if (_forms[i] == formName)
        {
            k++;
            return i;
        }
    }
    throw massage;
    return -1;
}

Form *Intern::_createSCF(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form *Intern::_createPPF(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form *Intern::_createRRF(std::string target)
{
    return (new RobotomyRequestForm(target));
}


Form *Intern::makeForm(std::string formName, std::string target)
{
    try
    {
        return(this->*_newForms[_searchForm(formName)])(target);
    }
    catch(const std::string massage)
    {
        throw massage;
    }
    return (NULL);
}
