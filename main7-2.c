#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LEN 255

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[STR_LEN];
	gets(str);
	int i, j;
	for(i = 0;i <= strlen(str);i++)
	{
		if(str[0] == 32)
		{
			for(j = 0; j < strlen(str); j++)
			{
				str[j] = str[j+1];
			}
		}
		else
		{
			break;
		}
	}
	
	for(i = strlen(str)-1;i >= 0;i--)
	{
		if(str[i] == 32)
		{
			str[i] = '\0'; 
		}
		else
		{
			break;
		}
	}
	strcat(str,"<-- end");
	puts(str);
	return 0;
}
