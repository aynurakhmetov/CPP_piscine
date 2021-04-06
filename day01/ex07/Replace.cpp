/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 00:23:21 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/07 01:50:02 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace()
{
}

Replace::~Replace()
{
}

void replace(std::string filename, std::string firstString, std::string secondString)
{
    
}

int Replace::fileValidation(std::string filename)
{
    std::ifstream thisFile;
    
    thisFile.open(filename);
    if (thisFile.is_open())
    {
        thisFile.close();
        return (1);
    }
    else
        return (0);
}

std::string Replace::getTextFromFile(std::string filename)
{
    thisFile.open(filename);
    std::string line;

    while (true)
    {
        std::getline(thisFile, line);
        this->textFromFile.append(line);
        if (thisFile.eof())
            break;
        this->textFromFile.append("\n");
    }
    return (this->textFromFile);
}

void Replace::replaceStringInText(std::string text, std::string firstString,
        std::string secondString)
{
    
}