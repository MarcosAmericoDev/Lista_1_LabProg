#include <stdio.h>

int main(){
    float Altura;
    char Sexo;

    printf("Digite a sua altura: ");
    scanf("%f", &Altura);

    printf("Seu sexo biológico é masculino ou feminino? [M/F] ");
    fflush(stdin); // para retirar o buffer do teclado
    scanf("%c", &Sexo);
    
    
    if(Sexo == 'M') {
        printf("O seu peso ideal é: %.1fkg", 72.7 * Altura - 58);
    } else if (Sexo == 'F') {
        printf("O seu peso ideal é: %.1fkg",  62.1 * Altura - 44.7);
    } else {
        printf("Sexo diferente do que foi pedido.");
    }

    return 0;
}
