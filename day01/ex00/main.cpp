/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:33:29 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/09 13:58:29 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap()
{
	MyLittlePony *pony = new MyLittlePony("Куча", "Айнур", "Хипстан", 5, 21, 42);
	pony->PonyDataPrint();
	delete pony;
}

void ponyOnTheStack()
{
	MyLittlePony pony("Стэк", "Айнур", "Стэкстан", 6, 22, 43);
	pony.PonyDataPrint();
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}

// clang++ -Wall -Wextra -Werror *.cpp -o pony