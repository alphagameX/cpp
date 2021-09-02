#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <stdexcept>
#include <iostream>
#define MIN 1
#define MAX 150

class Bureaucrat
{
	private:
		const std::string _name;
		int			_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & rhs);
		~Bureaucrat(void);
		
		Bureaucrat & operator=(const Bureaucrat & rhs);

		std::string getName(void) const;
		int			getGrade(void) const;

		void inc(void);
		void dec(void);

	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("The grade is too high");
			}
	};
	
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("The grade is too low");
			}
	};

};


std::ostream & operator<<(std::ostream &, const Bureaucrat &);
std::ostream & operator<<(std::ostream &, const Bureaucrat *);

#endif // __BUREAUCRAT_H__