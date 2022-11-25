#include	"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	return ;
}

std::string	Bureaucrat::getName(void) const
{
	return this->_name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

std::ostream &operator<<(std::ostream &sortie, const Bureaucrat &bureaucrat)
{
	sortie
		<< bureaucrat.getGrade()
		<< ", bureaucrat grade "
		<< bureaucrat.getGrade()
		<< ".";

	return sortie;
}
