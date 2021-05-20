/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:06:36 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/20 10:43:05 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <deque>
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int number)
{
    std::string messageError = "No entry found";
    typename T::iterator i;
    i = find(container.begin(), container.end(), number);
    if (i == container.end())
    {
        throw messageError;
    }
    else
        return i;
}

#endif
