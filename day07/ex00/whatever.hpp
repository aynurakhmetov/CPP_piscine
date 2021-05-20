/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:43:47 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/19 15:26:12 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
# include <string>

template <class T>
void swap(T &valueOne, T &valueTwo)
{
    T valueTemp = valueOne;
    valueOne = valueTwo;
    valueTwo = valueTemp;    
}

template <class T>
T const &min(T const &valueOne, T const &valueTwo)
{
    if (valueOne < valueTwo)
        return valueOne;
    else
        return valueTwo;
}

template <class T>
T const &max(T const &valueOne, T const &valueTwo)
{
    if (valueOne > valueTwo)
        return valueOne;
    else
        return valueTwo;
}

#endif
