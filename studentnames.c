// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int noOfStudents;
    printf("Kindly input the number of names you would like to print: ");
    scanf("%d",&noOfStudents);
    printf("no of students equals %d \n", noOfStudents);
    int i = 1;
    char student_names[noOfStudents][30] ;
    for ( i ; i <= noOfStudents; i++)
    {
        printf("Kindly input the name of student %i", i);
        scanf("%s",&student_names[i-1]);
    }
    printf("The names of the students of are: \n");

    for(int j = 0;j<noOfStudents;j++){
        printf("%s \n",student_names[j]);
    }

    return 0;
}