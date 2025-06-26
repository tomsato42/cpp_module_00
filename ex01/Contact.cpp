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

Contact::~Contact()
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
        _firstName = other._firstName;
        _lastName = other._lastName;
        _nickname = other._nickname;
        _phoneNumber = other._phoneNumber;
        _darkestSecret = other._darkestSecret;
    }
    return (*this);
}

void Contact::setFirstName(const std::string &value)
{
    _firstName = value;
}

void Contact::setLastName(const std::string &value)
{
    _lastName = value;
}

void Contact::setNickname(const std::string &value)
{
    _nickname = value;
}

void Contact::setPhoneNumber(const std::string &value)
{
    _phoneNumber = value;
}

void Contact::setDarkestSecret(const std::string &value)
{
    _darkestSecret = value;
}

std::string Contact::getFirstName() const
{
    return (_firstName);
}

std::string Contact::getLastName() const
{
    return (_lastName);
}

std::string Contact::getNickname() const
{
    return (_nickname);
}

std::string Contact::getPhoneNumber() const
{
    return (_phoneNumber);
}

std::string Contact::get_darkest_secret() const
{
    return (_darkestSecret);
}

std::string Contact::getDarkestSecret() const
{
    return (_darkestSecret);
}

bool Contact::isValid() const
{
    return (!_firstName.empty() && !_lastName.empty() && !_nickname.empty()
            && !_phoneNumber.empty() && !_darkestSecret.empty());
}
