#pragma once

class CVecter
{
public:
	CVecter( float x, float y, float z );

	void operator+=( const CVecter& a );

	void printf() const;

private:
	float x, y, z;
};
