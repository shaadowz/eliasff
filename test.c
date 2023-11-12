#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int __attribute__((unused))argc, char __attribute__((unused))*argv[], char *envp[])
{
	int i;
	char *pwd;
    for (i =0; envp[i] != NULL; i++)
    {
	if (strstr(envp[i], "PWD") != NULL)
	{
        printf("%s\n\n", envp[i]);
	pwd = strchr(envp[i], '=') + 1;
	printf("%s\n", pwd);
	}
    }
    printf("Not found");
    return (0);
}
