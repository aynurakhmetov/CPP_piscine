/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 22:37:04 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/16 00:50:12 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copyRobotomyRequestForm)
{
    *this = copyRobotomyRequestForm;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &otherRobotomyRequestForm)
{
    this->_target = otherRobotomyRequestForm._target;
    Form::operator=(otherRobotomyRequestForm);
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const 
{
    Form::execute(executor);
	if ((rand() % 2))
    {
        std::string massage = "Robotomized failure";
		throw massage;
    }
    std::cout << "drrrrrrrdrrrrdrrrrdrrr" << std::endl;
	std::cout << this->_target << " has been robotomized successfully" << std::endl;
}
