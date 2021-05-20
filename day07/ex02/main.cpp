/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:29:39 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/19 23:19:44 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    std::cout << "TEST 1: INT {1, 2}" << std::endl;
    try
    {
        Array<int> intArray(2);
        std::cout << "size = " << intArray.getSize() << std::endl;
        intArray[0] = 1;
        intArray[1] = 2;
        std::cout << "array[0]  = " << intArray[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "TEST 2: INT {1, 2}" << std::endl;
    try
    {
        Array<int> intArray(2);
        std::cout << "size = " << intArray.getSize() << std::endl;
        intArray[0] = 1;
        intArray[1] = 2;
        std::cout << "array[3]  = " << intArray[3] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "TEST 3: DOUBLE{1.3, 2.3}" << std::endl;
    try
    {
        Array<double> doubleArray(2);
        std::cout << "size = " << doubleArray.getSize() << std::endl;
        doubleArray[0] = 1.3;
        doubleArray[1] = 2.3;
        std::cout << "array[1]  = " << doubleArray[1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "TEST 4: STRING{one, two}" << std::endl;
    try
    {
        Array<std::string> stringArray(2);
        std::cout << "size = " << stringArray.getSize() << std::endl;
        stringArray[0] = "one";
        stringArray[1] = "two";
        std::cout << "array[1]  = " << stringArray[1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "TEST 5: CHAR{a, b, c}" << std::endl;
    try
    {
        Array<char> charArray(3);
        std::cout << "size = " << charArray.getSize() << std::endl;
        charArray[0] = 'a';
        charArray[1] = 'b';
        charArray[2] = 'c';
        std::cout << "array[2]  = " << charArray[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "TEST 6: CHAR{a, b, c} COPY" << std::endl;
    try
    {
        Array<char> charOneArray(3);
        charOneArray[0] = 'a';
        charOneArray[1] = 'b';
        charOneArray[2] = 'c';
        std::cout << "size = " << charOneArray.getSize() << std::endl;
        Array<char> charTwoArray(charOneArray);
        std::cout << "size = " << charTwoArray.getSize() << std::endl;
        std::cout << "array[2]  = " << charTwoArray[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "TEST 7: CHAR{a, b, c} =" << std::endl;
    try
    {
        Array<char> charOneArray(3);
        charOneArray[0] = 'a';
        charOneArray[1] = 'b';
        charOneArray[2] = 'c';
        std::cout << "size = " << charOneArray.getSize() << std::endl;
        Array<char> charTwoArray;
        charTwoArray = charOneArray;
        std::cout << "size = " << charTwoArray.getSize() << std::endl;
        std::cout << "array[2]  = " << charTwoArray[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    Array<char> charThreeArray;
    
    return 0;
}