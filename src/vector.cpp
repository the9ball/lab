#include "vector.h"

#include <stdio.h>

CVector::CVector( float x, float y, float z )
{
	this->x = x; this->y = y; this->z = z;
}

void CVector::operator+=( const CVector& a )
{
	this->x += a.x; this->y += a.y; this->z += a.z;
}

void CVector::printf() const
{
	::printf( "( %f , %f , %f )\n", x, y, z );
}

