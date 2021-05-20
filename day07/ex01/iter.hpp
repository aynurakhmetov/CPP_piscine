/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:29:07 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/19 16:15:34 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template<class T>
void iter(T const *array, int const &lengthOfArray, void (*func)(T const &))
{
    for (int i = 0; i < lengthOfArray; i++)
    {
        func(array[i]);
    }
}

#endif
