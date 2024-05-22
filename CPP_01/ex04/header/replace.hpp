/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:54:30 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/22 19:03:01 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include "Colors.hpp"

void replaceInFile(std::ifstream& inputFile, const std::string& s1, const std::string& s2, const std::string& filename);

#endif
