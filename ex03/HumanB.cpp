/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:57:08 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/25 14:14:42 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weaponized = false;
}

HumanB::~HumanB(void)
{

}
void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon_b = &weapon;
	this->weaponized = true;
}
// *weapon outside constructor

void	HumanB::attack(void)
{
	if (this->weaponized == false)
		std::cout << "" << this->name << "used his hands" << std::endl;
	else
		std::cout << "" << this->name << " : attack with their " << this->_weapon_b->getType() << std::endl;
}
