/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 19:51:14 by gmarva            #+#    #+#             */
/*   Updated: 2021/05/09 15:18:21 by gmarva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() : _hp(0), _type("")
{
}

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
}

Enemy::Enemy(Enemy const &copyEnemy)
{
    *this = copyEnemy;
}

Enemy::~Enemy()
{
    std::cout << "Enemy deleted" << std::endl;
}

Enemy &Enemy::operator=(Enemy const &otherEnemy)
{
    this->_hp = otherEnemy._hp;
    this->_type = otherEnemy._type;
    return *this;
}

std::string Enemy::getType() const
{
    return this->_type;   
}

int Enemy::getHP() const
{
    return this->_hp;
}

void Enemy::takeDamage(int amount)
{
    if (this->_hp < 0)
        return;
    else if (amount >= this->_hp)
        this->_hp = 0;
    else
        this->_hp = this->_hp - amount;
}
