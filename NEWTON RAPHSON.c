//Newton Raphson
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	 printf( "Name = Bhavya Swami, Sec. = AI & DS, Class_Roll_num = 13, University_Roll_num = 2016708\n\n");
    printf("Enter the number of terms in equation : ");
    int n ;
    scanf("%d", &n);
    int fx[n][2], fxx[n][2];
    double error = 0;
    printf("\nEnter the equation : ");
    for(int i = 0 ; i < n; i++)
    {
        scanf("%d %d", &fx[i][0], &fx[i][1]);
    }
    printf("\nEnter the differentiated equation : ");
    for(int i = 0 ; i < n; i++)
    {
        scanf("%d %d", &fxx[i][0], &fxx[i][1]);
    }
    printf("\nEnter the initial value : ");
    double x0 = 0, x1 = 0;
    scanf("%lf", &x0);
    double fx_val = 0, fxx_val = 0;
    printf("\nThe Polynomial Equation is : ");
    for(int i = 0 ; i < n; i++)
    {
        printf(" + (%d)x^%d", fx[i][0], fx[i][1]);
    }
    printf("\nThe initial approximation of the equation is : %lf \n", x0);
    for(int i = 1 ; i < 20 ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            fx_val += 1.0*fx[j][0]*1.0*pow(x0, fx[j][1]);
            fxx_val += 1.0*fxx[j][0]*pow(x0, fxx[j][1]);
        }
        x1 = x0 - ((double)fx_val/(double)fxx_val);
        x0 = x1;
        if(fabs(error - x1) < 0.00001)
            break;
        error = x1;
        printf("\nIn iteration %d, x0 and x1 are : %.4lf %.4lf",i, x0, x1);
        fx_val = 0;
        fxx_val = 0;
    }
    printf("\nThe final root after approximation using Newton Raphson method is : %.4lf \n", x1);
}