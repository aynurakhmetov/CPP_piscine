/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:29:42 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/19 19:20:33 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <string>
# include <exception>

template <class T>
class Array
{
public:
    Array() : _array(new T[0]), _size(0) {}
    Array(unsigned int n) : _array(new T[n]), _size(n) {}
    Array(Array const &copyArray) {*this = copyArray;}
    Array &operator=(Array const &otherArray)
    {
		if (this == &otherArray)
			return *this;
        delete [] this->_array;
        this->_size = otherArray._size;
		this->_array = new T[otherArray._size];
		for (unsigned int i = 0; i < otherArray._size; i++)
			this->_array[i] = otherArray._array[i];
		return *this;
	}
    ~Array() {delete [] this->_array;}
    
    class ArrayExeption : public std::exception 
    {
	public:
		virtual const char* what() const throw() {return("ERROR: element is out of the limits");}
	};

    unsigned int lenght() const
    {
        unsigned int i = 0;
        
        while (this->_array[i])
        {
            i++;
        }
        return i;
    }
    unsigned int getSize() const {return this->_size;}
    T &operator[](unsigned int i) 
    {
		if (i < 0 || i > (this->_size - 1))
			throw (Array::ArrayExeption());
        else
		    return this->_array[i];
	}
private:
    T *_array;
    unsigned int _size;
};

#endif
