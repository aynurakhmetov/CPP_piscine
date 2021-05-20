/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:47:56 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/18 17:32:15 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter()
{ 
}

Converter::Converter(Converter const &copyConverter)
{
    *this = copyConverter;   
}

Converter &Converter::operator=(Converter const &otherConverter)
{   
    (void)otherConverter;
    return *this;
}

Converter::~Converter()
{
}

void Converter::toCharDisplay(char *toConvert)
{
    char  character;
    float number = 0.0;
    std::string str = static_cast<std::string>(toConvert);
    
    number = atof(toConvert);
    std::cout << "char: ";
    if (strcmp(toConvert, "nan") == 0 || strcmp(toConvert, "nanf") == 0 || strcmp(toConvert, "-inff") == 0 ||
    strcmp(toConvert, "+inff ") == 0 || strcmp(toConvert, "-inf") == 0 || strcmp(toConvert, "+inf") == 0 || number < 0 || number > 256)
    {
        std::cout << "impossible" << std::endl;
        return;
    }
    if (str.length() == 1 && (toConvert[0] < 48 || toConvert[0] > 57))
    {
        character  = static_cast<char>(str[0]);
    }
    else
    {
        if (number < 32 || number > 126)
        {
            std::cout << "Non displayable" << std::endl;
            return;
        }
        character = static_cast<char>(number);
    }
    std::cout << "'" << character << "'";
    std::cout << std::endl; 
}

void Converter::toIntDisplay(char *toConvert)
{
    int number;
    std::string str = static_cast<std::string>(toConvert);
    
    std::cout << "int: ";
    if (strcmp(toConvert, "nan") == 0 || strcmp(toConvert, "nanf") == 0 || strcmp(toConvert, "-inff") == 0 ||
    strcmp(toConvert, "+inff ") == 0 || strcmp(toConvert, "-inf") == 0 || strcmp(toConvert, "+inf") == 0)
    {
        std::cout << "impossible" << std::endl;
        return;
    }
    if (str.length() == 1)
        number  = static_cast<int>(str[0]);
    else
    {
        if (atof(toConvert) > INT16_MAX || atof(toConvert) < INT16_MIN)
        {
            std::cout << "impossible" << std::endl;
            return; 
        }
        number = static_cast<int>(atof(toConvert));
    }
    std::cout << number;
    std::cout << std::endl; 
}

void Converter::toFloatDisplay(char *toConvert)
{
    float number;
    std::string str = static_cast<std::string>(toConvert);
    
    std::cout << "float: ";
    if (str.length() == 1)
        number  = static_cast<float>(str[0]);
    else
        number = atof(toConvert);
    std::cout << number;
    if (static_cast<int>(number) == number)
        std::cout << ".0f";
    else
        std::cout << "f";
    std::cout << std::endl; 
}

void Converter::toDoubleDisplay(char *toConvert)
{
    double number;
    std::string str = static_cast<std::string>(toConvert);
    
    std::cout << "double: ";
    if (str.length() == 1)
        number  = static_cast<double>(str[0]);
    else
        number = static_cast<double>(atof(toConvert));
    std::cout << number;
    if (static_cast<int>(number) == number)
        std::cout << ".0";
    std::cout << std::endl; 
}


void Converter::validation(char *toConvert)
{
    std::string errorMassage = "ERROR: This value is not a number. Enter the number.";
    int dot = 0;
    
    if (strcmp(toConvert, "nan") == 0 || strcmp(toConvert, "nanf") == 0 || strcmp(toConvert, "-inff") == 0 ||
    strcmp(toConvert, "+inff") == 0 || strcmp(toConvert, "-inf") == 0 || strcmp(toConvert, "+inf") == 0)
        return;
    if ((toConvert[0] < '0' || toConvert[0] > '9') && (toConvert[0] != '-' && toConvert[0] != '+'))
        throw errorMassage;
    if ((toConvert[0] == '-' || toConvert[0] == '+') && toConvert[1] == '.')
        throw errorMassage;
    for (int i = 1; toConvert[i] != '\0'; i++)
    {
        if ((toConvert[i] < '0' || toConvert[i] > '9') && toConvert[i] != '.')
        {
            if (toConvert[i + 1] == '\0' && toConvert[i] == 'f')
                return;
            else
                throw errorMassage;
        }
        else
        {
            if (toConvert[i] == '.')
                dot++;
        }
        if (dot > 1)
            throw errorMassage;
    }
    return;
}
