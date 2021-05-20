/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 11:53:49 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/08 13:59:39 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{
public:
    Peon(void);
    Peon(std::string);
    Peon(Peon const  &);
    virtual ~Peon(void);
    Peon &operator=(Peon const  &);
    virtual void printConstructorParameters(void);
    virtual void getPolymorphed() const;
};

#endif
