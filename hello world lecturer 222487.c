//include necessary files
#include <stdio.h>

int main() {
    //initialize the variable to accept user input
    char name[30];
    //accept user input
    printf("Kindly enter your name: ");
    fgets(name,30,stdin);
    printf("Hello world, %s! \n", name);
    return 0;
}