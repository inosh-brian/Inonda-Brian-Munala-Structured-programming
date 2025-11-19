#include <stdio.h>
int main(){
    char name [100];//variable name can hold up to 99 characters
    int length = 0;//create a variable called length and sets it at 0

    printf("Enter a string");//input from user
    scanf("%s", name);//user is expected to input a text

    printf("you entered: %s\n", name);

    //counting the characters in the string
    while (name[length]!= '\0'){
        length++;
    }
    printf("length of the string: %d\n", length);//prints the results

    return 0;
}
