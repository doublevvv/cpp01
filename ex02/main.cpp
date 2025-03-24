/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:44:09 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/24 14:36:41 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Adress STR :" << &str << std::endl;
	std::cout << "Adress PTR :" << stringPTR << std::endl;
	std::cout << "Adress REF :" << &stringREF << std::endl;

	std::cout << "Value STR :" << str << std::endl;
	std::cout << "Value PTR :" << *stringPTR << std::endl;
	std::cout << "Value REF :" << stringREF << std::endl;

	return (0);
}
