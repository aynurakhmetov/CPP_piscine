/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:51:46 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/20 15:27:29 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <string>
# include <stack>
# include <exception>
# include <algorithm>


template <class T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() : std::stack<T>() {}
    MutantStack(MutantStack const& copyMS) {*this = copyMS;}
    MutantStack &operator=(MutantStack const &otherMS)
    {
        if (this == &otherMS)
            return *this;
        std::stack<T>::operator=(otherMS);
        return *this;
    }
    ~MutantStack() {}

    class iterator : public std::iterator<std::input_iterator_tag, T>
    {
    public:
        iterator() : _element(NULL) {}
        iterator(T *element) : _element(element) {}
        iterator(iterator const &copyIterator) {*this = copyIterator;}
        iterator &operator=(iterator const &otherIt)
        {
            if (this == &otherIt)
                return *this;
            this->_element = otherIt._element;
            return *this;  
        }
        ~iterator() {}

        T operator*() {return *this->_element;}
        

        iterator operator+=(int n) {this->_element -= n; return *this;}
        iterator operator-=(int n) {this->_element += n; return *this;}
        iterator operator++() {this->_element--; return *this;}
        iterator operator--() {this->_element++; return *this;}
        
        bool operator!=(iterator const &otherIterator) {return(this->_element != otherIterator._element);}
        bool operator==(iterator const &otherIterator) {return(this->_element == otherIterator._element);}
        bool operator>(iterator const &otherIterator) {return(this->_element > otherIterator._element);}
        bool operator>=(iterator const &otherIterator) {return(this->_element >= otherIterator._element);}
		bool operator<(iterator const &otherIterator) {return(this->_element < otherIterator._element);}
		bool operator<=(iterator const &otherIterator) {return(this->_element <= otherIterator._element);}
    private:
        T* _element;
    };
    
    iterator begin() {return iterator(&this->top());}
    iterator end() {return iterator(&this->top() - this->size() + 1);}
};

#endif