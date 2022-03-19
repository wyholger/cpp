#include "Point.hpp"

Point::Point() : _x(Fixed()), _y(Fixed())
{

}

Point::Point(const Fixed &x, const Fixed &y) : _x(x), _y(y)
{

}

Point::Point(const Point &other) : _x(other._x), _y(other._y)
{

}

Point &Point::operator = (const Point &other)
{
	if (this != &other)
	{
		this->_x.setRawBits(other._x.getRawBits());
		this->_y.setRawBits(other._y.getRawBits());
	}
	return *this;
}

Point::~Point()
{

}

const Fixed &Point::getX() const
{
	return _x;
}

const Fixed &Point::getY() const
{
	return _y;
}

