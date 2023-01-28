#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void trimTrailing(char * str);


int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("\nString before trimming trailing white space: \n'%s'", str);

    trimTrailing(str);

    printf("\n\nString after trimming trailing white spaces: \n'%s'", str);

    return 0;
}

/**
 * Remove trailing white space characters from string
 */
void trimTrailing(char * str)
{
    int index, i;

    /* Set default index */
    index = -1;

    /* Find last index of non-white space character */
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            index= i;
        }

        i++;
    }

    /* Mark next character to last non-white space character as NULL */
    str[index + 1] = '\0';
}
