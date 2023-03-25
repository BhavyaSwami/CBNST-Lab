//Bisection method
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf( "Name = Bhavya Swami, Sec. = AI & DS, Class_Roll_num = 13, University_Roll_num = 2016708\n\n");
    printf("Enter the number of terms in the equation\n");
    int n = 0;
    scanf("%d", &n);
    double coef[n], p[n];

    printf("Enter the equation : ");

    for(int i = 0 ; i < n; i++){
        scanf("%lf", &coef[i]);
        scanf("%lf", &p[i]);
    }
    double error = 0;
    double c = 0, ans_a = 0, ans_b = 0, ans_c = 0;
    double a, b;
    printf("Enter initial range : " );
    scanf("%lf %lf", &a, &b);
    printf("\nThe Polynomial Equation is : ");
    for(int i = 0 ; i < n; i++)
    {
        printf(" + (%d)^%d", coef[i], p[i]);
    }
    printf("\nThe initial values of a, b ans c are : %.4lf %.4lf %.4lf", a, b,c);

    for(int i = 0 ; i < 20; i++)
    {
        c = (a+b)/2.0;
        for(int j = 0 ; j < n; j++)
        {
            ans_c += coef[j]*pow(c, p[j]);
            ans_a += coef[j]*pow(a, p[j]);
            ans_b += coef[j]*pow(b, p[j]);
        }
        printf("\nIn iteration %d, a, b and c are : %.4lf %.4lf %.4lf",i + 1, a,b,c);
        if(c == 0)
        {
            printf("c is 0");
        }
        if(ans_a * ans_c < 0)
            b = c;
        if(ans_b * ans_c < 0)
            a = c;

        if(fabs(error - c) < 0.00001)
            break;
        error = c;

        ans_a = 0, ans_b = 0, ans_c = 0;

    }
    printf("\nThe final values of a, b and c are : %.4lf %.4lf %.4lf\n", a,b,c);


}