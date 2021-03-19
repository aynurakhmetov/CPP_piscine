/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:20:32 by gmarva            #+#    #+#             */
/*   Updated: 2021/03/19 19:12:40 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int  getIndexOfContact()
{
    int index = 0;
    std::string number;

    for (int i = 0; i == 0;)
    {
        std::cout << "Enter index of contact: ";
        std::getline(std::cin, number);
        index = atoi(number.c_str());
        if (index < 1 || index > 8)
            std::cout << "ERROR: Not correct index" << std::endl;
        else
            i = 1;
    }
    return (index);
}

int main()
{
    int j = 0;
    int index;
    ContactsClass contacts[8];
    std::string command;

    for (int i = 0; i == 0;)
    {
        std::cout << "Choose one of the following command: " << "ADD, SEARCH, EXIT" << std::endl;
        std::cout << "Your command: ";
        std::getline(std::cin, command);
        if (command.find("ADD", 0, 3) == 0)
        {
            if (j > 7)
                std::cout << "ERROR: Limit number of contacts = 8" << std::endl << std::endl;
            else
            {
                contacts[j].addNewContact();
                j++;
            }
        }
        else if (command.find("SEARCH", 0, 6) == 0)
        {
            for (int k = 0; k < j; k++)
                contacts[k].printContact(k);
            index = getIndexOfContact();
            contacts[index - 1].displayContact();
        }
        else if (command.find("EXIT", 0, 4) == 0)
            i = 1;
        else
            std::cout << "ERROR: Invalid command. Please try again." << std::endl << std::endl;
    }
    return (0);
}
