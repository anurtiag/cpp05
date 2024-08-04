/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:06:10 by kali              #+#    #+#             */
/*   Updated: 2024/07/23 04:00:15 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>
# include <iomanip>
# include "Bureaucrat.hpp"

# define MIN_GRADE 150
# define MAX_GRADE 1

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        const int signGrade;
        const int execGrade;
        bool isSigned;
        std::string target;
    public:
        AForm();
        AForm(const std::string name, const int signGrade, const int execGrade, bool isSigned, std::string target);
        AForm(const AForm& source);
        AForm& operator=(const AForm& source);
        virtual ~AForm();
        int GetSignGrade() const;
        int GetExecGrade() const;
        bool GetIsIsgned() const;
        std::string GetName() const;
        void GradeTooHighException() const;
        void GradeTooLowException() const;
        void NotSignedException() const;
        void VeryfyAForm();
        void beSigned(Bureaucrat& obj);
        virtual void action() const = 0;
        void execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream& output, AForm& obj);

#endif