/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:45:12 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/20 12:49:46 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    std::cout << "SUBJECT TEST" << std::endl;
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << std::endl << "TEST 1: 1 4 10 1000" << std::endl;
    try
    {
        Span sp2 = Span(5);
        sp2.addNumber(1);
        sp2.addNumber(4);
        sp2.addNumber(10);
        sp2.addNumber(100);
        sp2.addNumber(1000);
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "TEST 2: 1 4 10 1000 but num = 4" << std::endl;
    try
    {
        Span sp3 = Span(4);
        sp3.addNumber(1);
        sp3.addNumber(4);
        sp3.addNumber(10);
        sp3.addNumber(100);
        sp3.addNumber(1000);
        std::cout << sp3.shortestSpan() << std::endl;
        std::cout << sp3.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "TEST 3: 1" << std::endl;
    try
    {
        Span sp3 = Span(4);
        sp3.addNumber(1);
        std::cout << sp3.shortestSpan() << std::endl;
        std::cout << sp3.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "TEST 4: num = 10000, after Exception" << std::endl;
    try
    {
        Span sp4 = Span(10000);
        
        std::vector<int> testSpan;
        for (int i = 0; i < 50; i += 2)
            testSpan.push_back(i);
        sp4.addNumber(testSpan.begin(), testSpan.end());
        std::cout << sp4.shortestSpan() << std::endl;
        std::cout << sp4.longestSpan() << std::endl;
        sp4.addNumber(testSpan.end(), testSpan.begin());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}