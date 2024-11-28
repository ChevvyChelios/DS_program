
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int prec(char c) {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

char associativity(char c) {
    if (c == '^')
        return 'R';
    return 'L';
}

void infixToPrefix(char s[]){
    char result[1000];
    int resultIndex = 0;
    int len = strlen(s);
    char stack[1000];
    int stackIndex = -1
}

int main(){
    char s[] = "a+b*c";
    infixToPrefix(s);
    return 0;
}