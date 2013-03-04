#include <stdio.h>
#include "vector.h"

int main()
{
	CVecter a( 0, 1, 0 );
	CVecter b( 0, 0, 1 );

	CVecter c = a + b;

	c.printf();

	return 0;
}

