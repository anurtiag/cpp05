/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 04:11:21 by kali              #+#    #+#             */
/*   Updated: 2024/07/26 13:03:17 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137, false, target)
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}


void ShrubberyCreationForm::action() const
{
    std::string filename = this->target + "_shrubbery";
    std::ofstream outfile(filename.c_str());
    if(!outfile.is_open())
    {
        std::cerr << "garbanzo\n";
        return ;
    }
    outfile << "     *     \n"
            << "    ***    \n"
            << "   *****   \n"
            << "  *******  \n"
            << " ********* \n"
            << "***********\n"
            << "     *     \n"
            << "     *     \n"
            << "     *     \n";
    outfile.close();
}