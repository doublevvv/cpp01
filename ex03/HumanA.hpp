/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:57:05 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/25 13:55:50 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class	HumanA
{
public :

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void);

private :

	Weapon	&_weapon_a;
	std::string	name;
};

#endif
