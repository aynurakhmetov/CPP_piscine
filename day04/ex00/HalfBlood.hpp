/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HalfBlood.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:09:33 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/08 14:31:02 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HALFBLOOD_HPP
# define HALFBLOOD_HPP
# include <iostream>
# include <string>
# include "Victim.hpp"

class HalfBlood : public Victim
{
public:
    HalfBlood(void);
    HalfBlood(std::string);
    HalfBlood(HalfBlood const  &);
    virtual ~HalfBlood(void);
    HalfBlood &operator=(HalfBlood const  &);
    virtual void printConstructorParameters(void);
    virtual void getPolymorphed() const;
    void sayASpell();
};

#endif