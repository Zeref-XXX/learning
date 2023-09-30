// program to accept a character as input and print its reverse .

#include<bits/stdc++.h>
int main (){
    char alphabet;
    printf("Enter the alphabet");
    putchar('\n');  //move cursor to next line
    alphabet = getchar();
    if(islower(alphabet))
    putchar(toupper(alphabet));  //if lower case print upper case
    else
    putchar(tolower(alphabet));

    return 0;
}