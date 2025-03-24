/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 09:50:08 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/24 13:24:18 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
public:
	Zombie(void);
	~Zombie();
	void	announce(void);
	void	setname(std::string	name);

private:
	std::string name;
};

Zombie*	zombieHorde(int n, std::string name);


#endif
