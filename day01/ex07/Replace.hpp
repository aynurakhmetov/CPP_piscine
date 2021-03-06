/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 00:23:25 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/07 14:05:51 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <iostream>
#include <fstream>

class Replace
{
private:
    std::ifstream thisFile;
    std::string textFromFile;
    std::string textToNewFile;
public:
    Replace();
    ~Replace();
    void doReplace(std::string filename, std::string firstString, std::string secondString);
    int fileValidation(std::string filename);
    std::string getTextFromFile(std::string filename);
    std::string replaceStringInText(std::string text, std::string firstString,
        std::string secondString);
    void createNewFile(std::string text, std::string newFilename);
};

#endif