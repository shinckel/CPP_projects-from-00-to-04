/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:49:53 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/22 12:20:39 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

class Weapon {
  public:
    Weapon(std::string type);
    ~Weapon();
    const std::string&  getType() const; // read only
    void  setType(const std::string& newType);

  private:
    std::string type;
};

#endif