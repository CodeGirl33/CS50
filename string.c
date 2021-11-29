#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
	/*string s = get_string("Input: "); */
	string s = get_string("Input: ");
	printf("Output: ");

	/*for (int i = 0; i < strlen(s); i++) /* strlen(s) is equivalent to s[i] != '\0'*/
	int n = strlen(s);
	for (i = 0; i < n; i++)
	{
		printf("%s", s[i]);
	}
	printf("\n");
}