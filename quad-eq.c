// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <complex.h>

int main() {
    double f;
    double x1;
    double x2;
    double a;
    double b;
    double c;
    
    printf("Given a quadratic equation as ax^2+bx+c=0");
    printf("Kindly input the coeff of x^2 i.e a");
    scanf("%lf",&a);
    printf("Kindly input the coeff of x i.e b");
    scanf("%lf",&b);
    printf("Kindly input c");
    scanf("%lf",&c);
    f = pow((pow(b,2)-(4*a*c)),0.5);
    x1=(-b+f)/(2*a);
    x2=(-b-f)/(2*a);
    if(f==0 || f> 0){
        printf("The equation has roots: %lf , %lf ", x1,x2);
    }else{
        printf("The either has complex roots or has no solution");
    }
    return 0;
}