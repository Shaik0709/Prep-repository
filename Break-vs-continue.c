#include <stdio.h>
int main()
// Continue - skips rest of code and forces the next iteration of the loop
// break - exists a loop / switch
{
    for (int i = 0; i <= 20; i++)
    {
        //     if (i == 13)
        //     {
        //         continue;
        // Continue - skips rest of code and forces the next iteration of the loop
        //     }

        if (i == 13)
        {
            break;
            // break - exists a loop / switch
        }
        printf("%d\t ", i);
    }

    return 0;
}