#include <stdio.h>
#include <stdlib.h>

/*
    Given a character array s (as a pointer), return the number of 
    characters in the string.
    
    Do not just use the `strlen` function from the standard libary.
*/
int string_length(char *s)
{
    int counter = 0;

    int thing = *s;

    // for (int i = 0; thing < l; i++) {
    //     if(s[thing] == '\0') {
    //         break;
    //     }
    //     counter ++;
    // }
    // return counter;

    printf(s);
}

/*
    Write a function that reverses the order of string s and outputs 
    the reversed string to the input array rv. The rv array will have 
    enough space for the reversed string. Don't forget to terminate 
    the reversed string with a null character. Return the rv array.
*/


char *reverse_string(char *rv, char *s)
{
    int counter = 0;

    int length = string_length(s);

    char reverso[length];

    for (int i = (string_length(s)-1); i >=0; i --) {
        rv[counter] = s[i];
        reverso[counter] = s[i];
        // printf("It's currently %s \n",rv);
        counter++;
        // break;
    }

    // reverso[counter];

    return rv;

}

#ifndef TESTING
int main(void)
{
    char quote1[] = "Don't forget to be awesome";
    char quote2[] = "a man a plan a canal panama";

    char rv[512];

    printf("The string 'Don't forget to be awesome' has %d characters.\n", string_length(quote1));
    printf("The string 'a man a plan a canal panama' reversed is: '%s'\n", reverse_string(rv, quote2));

    return 0;
}
#endif
    
