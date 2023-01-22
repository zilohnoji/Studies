#include <stdio.h>

int main(void)
{
    int weight;
    int passagem = 0;

    do
    {
        printf("Weight: ");
        scanf("%i", &weight);
    } while (weight <= 0);

    for (int counter = weight; counter > 0; counter--)
    {
        printf("#\n");
        passagem += 1;
        if (counter != 1)
        {
            for (int i = passagem; i > 0; i--)
            {
                printf("#");
            }
        }
    }
}
