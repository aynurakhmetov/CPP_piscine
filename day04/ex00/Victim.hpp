/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 11:53:42 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/08 13:47:19 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include <string>

class Victim
{
public:
    Victim(void);
    Victim(std::string);
    Victim(Victim const  &);
    virtual ~Victim(void);
    Victim &operator=(Victim const  &);
    virtual void printConstructorParameters(void);
    std::string getName() const;
    virtual void getPolymorphed() const;
private:
    std::string _name;
};

std::ostream &operator<<(std::ostream &, Victim const &);

#endif
