/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomsato <tomsato@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:26:26 by tomsato           #+#    #+#             */
/*   Updated: 2025/06/04 18:42:02 by tomsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

#define NO_ARG_MSG "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << NO_ARG_MSG << std::endl;
		return (0);
	}
	std::string result;
	for (int i = 1; i < ac; i++)
	{
		std::string word(av[i]);
		for (std::string::size_type j = 0; j < word.length(); ++j)
		{
			result += std::toupper(static_cast<unsigned char>(word[j]));
		}
	}
	std::cout << result << std::endl;
	return (0);
}