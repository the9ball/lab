#include <stdio.h>
#include <PCUnit.h>
#include "a.h"

A::A()
{
	printf( "Hello\n" );
}

A::~A()
{
	printf( "Bye\n" );
}

int add( int a, int b ){ return a + b; }

static void test_add( void )
{
	PCU_ASSERT_EQUAL( 3, add( 2, 1 ) );
	PCU_ASSERT_EQUAL( 9, add( 6, 3 ) );
	PCU_ASSERT_EQUAL( 7, add( 4, 3 ) );
	PCU_ASSERT_EQUAL( 8, add( 2, 6 ) );
}

PCU_Suite* AddTest_suite( void )
{
	static PCU_Test tests[] =
	{
		{ "test_add", test_add },
	};
	static PCU_Suite suite = { "AddTest", tests, sizeof( tests ) / sizeof( tests[0] ) };
	return &suite;
}
