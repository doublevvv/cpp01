/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:57:19 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/25 14:08:15 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon
{
public:

	Weapon(std::string);
	~Weapon(void);
	const std::string	getType(void);
	void	setType(std::string value);
	void	setWeapon(std::string weapon);

private:

	std::string	type;
};

#endif
