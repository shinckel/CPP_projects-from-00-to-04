/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:24:06 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/15 12:19:20 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"

Zombie::Zombie(void) {
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier def(Color::FG_DEFAULT);

    std::cout << green << "Zombie constructor called" << def << std::endl;
}

Zombie::~Zombie(){
    Color::Modifier red(Color::FG_RED);
    Color::Modifier def(Color::FG_DEFAULT);

    std::cout << red << "Destroying zombie " << _name;
    std::cout << def << std::endl;
}

void Zombie::announce() {
    Color::Modifier ylw(Color::FG_YELLOW);
    Color::Modifier def(Color::FG_DEFAULT);

    std::cout << ylw << _name << ": BraiiiiiiinnnzzzZ..." << def << std::endl;
}

void Zombie::setName(const std::string& newName){
    _name = newName;
}