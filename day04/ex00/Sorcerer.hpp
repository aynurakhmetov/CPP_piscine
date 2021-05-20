/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 11:53:37 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/08 14:52:39 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
private:
    Sorcerer(void);
public:
    Sorcerer(std::string, std::string);
    Sorcerer(Sorcerer const  &);
    ~Sorcerer(void);
    Sorcerer &operator=(Sorcerer const  &);
    void printConstructorParameters(void);
    std::string getName() const;
    std::string getTitle() const;
    void polymorph(Victim const &) const; 
private:
    std::string _name;
    std::string _title; 
};

std::ostream &operator<<(std::ostream &, Sorcerer const &);

#endif