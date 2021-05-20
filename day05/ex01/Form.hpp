/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 09:25:34 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/15 21:30:13 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
    Form();
    Form(std::string const, int const, int const);
    Form(Form const &);
    Form &operator=(Form const &);
    ~Form();
    void        beSignded(Bureaucrat const &);
    std::string getName()const;
    bool        getSigned() const;
    int         getGradeSign() const;
    int         getGradeExecute() const;
    class       GradeTooHighException : public std::exception
    {   
        public:
            virtual const char* what() const throw();
    }; // 1 is highest
    class       GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    }; // 150 is lowest
private:
    std::string const   _name;
    bool                _signed;
    int const           _gradeSign;
    int const           _gradeExecute;
    
};

std::ostream &operator<<(std::ostream &, Form const &);

#endif