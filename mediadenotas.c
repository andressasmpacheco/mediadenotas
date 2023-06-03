#include <stdio.h>
int main()
{
    float n1,n2,n3, media;
    printf("\n\nDigite a primeira nota: \n\n");
    scanf("%f", &n1);
    printf("\n\nDigite a segunda nota: \n\n");
    scanf("%f", &n2);
    printf("\n\nDigite a terceira nota: \n\n");
    scanf("%f", &n3);
    media = (n1+n2+n3)/3;
    if (media>=7)
    {
       printf("Aprovado\n\n");
    }
    else
    {
        printf("reprovado\n\n");
    }
    
}
