#include "my_shell.h"

int main(int argc __attribute__((__unused__)), char *argv[] __attribute__((__unused__)), char *envp[])
{
    char *ptr = NULL;
    size_t n = 0;

    char *my_pwd =  get_pwd(envp);
	my_print(my_pwd);
    while (getline(&ptr, &n, stdin) != EOF)
    {
        my_print(ptr);
        my_print(my_pwd);
    }
	printf("\n");
    free(ptr);
    exit(EXIT_SUCCESS);
}
