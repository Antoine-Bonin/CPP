/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:24:32 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/15 15:19:14 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

bool	validateArgs(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: required to enter 3 parameters: filename, string1, string2\n";
		return (false);
	}
	std::string string1 = av[2];
	std::string string2 = av[3];
	if (string1.empty() || string2.empty())
	{
		std::cout << "Error: string cannot be empty\n";	
		return (false);
	}
	return (true);
}

std::string	readFile(const std::string& filename)
{
	std::ifstream ifs(filename.c_str(), std::ios::binary);
	if (ifs.fail())
	{
		std::cout << "Error: cannot open file " << filename << std::endl;
		return ("");
	}
	
	std::string content;
	char c;
	while (ifs.get(c))
		content += c;
	ifs.close();
	
	return (content);
}

std::string	replaceAll(const std::string& content, const std::string& s1, const std::string& s2)
{
	std::string result = content;
	std::size_t pos = 0;
	
	while ((pos = result.find(s1, pos)) != std::string::npos)
	{
		result.erase(pos, s1.length());
		result.insert(pos, s2);
		pos += s2.length();
	}
	return (result);
}

bool	writeFile(const std::string& filename, const std::string& content)
{
	std::ofstream ofs(filename.c_str(), std::ios::binary);
	if (ofs.fail())
	{
		std::cout << "Error: cannot create output file " << filename << std::endl;
		return (false);
	}
	ofs << content;
	return (true);
}

int	main(int ac, char **av)
{
	if (!validateArgs(ac, av))
		return (1);
	
	std::string fileName = av[1];
	std::string string1 = av[2];
	std::string string2 = av[3];
	std::string outputFilename = fileName + ".replace";
	
	std::string content = readFile(fileName);
	if (content.empty())
		return (1);
	
	std::string modifiedContent = replaceAll(content, string1, string2);
	
	if (!writeFile(outputFilename, modifiedContent))
		return (1);
	
	return (0);
}