#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for an integer height >= 1 and <= 23
    int height;
	do
    {
        printf("height: ");
        height = get_int();
    } 
    while (height < 0 || height > 23);
	printf("Thank you for the valid integer!\n Here is Mario's half-pyramid of height %i:\n", height);
    
    // Generates and draws the half-pyramid
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}