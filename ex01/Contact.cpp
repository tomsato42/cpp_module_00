/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomsato <tomsato@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:22:32 by tomsato           #+#    #+#             */
/*   Updated: 2025/06/07 20:29:35 by tomsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(const Contact &other)
{
	*this = other;
}

Contact &Contact::operator=(const Contact &other)
{
	if (this != &other)
	{
		firstName_ = other.firstName_;
		lastName_ = other.lastName_;
		nickname_ = other.nickname_;
		phoneNumber_ = other.phoneNumber_;
		darkestSecret_ = other.darkestSecret_;
	}
	return (*this);
}

Contact::~Contact()
{
}

void Contact::setFirstName(std::string value)
{
	firstName_ = value;
}

void Contact::setLastName(std::string value)
{
	lastName_ = value;
}

void Contact::setNickname(std::string value)
{
	nickname_ = value;
}

void Contact::setPhoneNumber(std::string value)
{
	phoneNumber_ = value;
}

void Contact::setDarkestSecret(std::string value)
{
	darkestSecret_ = value;
}

std::string Contact::getFirstName() const
{
	return (firstName_);
}

std::string Contact::getLastName() const
{
	return (lastName_);
}

std::string Contact::getNickname() const
{
	return (nickname_);
}

std::string Contact::getPhoneNumber() const
{
	return (phoneNumber_);
}

std::string Contact::getDarkestSecret() const
{
	return (darkestSecret_);
}

bool Contact::isValid() const
{
	return (!firstName_.empty() && !lastName_.empty() && !nickname_.empty()
		&& !phoneNumber_.empty() && !darkestSecret_.empty());
}