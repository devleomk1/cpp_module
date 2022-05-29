#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{

	private:
	public:
		Data( void );
		Data( Data const & src );
		Data &operator=( Data const & rhs );
		~Data( void );



};
std::ostream &operator<<( std::ostream & o, Data const & i );

#endif /* ************************************************************ DATA_H */
