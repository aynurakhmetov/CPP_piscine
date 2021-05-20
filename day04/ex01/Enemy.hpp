/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 19:51:18 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 12:37:56 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>
# include <string>

class Enemy
{
public:
    Enemy();
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &);
	virtual ~Enemy();
    Enemy &operator=(Enemy const &);
	std::string  getType() const;
	int          getHP() const;
	virtual void takeDamage(int);
private:
    int          _hp;
    std::string  _type;
};

#endif
