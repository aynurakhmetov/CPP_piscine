/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:45:18 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/20 12:38:02 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{  
}

Span::Span(Span const &copySpan)
{
    *this = copySpan;  
}

Span &Span::operator=(Span const &otherSpan)
{
    if (this == &otherSpan)
        return *this;
    this->_N = otherSpan._N;
    this->_intContainer = otherSpan._intContainer;
    return *this;    
}

Span::~Span()
{    
}

void Span::addNumber(int newNumber)
{
    // std::cout << "add = " << newNumber << std::endl;
    if (this->_intContainer.size() < this->_N)
    {
        this->_intContainer.push_back(newNumber);
    }
    else
    {
        throw Span::AddException();
    }
}


const char* Span::AddException::what() const throw()
{
    return ("ERROR: There is no way to add");
}

int Span::shortestSpan()
{
    if (this->_intContainer.size() < 2)
        throw Span::SpanException();
    std::sort(this->_intContainer.begin(), this->_intContainer.end());
    std::vector<int>::const_iterator i = this->_intContainer.begin();
    int shortspan = *(i + 1) - *i;
    // std::cout << "shortspan = " << shortspan << std::endl;
    i++;
    for(; i != this->_intContainer.end(); i++)
    {
        if ((*i - *(i - 1)) < shortspan)
            shortspan = *i - *(i - 1);
        // std::cout << "shortspan = " << shortspan << std::endl;
    }
    return shortspan; 
}

int Span::longestSpan()
{
    if (this->_intContainer.size() < 2)
        throw Span::SpanException();
    // std::cout << "max= " << *max_element(this->_intContainer.begin(), this->_intContainer.end()) << std::endl;
    // std::cout << "min= " << *min_element(this->_intContainer.begin(), this->_intContainer.end()) << std::endl;
    int longspan = *max_element(this->_intContainer.begin(), this->_intContainer.end()) - 
                   *min_element(this->_intContainer.begin(), this->_intContainer.end());
    return (longspan);
}

const char* Span::SpanException::what() const throw()
{
    return ("ERROR: There’s no numbers stored, or only one");
}

void  Span::addNumber(std::vector<int>::iterator beginIter, std::vector<int>::iterator endIter)
{
	if (beginIter > endIter)
		throw (Span::AddException());
	if (this->_intContainer.size() + static_cast<int>(endIter - beginIter) >= this->_N)
		throw (Span::AddException());
	for (std::vector<int>::iterator i = beginIter; i != endIter; i++) 
    {
		this->_intContainer.push_back(*i);
	}
}
