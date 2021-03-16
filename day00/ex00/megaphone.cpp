/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 21:11:49 by gmarva            #+#    #+#             */
/*   Updated: 2021/03/16 17:36:54 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; argv[i]; i++)
        {
			for (int j = 0; argv[i][j] != '\0'; j++)
			{
				argv[i][j] = toupper(argv[i][j]);
			}
            std::cout << argv[i];
        }
		std::cout << std::endl;
    }
    return (0);
}


