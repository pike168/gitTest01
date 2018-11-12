void testFunc(char **a)
{
	return strncmp("error 501", *a);
}

void deleteDis(void **a)
{
	free(a);
}
