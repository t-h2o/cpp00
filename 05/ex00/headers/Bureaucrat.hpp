#include	<iostream>

class	Bureaucrat
{
	public:

		Bureaucrat(std::string const name, int grade);
		~Bureaucrat(void);

		int			getGrade(void) const;
		std::string	getName(void) const;

		void	incGrade(int level);
		void	decGrade(int level);

		class ExceptionGradeTooLow : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Cannot init with a grade greater than 1");
				}
		};

	private:

		const std::string	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &sortie, Bureaucrat const &rhs);
