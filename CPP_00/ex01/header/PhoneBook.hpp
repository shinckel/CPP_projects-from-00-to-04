/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:03:53 by shinckel          #+#    #+#             */
/*   Updated: 2024/04/28 14:10:18 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
// parametric manipulators e.g. setprecision, get_money, etc
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
	public:
		static const int	MAX_CONTACTS = 8;


	private:
		Contact	contacts[MAX_CONTACTS];
		int		n_contacts;
};

#endif