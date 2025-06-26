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

PhoneBook::PhoneBook() : _index(0), _count(0)
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
            _contacts[i] = other._contacts[i];
        }
        _index = other._index;
        _count = other._count;
    }
    return (*this);
}

void PhoneBook::addContact(const Contact &contact)
{
    if (_count < 8)
    {
        _contacts[_index] = contact;
        _index = (_index + 1) % 8;
        _count++;
    } else
    {
        _contacts[_index] = contact;
        _index = (_index + 1) % 8;
    }
    return;
}

static std::string truncate(std::string str)
{
    if (str.length() > 10)
    {
        str = str.substr(0, 9) + ".";
    }
    return str;
}

void PhoneBook::searchContact() const
{
    std::cout << "|" << std::setw(10) << "Index"
            << "|" << std::setw(10) << "First Name"
            << "|" << std::setw(10) << "Last Name"
            << "|" << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < _count; ++i)
    {
        std::cout << "|" << std::setw(10) << i
                << "|" << std::setw(10) << truncate(_contacts[i].getFirstName())
                << "|" << std::setw(10) << truncate(_contacts[i].getLastName())
                << "|" << std::setw(10) << truncate(_contacts[i].getNickname()) << std::endl;
    }
    std::cout << "Total Contacts: " << _count << std::endl;
}

void PhoneBook::searchContact(int index) const
{
    if (index < 0 || index >= _count)
    {
        return;
    }
    std::cout << "Index: " << index << std::endl;
    std::cout << "First Name: " << _contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << _contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << _contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << _contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << _contacts[index].get_darkest_secret() << std::endl;
}
