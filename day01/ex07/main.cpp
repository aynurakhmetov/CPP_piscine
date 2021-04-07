/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 00:23:18 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/07 14:20:14 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
    Replace newReplace;
    if (argc != 4)
    {
        std::cout << "ERROR: number of arguments is not correct" << std::endl; 
    }
    else
    {
        newReplace.doReplace(argv[1], argv[2], argv[3]);
    }
    return (0);
}

// clang++ -Wall -Wextra -Werror *.cpp -o test