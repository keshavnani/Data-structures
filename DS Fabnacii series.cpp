#include<stdio.h>
int main()
{
	int n,i,f1=0,f2=1,f3,sum=1;
	printf("enter the range:\n");
	scanf("%d",&n);
	printf("%d\t",f1);
	printf("%d\t",f2);
	while (i<n)
	{
		f3=f1+f2;
		printf("%d\t",f3);
		f1=f2;
		f2=f3;
		sum+=f3;
		i++;
	}
			
	
	printf("the sum of fabnocii series %d\n",sum);
	return 0;
}
