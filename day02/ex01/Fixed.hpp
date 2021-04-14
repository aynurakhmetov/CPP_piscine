/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 00:12:35 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/12 12:33:39 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
public:
    Fixed(void);
    Fixed(const Fixed &);
    Fixed(const int);
    Fixed(const float);
    ~Fixed (void);
    // чем отличается Конс Инт и Инт Конст
    // Подробнее про перегрузку операторов и прям протестить
    // про название переменных и констать 
    // про строение Класса Ортодоксального
    // про this
    Fixed &operator=(const Fixed &);
    int getRawBits (void) const;
    void setRawBits (int const);
    float toFloat(void) const;
    int toInt(void) const;
private:
    int _pointValue;
    static const int _kNumOfFractionalBits;
};

std::ostream &operator<<(std::ostream &, const Fixed &);

#endif