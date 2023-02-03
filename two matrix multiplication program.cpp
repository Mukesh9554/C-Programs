#include <stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k;
printf("Enter no of row :\n columns:");
scanf("%d%d",&r1,&c1);
   printf("\nEnter elements: \n");
int a[r1][c1];

   for ( i=0;i<r1;i++) 
   {
      for ( j=0;j<c1;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }
   for( i=0;i<r1;i++)
   {
   for( j=0;j<c1;j++)
   {
   	printf("%d ",a[i][j]);
   }
   printf("\n");
   }
printf("Enter no of row :\n columns:");
scanf("%d%d",&r2,&c2);
   printf("Enter element:");
   int b[r2][c2];
   for ( i = 0;i<r2;i++) 
   {
      for (j=0;j<c2;j++)
      {
         scanf("%d",&b[i][j]);
      }
   }
   for ( i = 0;i<r2;i++) 
   {
      for ( j=0;j<c2;j++)
      {
         printf("%d ",b[i][j]);
      }
      printf("\n");
   }
   printf("\n");
   int mul[c1][r2];
   for( i=0;i<c1;i++)
   {
   for( j=0;j<r2;j++)
   { mul[i][j]=0;
   for( k=0;k<r2;k++)
   { mul[i][j]=mul[i][j]+a[i][k]*b[k][i];
   }
   }
   }
   for( i=0;i<r1;i++)
   {
for( j=0;j<c2;j++)   
 {
    printf("%d ",mul[i][j]);
}
printf("\n");
}
return 0;
}
   
