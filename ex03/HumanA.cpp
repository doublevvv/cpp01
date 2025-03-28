/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:57:02 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/25 14:14:27 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :  _weapon_a(weapon), name(name)
{

}

HumanA::~HumanA(void)
{

}

void	HumanA::attack(void)
{
	std::cout << "" << this->name << " : attack with their " << _weapon_a.getType() << std::endl;
}
