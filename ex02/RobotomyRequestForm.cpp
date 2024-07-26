/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 04:11:21 by kali              #+#    #+#             */
/*   Updated: 2024/07/23 09:15:42 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45, false, target)
{
    std::srand(std::time(0));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void RobotomyRequestForm::action() const
{
    if(std::rand() % 2 == 0)
        std::cout << this->target << " has been robotomized" << std::endl;
    else    
        std::cout << "robotomy failed" << std::endl;
}