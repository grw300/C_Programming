#include <stdio.h>
#include <math.h>

int main()
{
    int radius;

    printf("Enter radius of sphere in meters: ");
    scanf("%d", &radius);

    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    printf("Volume (in meters): %.2f\n", volume);
}
