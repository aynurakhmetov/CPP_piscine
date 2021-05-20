/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:29:03 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/19 16:25:22 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main()
{
    std::cout << "SUBJECT'S TESTS AWESOME" << std::endl;
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
    
    std::cout << std::endl << "MY TESTS FLOAT" << std::endl;
    float tab1[] = {1.2, 1.3, 1.4, 1.5, 1.6};
    iter(tab1, 5, print);

    std::cout << std::endl << "MY TESTS STRING" << std::endl;
    std::string tab3[] = {"one", "two", "free"};
    iter(tab3, 3, print);

    std::cout << std::endl << "MY TESTS CHAR" << std::endl;
    char tab4[] = {'a', 'b', 'c'};
    iter(tab4, 3, print);

    
	return 0;
}