/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:41:11 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/19 10:37:51 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int     g_sizeInt = sizeof(int);
int     g_sizeString = sizeof(std::string);

struct Data
{
    std::string *randomStrOne;
    int         randomInt;
    std::string *randomStrTwo;
};

std::ostream	&operator<<(std::ostream &out, Data &resultOfDeserialize)
{
	out << *resultOfDeserialize.randomStrOne << std::endl;
	out << resultOfDeserialize.randomInt << std::endl;
	out << *resultOfDeserialize.randomStrTwo << std::endl << std::endl;
	return (out);
}

void * serialize(void)
{       
    Data        *rawData = new Data;
    std::string symbols = "abcdefghijklmnopqrstuvwxyz"
                        "0123456789"
                        "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    rawData->randomStrOne = new std::string;
    rawData->randomStrOne->resize(g_sizeString);
    for (int i = 0; i < g_sizeString; i++)
    {
        (*rawData->randomStrOne)[i] = symbols[rand() % symbols.length()];
    }
    rawData->randomInt = rand() / 1000;
    rawData->randomStrTwo = new std::string;
    rawData->randomStrTwo->resize(g_sizeString);
    for (int i = 0; i < g_sizeString; i++)
    {
        (*rawData->randomStrTwo)[i] = symbols[rand() % symbols.length()];
    }
    std::cout << *rawData;
    return reinterpret_cast<void *>(rawData);
}

Data * deserialize(void * raw)
{
    Data *data = new Data;

    data = reinterpret_cast<Data*>(raw);
    return data;
}

int main()
{
    srand(time(NULL));
    void *resultOfSerialize = serialize();
    Data *resultOfDeserialize = deserialize(resultOfSerialize);
    std::cout << *resultOfDeserialize;
    delete resultOfDeserialize->randomStrOne;
    delete resultOfDeserialize->randomStrTwo;
    delete resultOfDeserialize;
    return 0;
}
