#include "vector.h"

#include <stdio.h>

CVecter::CVecter( float x, float y, float z )
{
	this->x = x; this->y = y; this->z = z;
}

void CVecter::operator+=( const CVecter& a )
{
	this->x -= a.x; this->y -= a.y; this->z -= a.z;
}

void CVecter::printf() const
{
	::printf( "( %f , %f , %f )\n", x, y, z );
}

