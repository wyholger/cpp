#ifndef EX01_SPAN_HPP
# define EX01_SPAN_HPP
# include <iostream>
# include <list>
# include <exception>
# define YELLOW "\033[0;33m"
# define PURPLE "\033[0;35m"
# define RED "\033[0;31m"
# define BLUE "\033[0;34m"
# define GREEN "\033[0;32m"
# define DARK_YELLOW "\033[2;33m"
# define DARK_PURPLE "\033[2;35m"
# define DARK_RED "\033[2;31m"
# define DARK_GREEN "\033[2;32m"
# define END "\033[0;0m"

class Span
{
public:
	Span();
	Span(size_t size);
	virtual ~Span();
	Span(const Span &other);
	Span& operator=(const Span &other);

	void addNumber(int val);
	void addRange(std::list<int>::iterator begin, std::list<int>::iterator end);
	unsigned int longestSpan();
	unsigned int shortestSpan();

	class SizeArrTooSmall : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Span have < 2 elements. To find out the interval is greater >= 2.";
		}
	};
	class OversizeLimit : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Span oversize limit.";
		}
	};
	class OversizeRangeLimit : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Error. Range len > Span size.";
		}
	};
private:
	size_t _size;
	std::list<int> _list;
};


#endif
