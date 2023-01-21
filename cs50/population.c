#include <stdio.h>

int main(void)
{
    int live;
    int end, counter = 0;

    do
    {
        printf("\nStart: ");
        scanf("%i", &live);

        printf("End: ");
        scanf("%i", &end);
    } while ((live < 9) || end < live);

    while (live < end)
    {
        live += (live / 3) - (live / 4);
        counter++;
    }

    printf("Years: %i", counter);
}
