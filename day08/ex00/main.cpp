/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:06:30 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/20 10:42:37 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> vectorContainer;
    for (int i = 1; i <= 10; i++)
    {
        vectorContainer.push_back(i);
    }
    
    std::cout << "TEST 1: CONTAINER TYPE = VECTOR, BEGIN = 1, END = 10, SEARCH = 5" << std::endl;
    try
    {
       easyfind(vectorContainer, 5);
       std::cout << "Entry found" << std::endl;
    }
    catch(const std::string &e)
    {
        std::cerr << e << '\n';
    }

    std::cout << std::endl << "TEST 2: CONTAINER TYPE = VECTOR, BEGIN = 1, END = 10, SEARCH = 11" << std::endl;   
    try
    {
       easyfind(vectorContainer, 11);
       std::cout << "Entry found" << std::endl;
    }
    catch(const std::string &e)
    {
        std::cerr << e << '\n';
    }

    std::list<int> listContainer;
    for (int i = 1; i <= 10; i++)
    {
        listContainer.push_back(i);
    }
    
    std::cout << std::endl << "TEST 3: CONTAINER TYPE = LIST, BEGIN = 1, END = 10, SEARCH = 5" << std::endl;
    try
    {
       easyfind(listContainer, 5);
       std::cout << "Entry found" << std::endl;
    }
    catch(const std::string &e)
    {
        std::cerr << e << '\n';
    }

    std::cout << std::endl << "TEST 4: CONTAINER TYPE = LIST, BEGIN = 1, END = 10, SEARCH = 11" << std::endl;   
    try
    {
       easyfind(listContainer, 11);
       std::cout << "Entry found" << std::endl;
    }
    catch(const std::string &e)
    {
        std::cerr << e << '\n';
    }

    std::deque<int> dequeContainer;
    for (int i = 1; i <= 10; i++)
    {
        dequeContainer.push_back(i);
    }
    
    std::cout << std::endl << "TEST 5: CONTAINER TYPE = DEQUE, BEGIN = 1, END = 10, SEARCH = 5" << std::endl;
    try
    {
       easyfind(dequeContainer, 5);
       std::cout << "Entry found" << std::endl;
    }
    catch(const std::string &e)
    {
        std::cerr << e << '\n';
    }

    std::cout << std::endl << "TEST 6: CONTAINER TYPE = DEQUE, BEGIN = 1, END = 10, SEARCH = 11" << std::endl;   
    try
    {
       easyfind(dequeContainer, 11);
       std::cout << "Entry found" << std::endl;
    }
    catch(const std::string &e)
    {
        std::cerr << e << '\n';
    }
    
    return 0;
}

// clang++ -Wall -Wextra -Werror *.cpp -o test