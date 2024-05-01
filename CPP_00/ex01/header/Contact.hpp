/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:14:04 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/01 16:03:20 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <limits>

class Contact {
	public:
		Contact();
		~Contact();

		static Contact	setContactdata();
		std::string		getFirstName();
		std::string		getLastName();
		std::string		getNickName();
		std::string		getPhoneNumber();
		std::string		getDarkestSecret();

	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickName;
		std::string		phoneNumber;
		std::string 	darkestSecret;
};

#endif