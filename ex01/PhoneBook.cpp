/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomsato <tomsato@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:35:26 by tomsato           #+#    #+#             */
/*   Updated: 2025/06/07 21:24:31 by tomsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : index_(0), count_(0)
{
}

PhoneBook::~PhoneBook()
{
}

PhoneBook::PhoneBook(const PhoneBook &other)
{
	*this = other;
}

PhoneBook &PhoneBook::operator=(const PhoneBook &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 8; ++i)
		{
			contacts_[i] = other.contacts_[i];
		}
		index_ = other.index_;
		count_ = other.count_;
	}
	return (*this);
}

void PhoneBook::addContact(const Contact &contact)
{
	if (count_ < 8)
	{
		contacts_[index_] = contact;
		index_ = (index_ + 1) % 8;
		count_++;
	}
	else
	{
		contacts_[index_] = contact;
		index_ = (index_ + 1) % 8;
	}
	return ;
}

static std::string truncate(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9) + ".";
	}
	return str;
}

void PhoneBook::searchContact()
{
	std::cout << "|" << std::setw(10) << "Index"
			  << "|" << std::setw(10) << "First Name"
			  << "|" << std::setw(10) << "Last Name"
			  << "|" << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < count_; ++i)
	{
		std::cout << "|" << std::setw(10) << i
				  << "|" << std::setw(10) << truncate(contacts_[i].getFirstName())
				  << "|" << std::setw(10) << truncate(contacts_[i].getLastName())
				  << "|" << std::setw(10) << truncate(contacts_[i].getNickname())<< std::endl;
	}
	std::cout << "Total Contacts: " << count_ << std::endl;
}

void PhoneBook::searchContact(int index) const
{
	if (index < 0 || index >= count_)
	{
		return;
	}
	std::cout << "Index: " << index << std::endl;
	std::cout << "First Name: " << contacts_[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts_[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts_[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << contacts_[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts_[index].getDarkestSecret() << std::endl;
}
