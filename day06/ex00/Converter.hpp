/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:47:53 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/18 15:32:57 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP 
# define CONVERTER_HPP
# include <iostream>
# include <string.h>
# include <string>
# include <exception>

class Converter
{
public:
    Converter();
    Converter(Converter const &);
    Converter &operator=(Converter const &);
    ~Converter();
    void    toCharDisplay(char *);
    void    toIntDisplay(char *);
    void    toFloatDisplay(char *);
    void    toDoubleDisplay(char *);
    void    validation(char *);
private:
};

#endif