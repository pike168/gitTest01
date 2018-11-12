#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int support()
{
	return 0x123;
}

foo *newFoo(int val)
{
	foo *newer = malloc(sizeof(new foo));
	newer->value = 123;
	return &foo;
}
