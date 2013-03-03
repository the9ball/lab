#include <stdio.h>
#include <string>

void p( std::string s )
{
	printf( "%s\n", s.c_str() );
}

int main()
{
	p( "Hello World\n" );
	return 0;
}

