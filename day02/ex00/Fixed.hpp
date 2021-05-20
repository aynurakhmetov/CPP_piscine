/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:07:53 by gmarva            #+#    #+#             */
/*   Updated: 2021/04/11 23:42:56 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
public:
    Fixed( void );
    Fixed(const Fixed &);
    Fixed &operator=(const Fixed &);
    ~Fixed ( void );
    int getRawBits (void) const;
    void setRawBits (int const raw); 
private:
    int _pointValue;
    static const int _kNumOfFractionalBits;
};

#endif