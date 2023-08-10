#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    Fixed abp;
    Fixed acp;
    Fixed bcp;
    Fixed abc;

    abc = ((a.get_x() * ( b.get_y() - c.get_y() )) + (b.get_x() * ( c.get_y() - a.get_y() )) + (c.get_x() * ( a.get_y() - b.get_y() )) ) / 2;
    if (abc < 0)
        abc = abc * -1;
    abp = ((a.get_x() * ( b.get_y() - point.get_y() )) + (b.get_x() * ( point.get_y() - a.get_y() )) + (point.get_x() * ( a.get_y() - b.get_y() )) ) / 2;
    if (abp < 0)
        abp = abp * -1;
    acp = ((a.get_x() * ( c.get_y() - point.get_y() )) + (c.get_x() * ( point.get_y() - a.get_y() )) + (point.get_x() * ( a.get_y() - c.get_y() )) ) / 2;
    if (acp < 0)
        acp = acp * -1;
    bcp = ((b.get_x() * ( c.get_y() - point.get_y() )) + (c.get_x() * ( point.get_y() - b.get_y() )) + (point.get_x() * ( b.get_y() - c.get_y() ) )) / 2;
    if (bcp < 0)
        bcp = bcp * -1;
    return  ( abc == abp + bcp + acp );
}
