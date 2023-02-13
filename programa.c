
#include <stdio.h>

float peso_ideal,altura;
char sexo;

int main()
{
    printf("Digite seu gênero, sendo feminino (f) e masculino (m).\n");
    scanf(" %c",&sexo);
    printf("Qual a sua altura?\n");
    scanf("%f",&altura);
    
    if (sexo=='m'){
        peso_ideal=(72.7*altura)-58;
        printf("Seu peso ideal é de %.2fkg.\n",peso_ideal);
    }
    else {
        peso_ideal=(62.1*altura)-44.7;
        printf("Seu peso ideal é de %.2fkg.\n",peso_ideal);
    }

    return 0;
}
