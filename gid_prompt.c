#include <stdio.h>
#include <stdlib.h>
#include <shell.h>

void gid_prompt(void)
{
	size_t n = 10;
	char *buf;

	buf = malloc(sizeof(char) * 10);
	printf("Enter your jina");
	getline(&buf, &n, stdin);
	printf("You are : %s\n", buf);
	printf("The buffer size: %d", n)

	free(buf);

	return (0);

}
