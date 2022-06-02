#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span( void ) : _N(0), _data(0)
{
}

Span::Span( unsigned int n ) : _N(n), _data(0)
{
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
	this->_data.clear();
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_N = rhs._N;
		this->_data.clear();
		this->_data = rhs._data;
	}
	return *this;
}

//std::ostream &			operator<<( std::ostream & o, Span const & i )
//{
//	//o << "Value = " << i.getValue();
//	return o;
//}

void Span::printVector( unsigned int size )
{
	if (_N < size)
		throw WrongSizePrintException();
	for (size_t i = 0; i < size ; i++)
	{
		std::cout << "[" MAGENTA << _data.at(i) << RESET "] ";
	}
	std::cout << std::endl;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber( const int num )
{
	if (_data.size() >= _N)
		throw WrongSizePrintException();
	this->_data.push_back(num);
}

unsigned int	Span::longestSpan( void )
{
	if (_N <= 1)
		throw WrongSizePrintException();

	std::vector<int> tmp = this->_data;
	std::vector<int>::iterator min, max;

	max = std::max_element(tmp.begin(), tmp.end());
	min = std::min_element(tmp.begin(), tmp.end());

	return (*max - *min);

}

unsigned int	Span::shortestSpan( void )
{
	if (_N <= 1)
		throw WrongSizePrintException();

	std::vector<int>	tmp = this->_data;
	int					pre_min = INT_MAX;

	std::sort(tmp.begin(), tmp.end());
	for (size_t i = 0; i < _N - 1; i++)
	{
		pre_min = std::min(tmp.at(i+1) - tmp.at(i), pre_min);
	}

	return (pre_min);
}

const char *Span::WrongSizePrintException::what( void ) const throw()
{
	return ("Wrong Size Print");
}

/* ************************************************************************** */
