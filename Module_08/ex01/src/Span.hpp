#ifndef EX01_SPAN_HPP
# define EX01_SPAN_HPP
# include <iostream>
# include <list>

class Span
{
public:
	Span();
	Span(size_t size);
	virtual ~Span();
	Span(const Span &other);
	Span& operator=(const Span &other);

	void addNumber(int val);
	size_t longestSpan();
	size_t shortestSpan();
private:
	size_t _size;
	std::list<int> _list;
};


#endif
