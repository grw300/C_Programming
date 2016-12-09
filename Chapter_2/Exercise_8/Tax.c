#include <stdio.h>

int main()
{
    float dollars;
    printf("Enter a dollar amount: ");
    scanf("%f", &dollars);

    printf("With tax added: %.2f\n", dollars * 1.05);
}
