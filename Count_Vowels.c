#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_vowels(char *str)
{
    if(*str == '\0'){ //base case: spaces count as 0
        return 0;
    }
    char c = tolower(*str); //allows to work with just lower case letters
    
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){ //recursive function for counting vowels. Adding 1
        return 1 + count_vowels(str + 1);
    }
    else{
        return count_vowels(str + 1); //Else we go to the next letter and check to see if its a vowel
    }
}


int main()
{
    char str[] = "jamaine harvin";
    int vowels = count_vowels(str); //calling function and saving it to the variable vowels
    printf("Total vowels: %d\n", vowels);

    return 0;
}