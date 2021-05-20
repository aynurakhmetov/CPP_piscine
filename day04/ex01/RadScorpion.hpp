/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:31:20 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 14:14:02 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
    RadScorpion();
	RadScorpion(int hp, std::string const &type);
    RadScorpion(RadScorpion const &);
	virtual ~RadScorpion();
    RadScorpion	&operator=(RadScorpion const &);
private:
};

#endif
