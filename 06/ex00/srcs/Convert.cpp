#include	"Convert.hpp"

std::string const Convert::_floatingKeyWord[NUMBER_KEYWORD_FLOATING] = {"-inf", "+inf", "nan", "-inff", "+inff", "nanf"};

Convert::Convert(void)
{
	std::cout
		<< "Convert: default constructor"
		<< std::endl;
}

Convert::~Convert(void)
{
	std::cout
		<< "Convert: destructor"
		<< std::endl;
}

// 'a'
// is char     -> return 1
// is not char -> return 0
int	Convert::_isChar(std::string &input)
{
	if (input.length() != 3)
		return 0;

	if (input[0] != '\'' || input[2] != '\'')
		return 0;

	return 1;
}

void	Convert::table(std::string input)
{
	std::cout
		<< "==== Try: \""
		<< input
		<< "\" ===="
		<< std::endl;
	if (this->_isChar(input))
	{
		std::cout
			<< "\tchar : '"
			<< input[1]
			<< "'";
	}
	else
	{
		std::cout
			<< "cannot define the type"
			<< std::endl;
	}
}
