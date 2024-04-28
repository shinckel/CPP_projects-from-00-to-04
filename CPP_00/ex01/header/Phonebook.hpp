/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:03:53 by shinckel          #+#    #+#             */
/*   Updated: 2024/04/28 17:45:51 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
// parametric manipulators e.g. setprecision, get_money, etc
# include <iomanip>
# include "Colors.hpp"
# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();

		void		addContact(const Contact& contact);
		int			getNumContacts();
		void		displayContacts();
		bool		displaySingleContact(int &index);
		std::string	truncateString(const std::string &str);

	private:
		Contact		contacts[8];
		int			n_contacts;
};

#endif