/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:50:42 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/26 12:03:49 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void	read_and_replace(std::ifstream &ifs, std::ofstream &ofs,
		std::string &to_find, std::string &replace_by)
{
	size_t		pos;
	char		buffer[1024];
	std::string	line;

	while (ifs.getline(buffer, 1024))
	{
		pos = 0;
		line = buffer;
		while ((pos = line.find(to_find, pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + replace_by +
				line.substr(pos + to_find.size());
			pos += replace_by.size();
		}
		ofs << line << std::endl;
	}
}

int	main(int argc, char **argv)
{
	std::string	to_find(argv[2]);
	std::string	replace_by(argv[3]);

	if (argc != 4)
	{
		std::cout << "ERROR" << std::endl;
		return (1);
	}
	std::ifstream ifs(argv[1]);
	if (!ifs.good())
	{
		std::cout << "ERROR" << std::endl;
		return (1);
	}
	std::ofstream ofs((std::string(argv[1]) + ".replace").c_str());
	if (!ofs.good())
	{
		std::cout << "ERROR" << std::endl;
		return (1);
	}
	read_and_replace(ifs, ofs, to_find, replace_by);
	ifs.close();
	ofs.close();
	return (0);
}
