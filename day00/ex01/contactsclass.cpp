/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contactsclass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:14:00 by gmarva            #+#    #+#             */
/*   Updated: 2021/03/19 19:16:23 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// ContactsClass::ContactsClass()
// {
//     firstName = "";
//     lastName = "";
//     nickname = "";
//     login = "";
//     postalAddress = "";
//     emailAdress = "";
//     phoneNumber = "";
//     birthdayDate = "";
//     favoriteMeal = "";
//     underwearColor = "";
//     darkestSecret = "";
// }

void ContactsClass::addNewContact()
{
    std::cout << "First Name" << std::endl;
    std::getline(std::cin, firstName);
    std::cout << "Last Name" << std::endl;
    std::getline(std::cin, lastName);
    std::cout << "Nickname" << std::endl;
    std::getline(std::cin, nickname);
    std::cout << "Login" << std::endl;
    std::getline(std::cin, login);
    std::cout << "Postal Address" << std::endl;
    std::getline(std::cin, postalAddress);
    std::cout << "Email Adress" << std::endl;
    std::getline(std::cin, emailAdress);
    std::cout << "Phone Number" << std::endl;
    std::getline(std::cin, phoneNumber);
    std::cout << "Birthday Date" << std::endl;
    std::getline(std::cin, birthdayDate);
    std::cout << "Favorite Meal" << std::endl;
    std::getline(std::cin, favoriteMeal);
    std::cout << "Underwear Color" << std::endl;
    std::getline(std::cin, underwearColor);
    std::cout << "Darkest Secret" << std::endl;
    std::getline(std::cin, darkestSecret);
}

void ContactsClass::printContact(int i)
{

    if (i == 0)
        std::cout << "     Index|First name| Last name|  Nickname|" << std::endl;
    std::cout << "         " << i + 1 << "|";
    printField(firstName);
    printField(lastName);
    printField(nickname);
    std::cout << std::endl;
}

void ContactsClass::printField(std::string field)
{
    int len;
    
    len = field.size();
    if (len <= 10)
    {
        for (int j = 0; j < (10 - len); j++)
            std::cout << " ";
        std::cout << field;
    }
    else
    {
        for (int j = 0; j < 9; j++)
            std::cout << field[j];
        std::cout << ".";
    }
    std::cout << "|";
}

void ContactsClass::displayContact()
{
    std::cout << "First Name\t\t" << firstName << std::endl;
    std::cout << "Last Name\t\t" << lastName << std::endl;
    std::cout << "Nickname\t\t" << nickname << std::endl;
    std::cout << "Login\t\t" << login << std::endl;
    std::cout << "Postal Address\t\t" << postalAddress << std::endl;
    std::cout << "Email Adress\t\t" << emailAdress << std::endl;
    std::cout << "Phone Number\t\t" << phoneNumber << std::endl;
    std::cout << "Birthday Date\t\t" << birthdayDate << std::endl;
    std::cout << "Favorite Meal\t\t" << favoriteMeal << std::endl;
    std::cout << "Underwear Color\t\t" << underwearColor << std::endl;
    std::cout << "Darkest Secret\t\t" << darkestSecret << std::endl;
}
