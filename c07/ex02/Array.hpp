#include <math.h>
#include <iostream>
#include <sstream>

namespace patch
{
	template < typename T > std::string to_string( const T& n )
	{
		std::ostringstream stm ;
		stm << n ;
		return stm.str() ;
	}
}

template <typename T>
class Array
{
	private:
		T				*_container;
		unsigned int	_size;
	public:
		Array(void);
		Array(unsigned int);
		Array(const Array & rhs);
		~Array(void);
		T & operator[](unsigned int);
		Array & operator=(const Array & rhs);

		unsigned int size(void) const;

		class WrongIndexException: public std::exception
		{
			public:
				virtual const char * what(void) const throw()
				{
					return ("Invalid index array");
				}
		};
};

template<typename T>
Array<T>::Array(void) : _size(0)
{
	std::cout << "contructor" << std::endl;
	_container = new T();
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	std::cout << "contructor" << std::endl;
	try
	{
		_container = new T [n]();
	}
	catch (std::bad_alloc & e)
	{
		std::cerr << e.what() << std::endl;
		_container = new T();
		_size = 0;
	}
}

template<typename T>
Array<T>::Array(const Array & rhs) 
{
	std::cout << "contructor" << std::endl;
	_container = new T[rhs._size] ();
	_size = rhs._size;
	std::copy(rhs._container, rhs._container + rhs._size, _container);
}

template<typename T>
Array<T>::~Array(void) 
{
	std::cout << "Destructor" << std::endl;
	delete [] _container;
}

template<typename T>
unsigned int Array<T>::size(void) const
{
	return (_size);
}

template<typename T>
T & Array<T>::operator[](unsigned int n) 
{
	if (n < 0 || n >= _size)
		throw Array::WrongIndexException();
	return (_container[n]);
}


template<typename T>
Array<T> & Array<T>::operator=(const Array<T> & rhs) 
{
	if (this == &rhs)
		return *this;
	if (_size != rhs._size)
	{
		delete[] _container;
		_container = NULL;
		_size = 0;
		_container = new T[rhs._size] ();
		_size = rhs._size;
	}
	std::copy(rhs._container, rhs._container + rhs._size, _container);
	return *this;
}




