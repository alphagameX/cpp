
#include <vector>

class Span
{
	private:
		std::vector <unsigned int> _vec;
	
	public:
		Span(void);
		Span(unsigned int);
		Span(const & Span);

		~Span(void);

		Span & operator=(const Span &);

		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
}

std::ostream & operator<<(std::ostream &, const Span &);