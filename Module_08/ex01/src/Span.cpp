#include "../include/Span.hpp"

Span::Span() :_size(0)
{

}

Span::Span(size_t size) : _size(size)
{

}

Span::~Span()
{
//	std::cout << "Destructor call" << std::endl;
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
		throw Span::OversizeLimit();
}

unsigned int Span::longestSpan()
{
	if (_list.size() < 2)
		throw Span::SizeArrTooSmall();
	_list.sort();
	return (_list.back() - _list.front());
}

unsigned int Span::shortestSpan()
{
	if (_list.size() < 2)
		throw Span::SizeArrTooSmall();
	if (_list.size() == 2)
		return longestSpan();
	_list.sort();
	std::list<int>::iterator it;
	std::list<int>::iterator it_2;
	it = _list.begin();
	it_2 = _list.begin();
	it_2++;
	int min = longestSpan();
	int tmp;
	for (size_t i = 0; i < _list.size() - 1; i++)
	{
		tmp = *it_2 - *it;
		if (tmp < min)
			min = tmp;
		it++;
		it_2++;
	}
	return min;
}

void Span::addRange(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	if ((unsigned long)std::distance(begin, end) > _size - _list.size())
		throw Span::OversizeRangeLimit();
	_list.insert(_list.end(), begin, end);
}
