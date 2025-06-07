/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomsato <tomsato@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:29:49 by tomsato           #+#    #+#             */
/*   Updated: 2025/06/07 20:43:17 by tomsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
  private:
	Contact contacts_[8];
	int index_;
	int count_;

  public:
	PhoneBook();
	~PhoneBook();
	PhoneBook(const PhoneBook &other);
	PhoneBook &operator=(const PhoneBook &other);

	void addContact(const Contact &contact);
	void searchContact();
	void searchContact(int index) const;
	void exit();
};

#endif