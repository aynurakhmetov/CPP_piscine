/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 01:03:25 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/17 18:04:49 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(Intern const &);
    Intern &operator=(Intern const &);
    virtual ~Intern();
    Form    *makeForm(std::string, std::string);
private:
    static const std::string _forms[];
    int                     _searchForm(std::string);
    Form                    *_createSCF(std::string);
    Form                    *_createPPF(std::string);
    Form                    *_createRRF(std::string);
    Form*                   (Intern::*_newForms[3])(std::string) = {&Intern::_createSCF, &Intern::_createPPF, &Intern::_createRRF};
};

#endif