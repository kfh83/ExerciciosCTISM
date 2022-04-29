#include <stdio.h>
#include <conio.h>

void resultado(float media)
{
    printf("A media ponderada e %f\n", media);
}

void calcularMedia(float a, float b, float c)
{
    float media = (a * 2 + b * 3 + c * 5)/10;

    resultado(media);
}

int main()
{
    calcularMedia(2, 6, 7);
    return 0;
}