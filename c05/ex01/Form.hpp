#ifndef __FORM_H__
#define __FORM_H__


# include <iostream>

class Form
{
	public:
		Form(void);
		~Form(void);
		Form(Form const &src);

		Form&		operator=(Form const &src);
};

std::ostream &		operator<<(std::ostream &o, Form const &src);

#endif // __FORM_H__