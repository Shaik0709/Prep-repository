#include <stdio.h>
int main()
{
    FILE *pF = fopen("C:\\Users\\shaik\\OneDrive\\Desktop\\Hello.txt", "r");
    char buffer[255];
    // fgets(buffer, 255, pF); // This will Read single line of the text at top
    if (pF == NULL)
    {
        printf("\n Unable to Open the File ...");
    }
    else
    {
        while (fgets(buffer, 255, pF) != NULL)
        {
            printf("%s\n", buffer);
        }
    }

    fclose(pF); // To close the open File ...
    return 0;
}