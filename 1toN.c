// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int N;
    printf("Kindly input the number N you would like to count to: ");
    scanf("%d",&N);
    for ( int i = 1 ; i <= N; i++)
    {
        printf("%i \n", i);
    }
    
    return 0;
}