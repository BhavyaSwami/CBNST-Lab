#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    printf( "Name = Bhavya Swami, Sec. = AI & DS, Class_Roll_num = 13, University_Roll_num = 2016708\n\n");
printf("Newton Forward Interpolation\n");
float a[100][100],x,u1,u,y;
int i,j,n,fact;
printf("Enter no of terms: ");
scanf("%d",&n);
printf("Enter the values of x:\n");
for(i=0;i<n;i++)
scanf("%f",&a[i][0]);
printf("Enter values of y:\n");
for(i=0;i<n;i++)
scanf("%f",&a[i][1]);
printf("Enter value of x for which you want y: ");
scanf("%f",&x);

//find the difference table
printf("The difference table is as follows:\n");
for(j=2;j<n+1;j++)
{
for(i=0;i<n-j+1;i++)
a[i][j]=a[i+1][j-1]-a[i][j-1];
}

//print the difference table
printf("The difference table is as follows:\n");
for(i=0;i<n;i++)
{
for(j=0;j<=n-i;j++)
printf("%f",a[i][j]);
printf("\n");
}

//find u
u=(x-a[0][0])/(a[1][0]-a[0][0]);
//initial y,u1,k
y=a[0][1];
u1=u;
fact=1;
for(i=2;i<=n;i++)
{
y=y+(u1*a[0][i])/fact;

//update k,u1
fact=fact*i;
u1=u1*(u-(i-1));

}
printf("\n\nValue at x=%g is=%f",x,y);
}