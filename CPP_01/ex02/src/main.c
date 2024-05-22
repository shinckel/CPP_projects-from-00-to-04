/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:22:09 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/15 12:26:27 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Colors.hpp"

int main( void ){
    Color::Modifier blue(Color::FG_L_BLUE);
    Color::Modifier ylw(Color::FG_YELLOW);
    Color::Modifier def(Color::FG_DEFAULT);

    std::string str = "HI THIS IS BRAIN";

    std::string* stringPTR = &str;
    std::string& stringREF = str;

    //printing the memory address
    std::cout << blue << "Memory address of the string variable: " << &str;
    std::cout << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR;
    std::cout << std::endl;
    std::cout << "Memory address held by stringRef: " << &stringREF;
    std::cout << def << std::endl;

    //printing the values
    std::cout << ylw << "Value of the string variable: " << str;
    std::cout << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR;
    std::cout << std::endl;
    std::cout << "Value pointed to stringRef: " << stringREF;
    std::cout << def << std::endl;

    return 0;
}