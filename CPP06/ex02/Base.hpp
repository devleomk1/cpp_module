#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <ctime>		//srand(), rand()
# include <exception>
# include "color.hpp"

# define RAND_A		0
# define RAND_B		1
# define RAND_C		2

class Base
{
	public:
		virtual ~Base( void );
};

class A : public Base
{
	/* Empty Class */
};

class B : public Base
{
	/* Empty Class */
};

class C : public Base
{
	/* Empty Class */
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p); /* 이 함수 내에서 포인터를 사용하는 것은 금지되어 있습니다. */

#endif
