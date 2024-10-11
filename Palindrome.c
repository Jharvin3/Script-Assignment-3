#include <stdio.h>
#include <string.h>

void is_palindrome(char str[], int i)
{
    int len = strlen(str) - (i + 1);//taking in the length of the string
    if(str[i] == str[len]){ //checking to see if first and last characters equal
        if(i + 1 == len || i == len){ 
            printf("String is Palindrome.\n");
            return;
        }
        is_palindrome(str, i + 1); //Recursion function
    }
    else{
        printf("String is not a Palindrome.\n");
    }
}

int main()
{
    char str[100] = "elobe";
    is_palindrome(str, 0); //calling function

    return 0;
}