/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 00:23:21 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/08 19:44:04 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace()
{
    std::cout << "Instance created" << std::endl;
}

Replace::~Replace()
{
    std::cout << "Instance delete" << std::endl;
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
    {
        return (0);
    }
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

std::string Replace::replaceStringInText(std::string text, std::string firstString,
        std::string secondString)
{
    size_t lenFirstString;
    size_t lenSecondString;
    size_t positionInString;
    //size_t positionInStart = 0;
    //size_t count;

    lenFirstString = firstString.length();
    lenSecondString = secondString.length();
    for (int i = 0; text[i] != '\0'; i++)
    {
        if ((positionInString = text.find(firstString, i)) != std::string::npos)
        {
            text.replace(positionInString, lenFirstString, secondString);
            // count = i - positionInStart;
            // this->textToNewFile.append(text, positionInStart, count);
            // positionInStart = positionInString + lenFirstString;
            // this->textToNewFile.append(secondString, 0, lenSecondString);
            i += lenSecondString - 1;
        }
    }
    return (text);
}

void Replace::createNewFile(std::string text, std::string newFilename)
{
    std::ofstream fileToOut;
    fileToOut.open(newFilename);
    if (fileToOut.is_open())
    {
        fileToOut << text;
        fileToOut.close();
    }
    else
    {
        std::cout << "ERROR: output file not create!" << std::endl;
    } 
}

void Replace::doReplace(std::string filename, std::string firstString, std::string secondString)
{
    std::string newFileName;

 
	for (int j = 0; filename[j] != '\0'; j++)
	{
		filename[j] = toupper(filename[j]);
	}
    newFileName = filename + ".replace";
    if (this->fileValidation(filename) == 1)
    {
        this->getTextFromFile(filename);
        this->textFromFile = this->replaceStringInText(this->textFromFile, firstString, secondString);
        this->createNewFile(this->textFromFile, newFileName);
    }
    else
    {
        std::cout << "ERROR: input file not open" << std::endl;
    }
}
