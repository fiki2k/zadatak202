/*   Program treba ispisat na kojim se mjestima pojavljuje zadano slovo u stringu.  */

#include <stdio.h>

#define MAX_VELICINA 100 

int main()
{
    char string[MAX_VELICINA];
    char pronaci;
    int i;

   
    printf("Unesi neki string : ");
    gets(string);
    printf("\nUnesi koji znak da se pronadje : ");
    pronaci = getchar();

   
    for(i=0; string[i]!='\0'; i++)
    {
        
        if(string[i] == pronaci)
        {
            printf("\n['%c'] se nalazi na indexima [ %d ]\n", pronaci, i);
        }
    }

    return 0;
}
