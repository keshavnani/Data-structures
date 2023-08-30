#include<stdio.h>
int main()
{
	int a1[10],a2[10],MA[20],i,j;
	printf("enter the values of a1:\n");
	for(i=0;i<10;i++)
	{
	    scanf("%d",&a1[i]);
	    MA[i]=a1[i];
    }
    printf("enter the values of a2:\n");
    for(j=0;j<10;j++)
    {
    	scanf("%d",a2[j]);
    	MA[i]=a2[j];
    	i++;
	}
	
	printf("merged array");
	for(j=0;j<20;j++)
	{
		printf("%d",MA[j]);
	}
	return 0;
	
}
