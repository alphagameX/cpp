#ifndef __FORM_H__
#define __FORM_H__

# include <iostream>
# include "../Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_sign_required_grade;
		const int			_exec_required_grade;
	public:
		Form(void);
		virtual ~Form(void);
		Form(std::string name, int sign_required_grade, int exec_required_grade);
		Form(Form const &src);

		Form&		operator=(Form const &src);

		void			authorized(int grade, const Bureaucrat & rhs) const;

		std::string		getName(const Bureaucrat & rhs) const;
		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getSignGrade(void) const;
		int				getExecGrade(void) const;

		void			beSigned(const Bureaucrat & rhs);
		virtual void	execute(const Bureaucrat & executor) = 0;

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

std::ostream &		operator<<(std::ostream &o, Form const &src);

#endif // __FORM_H__