/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 00:12:38 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/12 12:37:25 by gmarva           ###   ########.fr       */
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

Fixed::Fixed(const int pointValue)
{
    std::cout << "Int constructor called" << std::endl;
    this->_pointValue = pointValue << _kNumOfFractionalBits;
}

Fixed::Fixed(const float pointValue)
{
    std::cout << "Float constructor called" << std::endl;
    this->_pointValue = roundf(pointValue * (1 << _kNumOfFractionalBits));
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
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->_pointValue);
}

void Fixed::setRawBits (int const raw)
{
    //std::cout << "setRawBits member function called" << std::endl;
    this->_pointValue = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)this->_pointValue / (1 << _kNumOfFractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->_pointValue >> _kNumOfFractionalBits);
}

std::ostream &operator<<(std::ostream &parameterOutput, const Fixed &pointValue)
{
    return (parameterOutput << pointValue.toFloat());
}
