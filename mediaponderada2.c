#include <stdio.h>
#include <conio.h>

void eBall(float media)
{
    if(media >= 6)
    {
        printf("Joga muito! tu passou de ano!!!\n");
    }
    if(media >= 2 && media < 6)
    {
        printf("Tu e horrivel!!!\n");
    }
}

void resultado(float media)
{
    printf("A media ponderada e %f\n", media);

    eBall(media);
}

void calcularMedia(float a, float b)
{
    float media = (a * 2 + b * 3)/5;

    resultado(media);
}

int main()
{
    calcularMedia(2, 8.8); // tu passou de ano
    return 0;
}