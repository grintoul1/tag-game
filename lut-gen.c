#include <stdio.h>
#include <stdint.h>

int main()
{
    for (int i = 0; i <= 300; i++)
    {
        printf("    [%i] = {", i);
        for (int j = 85; j <= 100; j++)
        {
            int result = i * j;
            result /= 100;
            printf("%i", result);
            if (j != 100)
                printf(", ");
            else
                printf("},\n");
        }
    }
    return 0;
}
