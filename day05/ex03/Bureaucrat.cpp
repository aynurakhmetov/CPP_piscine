/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 00:24:31 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/15 23:27:12 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default Bureaucrat"), _grade(75)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copyBureaucrat)
{
    *this = copyBureaucrat;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &otherBureaucrat)
{
    this->_name = otherBureaucrat._name;
    this->_grade = otherBureaucrat._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::gradeUp()
{
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::gradeDown()
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "!!! Exception: Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "!!! Exeption: Grade Too Low";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
    out << "NAME <" << bureaucrat.getName() << ">, bureaucrat grade = " << bureaucrat.getGrade() << std::endl;
    return out;
}

void Bureaucrat::signForm(Form &form) const
{
    try
    {
        form.beSignded(*this);
        std::cout << "<" << this->_name << "> signs <" << form.getName() << ">" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "<" << this->_name << "> cannot sign <" << form.getName() << "> because: " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const &form)
{
    try
    {
		form.execute(*this);
		std::cout << "<" << this->_name << "> executes <" << form.getName() << ">" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "<" << this->_name << "> cannot execute <" << form.getName() << "> because: " << e.what() << std::endl;
	}
}
