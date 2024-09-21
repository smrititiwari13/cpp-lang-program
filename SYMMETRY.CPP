	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>
	int main()
	{
	int i,j, a[3][3],b[3][3];
	clrscr();
	printf("enter\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	scanf("%d",&a[i][j]);
	 }
	}
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("%d ",a[i][j]);

	}
	printf("\n");
	}
	for(i=0;i<3;i++)

	    for(j=0;j<3;j++)
	b[i][j]=a[i][j];

	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("%d", b[j][i]);
	}
	printf("\n");
	}
		for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{

		if(a[i][j]!=b[j][i])
		{
		printf("not symmetric");
		exit(0);
		}
	}
	}

       printf("symm");
	return 0;
	 }