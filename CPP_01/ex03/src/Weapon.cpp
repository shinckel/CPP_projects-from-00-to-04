/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:44:29 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/22 12:14:06 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Weapon.hpp"

Weapon::Weapon(std::string initialType) {
  Color::Modifier ylw(Color::FG_YELLOW);
  Color::Modifier def(Color::FG_DEFAULT);

  setType(initialType);
  std::cout << ylw << "Weapon constructor called" << def << std::endl;
}

Weapon::~Weapon() {
  Color::Modifier red(Color::FG_RED);
  Color::Modifier def(Color::FG_DEFAULT);

  std::cout << red << "Weapon destructor called" << def << std::endl;
}

const std::string&  Weapon::getType() const {
  return type;
}

void  Weapon::setType(const std::string& newType) {
  type = newType;
}
