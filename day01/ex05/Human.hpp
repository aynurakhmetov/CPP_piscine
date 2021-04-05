/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 22:14:39 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/02 23:15:47 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.cpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string Human::identify()
{
    return (personBrain.identify());
}

Brain   &Human::getBrain()
{
    return (personBrain);
}