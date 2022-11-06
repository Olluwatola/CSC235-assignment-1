// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    // Write C code here
    char sentence[100];
    printf("\n Enter string to be reversed: ");
    scanf("%s", &sentence);
    int count = 0;
    int l = 0;
    while(sentence[l] != '\0'){
        l++;
    }
    
    count = l -1;
    char reversed_sentence[100];
    for(int i = 0; i<l; i++){
        reversed_sentence[i] = sentence[count];
        --count;
    }
    printf("The new string: %s", reversed_sentence);
    return 0;
}