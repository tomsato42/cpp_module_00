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
	std::string firstName_;
	std::string lastName_;
	std::string nickname_;
	std::string phoneNumber_;
	std::string darkestSecret_;

  public:
	Contact();
	~Contact();
	Contact(const Contact& other);
	Contact& operator=(const Contact& other);

	void setFirstName(std::string value);
	void setLastName(std::string value);
	void setNickname(std::string value);
	void setPhoneNumber(std::string value);
	void setDarkestSecret(std::string value);

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;

	bool isValid() const;
};

#endif

