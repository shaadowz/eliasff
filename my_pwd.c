#include "my_shell.h"

char *get_pwd(char *env[])
{
    int i;
	char *envr;
	char *pwd = "PWD";
	char equal = '=';
	char *appendstr = "/: ";
	
	char *envr2 = NULL;

    for (i = 0; env[i] != NULL; i++)
    {
        const char *result = strstr(env[i], pwd);

	if (result !=NULL)
        {
            envr = strchr(env[i], equal) + 1;
		envr2 = malloc(strlen(envr) + strlen(appendstr) + 1);
            break;
        }
    }
	
	envr2 = envr;

	strcat(envr2, appendstr);
    return envr2;
    
}


