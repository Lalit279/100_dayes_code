#include<stdio.h>
int main()
{
	int m=40,n=20;
	int o=20,p=30;
	if(m>n&&m!=0)
	{
		printf("&& operator: Both condition is tru\n");
		
	}
	if(o>p||p!=20)
	{
		printf("|| oprerato:only one condtion is true\n");
		
	}
	if(!(m>n&&m!=0))
	{
		printf("! operator: both condition are true\n");
		
	}
	else
	{
		printf("!opertor: both condition are true.\"but,status is inverted as false\n");
		
	}
	
	
}
