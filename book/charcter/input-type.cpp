#include<bits/stdc++.h>

int main(){
    char character;
    printf("Enter a characher :");
    character = getchar();
    putchar(character);
    putchar('\n');

    if(isalpha(character)>0) //letter57
    printf("letter");
    else
    if(isdigit(character)>0)
    printf("digit");
    else
    // if(isalpha(character>0)) not working
    // printf("alpha numeric");

    return 0;
}
