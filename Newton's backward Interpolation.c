#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf( "Name = Bhavya Swami, Sec. = AI & DS, Class_Roll_num = 13, University_Roll_num = 2016708\n\n");
printf("Newton Backward Interpolation\n\n");
float x,u1,y,u;
int fact,i,j,n;
printf("Enter the no of terms: ");
scanf("%d",&n);
float a[n][n+1];
printf("Enter the values of x:\n");
for(i=0;i<n;i++)
{
scanf("%f",&a[i][0]);
}
printf("Enter the values of y:\n");
for(i=0;i<n;i++)
{
scanf("%f",&a[i][1]);
}
printf("Enter the values of x for which you want y: ");
scanf("%f",&x);
//find the difference table
for(j=2;j<n+1;j++)
{
for(i=0;i<n-j+1;i++)
a[i][j]=a[i+1][j-1]-a[i][j-1];
}
//Print the difference table
printf("The Difference Table is as follows:\n");
for(i=0;i<n;i++)
{
for(j=0;j<=n-i;j++)
printf("%f",a[i][j]);
printf("\n");
}

//find u
u=(x-a[n-1][0])/(a[1][0]-a[0][0]);
y=a[n-1][1];
//Initial k,u1,j
u1=u;
fact=1;
j=2;
for(i=n-2;i>=0;i--)
{
y=y+(u1*a[i][j])/fact;
//Update k,u1,j
fact=fact*j;
u1=u1*(u+(j-1));
j++;
}
printf("\n\nValues at X=%g is =%f",x,y);
}