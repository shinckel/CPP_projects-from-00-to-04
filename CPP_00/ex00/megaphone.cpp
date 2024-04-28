/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:28:44 by shinckel          #+#    #+#             */
/*   Updated: 2024/04/28 14:01:02 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*str_upper(char *str) {
	for (int i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
	return str;
}

void	megaphone(int argc, char **argv) {
	for (int i = 1; i < argc; i++)
		std::cout << str_upper(argv[i]);
	std::cout << std::endl;
}

int	main(int argc, char **argv) {

	if (argc > 1)
		return megaphone(argc, argv), 0;
	return std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0;
}
