/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:07:49 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/12 00:02:13 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_kNumOfFractionalBits = 8;

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
    this->_pointValue = 0;
}

Fixed::Fixed(const Fixed &copyPointValue)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copyPointValue;
}

Fixed &Fixed::operator=(const Fixed &pointValue)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_pointValue = pointValue.getRawBits();
    return (*this);
}

Fixed::~Fixed ( void )
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits (void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_pointValue);
}

void Fixed::setRawBits (int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_pointValue = raw;
}

