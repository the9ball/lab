#pragma once

class CVector
{
public:
	CVector( float x, float y, float z );

	void operator+=( const CVector& a );

	void printf() const;

private:
	float x, y, z;
};
