#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age for voting:\n");
	scanf("%d",&age);
	if(age>18)
	{
		printf("You are eligible for voting congratulations:\n");
	}
	else
	{
		printf("You are not eliguble for voting ??sorry:\n");
		
	}
	return 0;
}
