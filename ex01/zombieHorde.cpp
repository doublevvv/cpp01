/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:52:23 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/24 13:25:06 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name)
{
	if (n < 1)
		return (0);

	Zombie* horde = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		horde[i].setname(name);
		horde[i].announce();
	}
	return (&horde[0]);
}
