/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:50:42 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/14 13:54:37 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	size_t		pos;
	std::string	to_find(argv[2]);
	std::string	replace_by(argv[3]);
	char		buffer[1024];
	std::string	line;

	if (argc != 4)
	{
		std::cout << "ERROR" << std::endl;
		return (1);
	}
	std::ifstream ifs(argv[1]);
	std::ofstream ofs((std::string(argv[1]) + ".replace").c_str());
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
	ifs.close();
	ofs.close();
	return (0);
}
