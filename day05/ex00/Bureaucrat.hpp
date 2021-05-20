/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 00:24:29 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/13 01:21:50 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>

class Bureaucrat
{
public:
    Bureaucrat();
    Bureaucrat(std::string, int);
    Bureaucrat(Bureaucrat const &);
    Bureaucrat &operator=(Bureaucrat const &);
    ~Bureaucrat();
    std::string getName() const;
    int         getGrade() const;
    void        gradeUp();
    void        gradeDown();
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
    std::string _name;
    int         _grade;
};

std::ostream &operator<<(std::ostream &, Bureaucrat const &);

#endif
