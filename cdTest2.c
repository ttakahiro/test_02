#include <stdio.h>
#include <string.h>

int sub(char *param)
{
char buffer[8];

    strncpy(buffer, param, strlen(param));

    printf(buffer);
    
    return 0;
}
void sub2(char msg[22])
{
	printf(msg);
}

int main(int argc, char *argv[])
{
char message[20];
int pos;

    sub("Overflow message\n");
    strcpy(message, "tes");
    sub2(message);
    
    for(int i=0;i<argc;i++)
    {
		pos +=
		    snprintf(message,sizeof(message),
		                 "%s",  argv[i]);
    }
    
    return 0;

}
