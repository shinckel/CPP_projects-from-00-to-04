/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:49:25 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/22 12:12:53 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"
# include "Colors.hpp"

class HumanB {
  public:
    HumanB(std::string name);
    ~HumanB();
    void  setWeapon(Weapon& weapon);
    void  attack(void);

  private:
    Weapon* _weaponPtr;
    std::string _name;
};

#endif