/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 22:37:16 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/16 00:35:48 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copyShrubberyCreationForm)
{
    *this = copyShrubberyCreationForm;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &otherShrubberyCreationForm)
{
    this->_target = otherShrubberyCreationForm._target;
    Form::operator=(otherShrubberyCreationForm);
    return *this;
}

static const char *asciiTree = ""
"     ccee88oo          \n"
"  C8O8O8Q8PoOb o8oo    \n"
" dOB69QO8PdUOpugoO9bD  \n"
"CgggbU8OU qOp qOdoUOdcb\n"
"    6OuU  /p u gcoUodpP\n"
"      ||/  /douUP      \n"
"        ||///          \n"
"         |||//         \n"
"         |||||         \n"
"         |||||         \n"
"   .....//||||| ....   \n";




void ShrubberyCreationForm::execute(Bureaucrat const &executor) const 
{
    Form::execute(executor);
    std::ofstream outFile;
	outFile.open (this->_target + "_shrubbery");
	outFile << asciiTree;
	outFile.close();
}
