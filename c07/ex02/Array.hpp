

#include <iostream>

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
	_container = new T();
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
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
	*this = rhs;
}

template<typename T>
Array<T>::~Array(void) 
{
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
	if (n < 0 || n > _size)
		throw Array::WrongIndexException();
	return (_container[n]);
}


template<typename T>
Array<T> & Array<T>::operator=(const Array<T> & rhs) 
{
	  // Guard self assignment
    if (this == &rhs)
        return *this;
 
    // assume *this manages a reusable resource, such as a heap-allocated buffer mArray
    if (_size != rhs._size) {         // resource in *this cannot be reused
        delete[] _container;              // release resource in *this
        _container = nullptr;
        _size = 0;                     // preserve invariants in case next line throws
        _container = new int[rhs._size]; // allocate resource in *this
        _size = rhs._size;
    } 
 
    std::copy(rhs._container, rhs._container + rhs._size, _container);
    return *this;
}




