/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 08:34:26 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/19 10:38:41 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <exception>
 
Base *generate(void)
{
    int numOfClass;
    
    srand(time(NULL));
    numOfClass = rand() % 3;
    std::cout << "numOfClass = " << numOfClass << std::endl;
    if (numOfClass == 0)
        return (new A);
    else if (numOfClass == 1)
        return (new B);
    else
        return (new C);
}

void identify_from_pointer (Base *p)
{
    if (dynamic_cast<A*>(p) != NULL)
		std::cout << "FROM POINTER: " << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "FROM POINTER: " << "B" << std::endl;
	else
        std::cout << "FROM POINTER: " << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
    try
    {
       static_cast<void> (dynamic_cast<A&>(p));
       std::cout << "FROM REFERENCE: " << "A" << std::endl;
    }
    catch(std::bad_cast)
    {
    }
    try
    {
        static_cast<void> (dynamic_cast<B&>(p));
        std::cout << "FROM REFERENCE: " << "B" << std::endl;
    }
    catch(std::bad_cast)
    {
    }
    try
    {
        static_cast<void> (dynamic_cast<C&>(p));
        std::cout << "FROM REFERENCE: " << "C" << std::endl;
    }
    catch(std::bad_cast)
    {
    }   
}

int main()
{
    Base *parent = generate();
    identify_from_pointer(parent);
    identify_from_reference(*parent);
    delete parent;
    return 0;
}
