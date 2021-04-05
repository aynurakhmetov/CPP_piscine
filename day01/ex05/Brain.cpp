/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 22:14:33 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/02 22:54:18 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{   
}

Brain::~Brain()
{
}

std::string Brain::identify()
{
    std::stringstream strAdress;
    strAdress << std::hex << std::showbase << std::uppercase << (long)this;
    return (strAdress.str());
}
