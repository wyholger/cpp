#ifndef EX03_POINT_HPP
# define EX03_POINT_HPP
# include "Fixed.hpp"

class Point
{
public:
	Point();
	Point(const Fixed &x, const Fixed &y);
	Point(const Point &other);
	~Point();

	Point &operator = (const Point &other);

	const Fixed &getY() const;
	const Fixed &getX() const;

private:
	Fixed _x;
	Fixed _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif //EX03_POINT_HPP
