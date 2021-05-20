/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:45:16 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/20 12:30:25 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string>
# include <vector>
# include <exception>
# include <algorithm>

class Span
{
public:
    Span();
    Span(unsigned int);
    Span(Span const &);
    Span &operator=(Span const &);
    ~Span();
    
    void addNumber(int);
    void addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
    class AddException : public std::exception
    {
    public:
		virtual const char* what() const throw();    
    };
    int shortestSpan();
    int longestSpan();
    class SpanException : public std::exception
    {
    public:
		virtual const char* what() const throw();    
    };
    
private:
    unsigned int    _N;
    std::vector<int>  _intContainer;
};

#endif
