#include <stdio.h>
#include <PCUnit.h>

#include "a.h"

extern PCU_Suite* AddTest_suite( void );

void test( void )
{
	const PCU_SuiteMethod suites[] =
	{
		AddTest_suite,
	};
	PCU_set_putchar( putchar );
	PCU_run( suites, sizeof( suites ) / sizeof( suites[0] ) );
}

int main()
{
	test();
	return 0;
}

