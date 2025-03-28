/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 09:09:58 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/28 15:33:54 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cstddef>

// ! All the member functions of the class std::string are allowed, except replace

// * Must open the file <filename> and copy its content into a new file
// * <filename>.replace, replacing every occurrence of s1 with s2.

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream	file;
		std::ofstream	outfile;
		std::string	replace_word(av[2]);
		std::string	replace_by(av[3]);
		std::string	str;
		std::size_t	pos;

		file.open("test");
		outfile.open("test.replace");
		while (std::getline(file, str))
		{
			pos = 0;
			while ((pos = str.find(replace_word, pos)) != std::string::npos)
			{
				str.erase(pos, replace_word.length());
				str.insert(pos, replace_by);
				pos += replace_by.length();
			}
			outfile << str << std::endl;
		}
		file.close();
		outfile.close();
	}
	else
		std::cout << "must have 4 arguments" << std::endl;
	return (0);
}
