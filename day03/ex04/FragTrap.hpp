/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:47:22 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/07 18:55:07 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap(void);
    FragTrap(std::string);
    FragTrap(FragTrap const &);
    FragTrap &operator=(FragTrap const &);
    virtual ~FragTrap(void);
    void vaulthunter_dot_exe(std :: string const & target);
};

#endif