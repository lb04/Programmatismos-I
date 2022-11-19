#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // generate 100 random numbers
    int numbers[100];
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        numbers[i] = rand() % 100;
    }

    int size = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            // printf("%d > %d?\n", numbers[i], numbers[j]);
            if (numbers[i] > numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            };
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", numbers[i]);
    }
}