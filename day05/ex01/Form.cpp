/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 09:25:38 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/15 21:49:35 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _signed(false), _gradeSign(0), _gradeExecute(0)
{
}

Form::Form(std::string const name, int const gradesign, int const gradeexecute) : 
_name(name), _gradeSign(gradesign), _gradeExecute(gradeexecute)
{
    this->_signed = false;
    if (this->_gradeSign < 1 || this->_gradeExecute < 1)
        throw Form::GradeTooHighException();
    else if (this->_gradeSign > 150 || this->_gradeExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &copyForm) : _name(copyForm._name), _gradeSign(copyForm._gradeSign), _gradeExecute(copyForm._gradeExecute)
{
    this->_signed = copyForm._signed;
}

Form &Form::operator=(Form const &otherForm)
{
    this->_signed = otherForm._signed;
    return *this;
}

Form::~Form()
{
}

std::string Form::getName() const
{
    return this->_name;
}

bool Form::getSigned() const
{
    return this->_signed;
}

int Form::getGradeSign() const
{
    return this->_gradeSign;
}

int Form::getGradeExecute() const
{
    return this->_gradeExecute;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "!!! Exception: Grade Too High For A Form";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "!!! Exeption: Grade Too Low For A Form";
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
    out << "NAME <" << form.getName() << ">, SIGNED STATUS = <" << form.getSigned() <<
        ">, GRADE SIGN = <" << form.getGradeSign() << ">, GRADE EXECUTE = <" << form.getGradeExecute() <<
        ">" << std::endl;
    return out;
}

void Form::beSignded(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() > this->getGradeSign())
        throw GradeTooLowException();
    else
        _signed = true;
}
