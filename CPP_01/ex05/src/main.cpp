/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:27:06 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/22 19:30:34 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Harl.hpp"

int main(void)
{
    Harl harl;
    std::string complain[6];
    complain[0] = "DEBUG";
    complain[1] = "INFO";
    complain[2] = "WARNING";
    complain[3] = "ERROR";
    complain[4] = "ola";
    complain[5] = "";

    for (int i = 0; i < 6; i++)
    {
        harl.complain(complain[i]);
    }
    return 0;
}
