#include <stdio.h>

int main(void)
{
    int array[10] = {9,2,3,5,1,7,8,4,6,0};

    int max = array[0];

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    printf("Maximum: %d\n", max);

    return 0;
}
