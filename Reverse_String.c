#include <stdio.h>
#include <string.h>

void reverse_string(char* str)
{
    //declaring variables
    int len;
    char *start_ptr, *end_ptr, ch;

    //reading in the length of the string and setting it to the variable len
    len = strlen(str);
    start_ptr = str;
    end_ptr = str + len - 1;

    for(int i = 0; i < (len - 1)/2; i++){
        //swapping letters in the string using a for loop
        ch = *end_ptr;
        *end_ptr = *start_ptr;
        *start_ptr = ch;

        start_ptr++;
        end_ptr--;
    }
}

int main()
{
    char str[100];
    printf("Enter string for reverse: ");
    fgets(str, 100, stdin); //reading input from user
    reverse_string(str); //calling function
    printf("Reverse of the string is: %s\n", str);

    return 0;
}