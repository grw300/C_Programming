#include <stdio.h>
#include <math.h>

int main()
{
    int radius = 10;

    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    printf("Volume (in meters): %.2f\n", volume);
}
