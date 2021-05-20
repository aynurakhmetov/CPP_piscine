/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:47:59 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/18 16:52:28 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "ERROR: Incorrect number of arguments" << std::endl;
        return 0;
    }
    else
    {
        try
        {
            Converter number = Converter();
            std::string str = static_cast<std::string>(argv[1]);
            if (str.length() > 1)
                number.validation(argv[1]);
            number.toCharDisplay(argv[1]);
            number.toIntDisplay(argv[1]);
            number.toFloatDisplay(argv[1]);
            number.toDoubleDisplay(argv[1]);
        }
        catch(const std::string e)
        {
            std::cerr << e << '\n';
        }
    }
    return 0;
}
