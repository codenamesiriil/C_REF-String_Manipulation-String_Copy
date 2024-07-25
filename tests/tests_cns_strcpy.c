#include <stdio.h>
#include <string.h>
#include "../cns_strcpy.c"

/*
	TEST #1

	Tests 'cns_strcpy' against 'strcpy', as defined in the 'string.h',
	library for a normal string.
*/

void	test_normal_string(void)
{
	char	str_refe[20];
	char	str_test[20];
	char	str[] = "Hello World!";

	if (strcmp(cns_strcpy(str_test, str), strcpy(str_refe, str)) == 0)
		printf("test_normal_string:\t\x1B[32mSUCCESS\x1B[0m\n");
	else
		printf("test_normal_string:\t\x1B[31mFAIL\x1B[0m\n");
}

/*
	TEST #2

	Tests 'cns_strcpy' against 'strcpy', as defined in the 'string.h',
	library for an empty string.
*/

void	test_empty_string(void)
{
	char	str_refe[20];
	char	str_test[20];
	char	str[] = "";

	if (strcmp(cns_strcpy(str_test, str), strcpy(str_refe, str)) == 0)
		printf("test_empty_string:\t\x1B[32mSUCCESS\x1B[0m\n");
	else
		printf("test_empty_string:\t\x1B[31mFAIL\x1B[0m\n");
}

/*
	TEST #3

	Tests 'cns_strcpy' against 'strcpy', as defined in the 'string.h',
	library for a single character string.
*/

void	test_single_character(void)
{
	char	str_refe[20];
	char	str_test[20];
	char	str[] = "a";

	if (strcmp(cns_strcpy(str_test, str), strcpy(str_refe, str)) == 0)
		printf("test_single_character:\t\x1B[32mSUCCESS\x1B[0m\n");
	else
		printf("test_single_character:\t\x1B[31mFAIL\x1B[0m\n");
}

/*
	TEST #4

	Tests 'cns_strcpy' against 'strcpy', as defined in the 'string.h',
	library for a string of maximum length.
*/

void	test_maximum_length(void)
{
	char	str_refe[1000];
	char	str_test[1000];
	char	str[1000];

	memset(str, 'a', 999); // filling an empty string with the character 'a'
	str[999] = '\0';

	if (strcmp(cns_strcpy(str_test, str), strcpy(str_refe, str)) == 0)
		printf("test_maximum_length:\t\x1B[32mSUCCESS\x1B[0m\n");
	else
		printf("test_maximum_length:\t\x1B[31mFAIL\x1B[0m\n");
}

/*
	TEST #5

	Tests 'cns_strcpy' against 'strcpy', as defined in the 'string.h',
	library for a very large string.
*/

void test_large_strings(void)
{
    char	str_refe[100000];
    char	str_test[100000];
    char	str[100000];

    memset(str, 'a', 99999);
    str[99999] = '\0';

    if (strcmp(cns_strcpy(str_test, str), strcpy(str_refe, str)) == 0)
        printf("test_large_strings:\t\x1B[32mSUCCESS\x1B[0m\n");
    else
        printf("test_large_strings:\t\x1B[31mFAIL\x1B[0m\n");
}

/*
	TEST #6

	Tests 'cns_strcpy' against 'strcpy', as defined in the 'string.h',
	library for a string with special characters.
*/

void	test_special_character(void)
{
	char	str_refe[20];
	char	str_test[20];
	char	str[] = "Hello\nWorld!";

	if (strcmp(cns_strcpy(str_test, str), strcpy(str_refe, str)) == 0)
		printf("test_special_character:\t\x1B[32mSUCCESS\x1B[0m\n");
	else
		printf("test_special_character:\t\x1B[31mFAIL\x1B[0m\n");
}

/*
	TEST #7 and #8

	Tests how 'cns_strcpy' handles NULL as destination or source, in case
	the implementation is made to handle those cases. The original 'strcpy'
	does not handle NULL being passed as input.
*/

#ifdef HANDLENULL
void	test_null_destination(void)
{
	char	str[] = "Hello";

	if (cns_strcpy(NULL, str) == NULL)
		printf("test_null_destination:\t\x1B[32mSUCCESS\x1B[0m\n");
	else
		printf("test_null_destination:\t\x1B[31mFAIL\x1B[0m\n");
}

void	test_null_source(void)
{
	char	str_test[20];

	if (cns_strcpy(str_test, NULL) == NULL)
		printf("test_null_source:\t\x1B[32mSUCCESS\x1B[0m\n");
	else
		printf("test_null_source:\t\x1B[31mFAIL\x1B[0m\n");
}
#endif

/*
	MAIN

	Runs all tests
*/

int	main(void)
{
	test_normal_string();
	test_empty_string();
	test_single_character();
	test_maximum_length();
	test_large_strings();
	test_special_character();

	#ifdef HANDLENULL
	test_null_destination();
	test_null_source();
	#endif

	return (0);
}
