/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:49:32 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/22 12:20:12 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"
# include "Colors.hpp"

class HumanA {
  public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void  attack(void);

  private:
    Weapon& weapon;
    std::string _name;
};

#endif