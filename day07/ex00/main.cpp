/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:43:58 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/19 15:24:54 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Awesome
{
public:
    Awesome( int n ) : _n( n ) {}
    bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
    int getN() const { return this->_n;}
private:
    int _n;
};

std::ostream	&operator<<(std::ostream &out, Awesome const &awesome) 
{
    out << awesome.getN();
    return (out);
}

int main( void )
{
    std::cout << "SUBJECT'S TESTS INT, STRING" << std::endl;
    
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    std::cout << std::endl << "MY TESTS FLOAT" << std::endl;
    float e = 2.25f;
	float f = 3.55f;
    std::cout << "e = " << e << ", f = " << f << std::endl;
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f) << std::endl;

    std::cout << std::endl << "MY TESTS DOUBLE" << std::endl;
	double g = 3.31;
	double h = 81.22;
    std::cout << "g = " << g << ", h = " << h << std::endl;
	::swap(g, h);
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min( g, h ) = " << ::min(g, h ) << std::endl;
	std::cout << "max( g, h ) = " << ::max(g, h ) << std::endl;

    std::cout << std::endl << "MY TESTS CHAR" << std::endl;
	char i = '7';
	char j = '9';
    std::cout << "i = " << i << ", j = " << j << std::endl;
	::swap(i, j);
	std::cout << "i = " << i << ", j = " << j << std::endl;
	std::cout << "min( i, j ) = " << ::min( i, j ) << std::endl;
	std::cout << "max( i, j ) = " << ::max( i, j ) << std::endl;

    std::cout << std::endl << "MY TESTS AWESOME" << std::endl;
	Awesome k(10);
	Awesome l(100);
    std::cout << "k = " << k << ", l = " << l << std::endl;
	::swap(k, l);
	std::cout << "k = " << k << ", l = " << l << std::endl;
	std::cout << "min( k, l ) = " << ::min( k, l ) << std::endl;
	std::cout << "max( k, l ) = " << ::max( k, l ) << std::endl;
    
	return 0;
}