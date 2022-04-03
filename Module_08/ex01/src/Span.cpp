#include "Span.hpp"

Span::Span() :_size(0)
{

}

Span::Span(size_t size) : _size(size)
{

}

Span::~Span()
{

}

Span::Span(const Span &other)
{
	_size = other._size;
	_list = other._list;
}

Span &Span::operator=(const Span &other)
{
	if (this == &other)
		return *this;
	_size = other._size;
	_list = other._list;
	return *this;
}

void Span::addNumber(int val)
{
	if (_size > _list.size())
		_list.push_back(val);
	else
		throw std::exception();
}

size_t Span::longestSpan()
{
	int max;
	std::list<int>::iterator it;
	std::list<int>::iterator it_2;
	_list.sort();
	for (int i = 0; i < ; ++i)
	{
		
	}
}
