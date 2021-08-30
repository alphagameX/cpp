#ifndef __BRAIN_H__
#define __BRAIN_H__


#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain(void);
		virtual ~Brain(void);
		Brain(const Brain & rhs);
		Brain & operator=(const Brain & rhs);
		std::string	& operator[](int);

		void	setIdea(int i, std::string idea);
};
#endif // __BRAIN_H__