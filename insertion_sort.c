// Insertion sort for sorting a small group of number
#include <stdio.h>

int main(void)
{
    int key;
    int j;
    int array[6] = {5, 2, 4, 6, 1, 3};

    for (int i = 1; i < sizeof(array) / sizeof(array[0]); i++)
    {
        key = array[i];
        j = i - 1;

        while (j >= 0 && key < array[j])
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
// Barkev Şarklı
