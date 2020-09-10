#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the value of x:\n");
	scanf("%d",&x);
	printf("Enter the value of y:\n");
	scanf("%d",&y);
	if(x<y)
	{
		printf("X is less than y:\n");
	}
	if(x>y)
	{
		printf("X is grater than y congratulation:\n");
	}
	if(x==y)
	{
		printf("X is equal to y we are happy:\n");
	}
	printf("end of program:");
	return 0;
}
