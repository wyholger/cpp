#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed res_1;
	Fixed res_2;
	Fixed res_3;

	res_1 = (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
	res_2 = (b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
	res_3 = (c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());
	if ((res_1 > 0 && res_2 > 0 && res_3 > 0) || (res_1 < 0 && res_2 < 0 && res_3 < 0))
		return true;
	return false;
}
