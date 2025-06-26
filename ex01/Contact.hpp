/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomsato <tomsato@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:10:03 by tomsato           #+#    #+#             */
/*   Updated: 2025/06/07 21:12:36 by tomsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;

public:
    Contact();

    ~Contact();

    Contact(const Contact &other);

    Contact &operator=(const Contact &other);

    void setFirstName(const std::string &value);

    void setLastName(const std::string &value);

    void setNickname(const std::string &value);

    void setPhoneNumber(const std::string &value);

    void setDarkestSecret(const std::string &value);

    std::string getFirstName() const;

    std::string getLastName() const;

    std::string getNickname() const;

    std::string getPhoneNumber() const;

    std::string get_darkest_secret() const;

    std::string getDarkestSecret() const;

    bool isValid() const;
};

#endif
