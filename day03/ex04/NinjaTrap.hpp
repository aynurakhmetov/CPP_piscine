/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 20:07:02 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/07 18:55:22 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
    NinjaTrap(void);
    NinjaTrap(std::string);
    NinjaTrap(NinjaTrap const &);
    NinjaTrap &operator=(NinjaTrap const &);
    virtual ~NinjaTrap(void);
    void ninjaShoebox(ClapTrap &);
	void ninjaShoebox(FragTrap &);
	void ninjaShoebox(ScavTrap &);
	void ninjaShoebox(NinjaTrap &);
};

#endif