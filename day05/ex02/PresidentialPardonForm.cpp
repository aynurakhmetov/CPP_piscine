/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 22:37:09 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/16 00:16:47 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copyPresidentialPardonForm)
{
    *this = copyPresidentialPardonForm;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &otherPresidentialPardonForm)
{
    this->_target = otherPresidentialPardonForm._target;
    Form::operator=(otherPresidentialPardonForm);
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const 
{
    Form::execute(executor);
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
