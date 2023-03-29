#include <stdio.h>
int main()
{
    /*
    FILE *pF = fopen("Hello.txt", "a");
    // w - write if mode is W , overwrite the existing line
    // r - read
    // a - append
    fprintf(pF,"\nHow are you ? ");
    fclose(pF);
    */
    if (remove("Hello.txt") == 0)
    {
        printf("File was Deleted Sucessfully ...");
    }
    else
    {
        printf("File was Not Deleted ...");
    }

    return 0;
}