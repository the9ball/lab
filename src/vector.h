#pragma once

class CVector
{
public:
	CVector( float x, float y, float z );

	void operator+=( const CVector& a );
	CVector operator+( const CVector& a )
	{
		CVector t( *this );
		t += a;
		return t;
	}

	void printf() const;

private:
	float x, y, z;
};
