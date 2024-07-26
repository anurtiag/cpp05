/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:06:06 by kali              #+#    #+#             */
/*   Updated: 2024/07/26 12:56:10 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void sign_n_execute(Bureaucrat& b, AForm* form, int control)
{
    try
    {
        b.signForm(*form);
        if(control == 0)
        {
            for(int i = 0; i < 10; i++)
                form->action();
        }
        else
            form->action();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

void tests(AForm *form, int control)
{
{
    std::cout << "\n\n\nTest1\n\n\n";
    Bureaucrat b("bureau", 1);
    sign_n_execute(b, form, control);
}
{
    std::cout << "\n\n\nTest2\n\n\n";
    Bureaucrat b("bureau", 150);
    sign_n_execute(b, form, control);
}
{
    std::cout << "\n\n\nTest3\n\n\n";
    Bureaucrat b("bureau", 60);
    sign_n_execute(b, form, control);
}
}

int main()
{
    RobotomyRequestForm a("potato");
    PresidentialPardonForm b("chickpea");
    ShrubberyCreationForm c("sweet potato");
    std::cout << "\n\n\nRobotomyRequestForm\n\n\n";
    tests(&a, 0);
    std::cout << "\n\n\nPresidentialPardonForm\n\n\n";
    tests(&b, 1);
    std::cout << "\n\n\nShrubberyCreationForm\n\n\n";
    tests(&c, 1);
    return(0);
}