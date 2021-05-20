/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:51:42 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/20 15:20:57 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << "top = " << mstack.top() << std::endl;
    std::cout << "size = " << mstack.size() << std::endl;
    
    mstack.pop();
    
    std::cout << "size = " << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(6);
    mstack.push(737);
    std::cout << "top = " << mstack.top() << std::endl;
    mstack.push(0);
    mstack.push(11);
    mstack.push(12);
    mstack.push(13);
    mstack.push(14);
    mstack.push(15);
    
    std::cout << "top = " << mstack.top() << std::endl;
    std::cout << "size = " << mstack.size() << std::endl;
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << "it = " << *it << ", ite = " << *ite << std::endl;
    
    ++it; ++ite;
    std::cout << "it = " << *it << ", ite = " << *ite << std::endl;
    --it; --ite;
    std::cout << "it = " << *it << ", ite = " << *ite << std::endl;
    

    while (it != ite)
    {
        std::cout << *it << " " << *ite <<std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "top = " << s.top() << std::endl;
    std::cout << "size = " << s.size() << std::endl;
    
    return 0;
}

// clang++ -Wall -Wextra -Werror *.cpp -o test