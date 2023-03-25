// Quadratic equations
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  printf( "Name = Bhavya Swami, Sec. = AI & DS, Class_Roll_num = 13, University_Roll_num = 2016708\n\n");
    printf("Enter the Co- efficients of First Equation \n");
    int coef[3];
    int flag = 0;
    int pow[] = { 2, 1, 0};
    for(int i = 0 ; i < 3; i++)
    {
        scanf("%d", &coef[i]);
    }
    float d = coef[1]*coef[1] - 4*coef[0]*coef[2];
    printf("\nGiven Equation is : ");
    printf("%d x^2 + (%d) x^1 + (%d)\n", coef[0], coef[1],coef[2]);
                                                                 
    if(d == 0)
        {
        float root = -(coef[1])/2.0*coef[0];
        printf("%f", root);
    }
    else if(d > 0)
    {
        float root1 = (-coef[1] + sqrt(d))/(2* coef[0]);
        float root2 = (-coef[1] - sqrt(d))/(2* coef[0]);
        printf("Roots are : %.2f  %.2f ", root1, root2);
    }
    else
    {
        flag = 1;
        printf("Imaginary Roots Exist\n");
        d = -1*d;
        printf("%.2f + (%.2f)i\n", coef[1]/2.0*coef[0], sqrt(d)/2.0*coef[0]);
        printf("%.2f - (%.2f)i\n", coef[1]/2.0*coef[0], sqrt(d)/2.0*coef[0]);
    }
} 