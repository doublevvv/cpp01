/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:38:31 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/28 17:44:55 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}
Harl::~Harl()
{

}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*fcts[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	demand[4] = {"debug", "info", "warning", "error"};
	int i = 0;

	while (i < 4)
	{
		if (level == demand[i])
		{
			(this->*fcts[i])();
			return ;
		}
		i++;
	}
	std::cout << "wrong input" << std::endl;
}

