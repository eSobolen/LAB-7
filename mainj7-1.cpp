#include <stdio.h>
#include <stdlib.h>

#define MAX_A_X 2
#define MAX_A_Y 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	srand(time(NULL));
	
	int  i, j;
	float a[MAX_A_Y][MAX_A_X],sum;
	
	for(i = 0;i < MAX_A_Y;i++)
	{
		for(j = 0;j < MAX_A_X;j++)
		{
			a[i][j] = -10 + rand() %20; 	
		}
	}
	printf("Before:\n");
	PrintfMatrix(a);
	printf("\n\n");
	
	for(i = 0;i < MAX_A_Y;i++)
	{
		for(j = 0;j < MAX_A_X;j++)
		{
			if(a[i][j] > 0)
			{
				sum = sum + a[i][j];
			}
			else
			{
				sum = 0;
				break;
			}
		}
		if(sum != 0)
		{
			break;
		}
	}
	if(sum == 0)
	{
		printf("This matrix dont have line with >0 elements");
		return 0;
	}
	printf("sum = %f\nstring indx = %d\nstring numder = %d",sum,i,i+1);
	
	for(i = 0;i < MAX_A_Y;i++)
	{
		for(j = 0;j < MAX_A_X;j++)
		{
			a[i][j] -= sum;
		}
	}
	printf("\n\n");
	printf("After:\n");
	PrintfMatrix(a);
	printf("\n\n");
	return 0;
}
void PrintfMatrix(float a[MAX_A_Y][MAX_A_X])
{
	int i, j;
	for(i = 0;i < MAX_A_Y;i++)
	{
		for(j = 0;j < MAX_A_X;j++)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n\n");
	}
}
