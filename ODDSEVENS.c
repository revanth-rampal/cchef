#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
		{
			int a,b,sum=0;
			scanf("%d %d",&a,&b);
			sum= a+b;
			if(sum%2==0)
			{
				printf("Bob\n");	
			}
			else
			{
				printf("Alice\n");
			}
		}
}

