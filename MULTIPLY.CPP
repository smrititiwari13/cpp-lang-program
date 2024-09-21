    #include<stdio.h>
    #include<conio.h>
    void main()
    {
    int i,j,k,sum=0,a[3][3],b[3][3],c[3][3];
    clrscr();
    printf("enter the first matrix\n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
     scanf("%d",&a[i][j]);
     }
    }
    printf("enter the second matrix\n:");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
      scanf("%d",&b[i][j]);
     }
    }
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
     for(k=0;k<3;k++)
     {
     sum=sum+a[i][j]*b[i][j];
     }
     c[i][j]=sum;
     }
    }
    for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
      {
      printf(" %d ", c[i][j]);
      }
    printf("\n");
    }
}



