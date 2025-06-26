/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomsato <tomsato@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:53:23 by tomsato           #+#    #+#             */
/*   Updated: 2025/06/07 21:38:16 by tomsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstdlib>


int main()
{
    PhoneBook phone_book;
    Contact contact;
    int index;

    while (true)
    {
        std::cout << "--------------------------------" << std::endl;
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::string command;
        if (!std::getline(std::cin, command))
        {
            std::cout << "\nEOF detected. Exiting." << std::endl;
            break ;
        }
        if (command.empty())
            continue ;
        if (command == "ADD")
        {
            std::string input;
            std::cout << "Enter first name: ";
            std::getline(std::cin, input);
            contact.setFirstName(input);
            std::cout << "Enter last name: ";
            std::getline(std::cin, input);
            contact.setLastName(input);
            std::cout << "Enter nickname: ";
            std::getline(std::cin, input);
            contact.setNickname(input);
            std::cout << "Enter phone number: ";
            std::getline(std::cin, input);
            contact.setPhoneNumber(input);
            std::cout << "Enter darkest secret: ";
            std::getline(std::cin, input);
            contact.setDarkestSecret(input);
            if (contact.isValid())
            {
                phone_book.addContact(contact);
                std::cout << "Contact added successfully." << std::endl;
            } else
            {
                std::cout << "All fields must be filled. Contact not saved." << std::endl;
            }
        } else if (command == "SEARCH")
        {
            phone_book.searchContact();
            std::string input;
            std::cout << "--------------------------------" << std::endl;
            std::cout << "Enter index to view details: ";
            if (!std::getline(std::cin, input))
            {
                std::cout << "\nEOF detected. Exiting." << std::endl;
                break ;
            }
            if (input.empty()
                || input.find_first_not_of("0123456789") != std::string::npos)
            {
                std::cout << "Invalid input. Please enter a number between 0 and 7." << std::endl;
                continue ;
            }
            index = std::atoi(input.c_str());
            if (index >= 0 && index < 8)
                phone_book.searchContact(index);
            else
                std::cout << "Invalid index." << std::endl;
        } else if (command == "EXIT")
        {
            std::cout << "Exiting the program." << std::endl;
            break ;
        } else
        {
            std::cout << "Unknown command. Please enter ADD, SEARCH, or EXIT." << std::endl;
        }
    }
    return (0);
}
