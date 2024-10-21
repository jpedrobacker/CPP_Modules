/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:02:41 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/21 11:40:52 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;
	std::string		s1;
	std::string		s2;
	size_t			find_pos;
	size_t			search_pos_start;


	if (ac != 4)
		return (std::cout << "Wrong num of args!" << std::endl, 1);
	s1 = av[2];
	if (s1.empty())
		return (std::cout << "The search string is empty!" << std::endl, 1);
	s2 = av[3];
	infile.open(av[1]);
	if (infile.fail())
		return (std::cout << "Failed to open file or do not exist" << std::endl, 1);
	outfile.open((std::string(av[1]) + ".replace").c_str());
	if (outfile.fail())
	{
		outfile.close();
		return (std::cout << "Failed to create .replace file" << std::endl, 1);
	}
	while (std::getline(infile, line))
	{
		search_pos_start = 0;
		while ((find_pos = line.find(s1, search_pos_start)) != std::string::npos)
		{
			line.erase(find_pos, s1.length());
			line.insert(find_pos, s2);
			search_pos_start = find_pos + s2.length();
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	std::cout << "Replacement complete!" << std::endl;
	return (0);
}
