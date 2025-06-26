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
    Contact _contacts[8];
    int _index;
    int _count;

public:
    PhoneBook();

    ~PhoneBook();

    PhoneBook(const PhoneBook &other);

    PhoneBook &operator=(const PhoneBook &other);

    void addContact(const Contact &contact);

    void searchContact() const;

    void searchContact(int index) const;
};

#endif
