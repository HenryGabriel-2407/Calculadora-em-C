#include <stdio.h> 
void operacao(int b){
    long int x = 0;
    long int y = 0;
    if (b == 1){
        printf("Digite o primeiro valor: ");
        scanf("%ld", &x);
        printf("Digite o segundo valor: ");
        scanf("%ld", &y);
        printf("%ld + %ld = %ld", x, y, x+y);
    }
    else if (b == 2){
        printf("Digite o primeiro valor: ");
        scanf("%ld", &x);
        printf("Digite o segundo valor: ");
        scanf("%ld", &y);
        printf("%ld - %ld = %ld", x, y, x-y);
    }
    else if (b == 3){
        printf("Digite o primeiro valor: ");
        scanf("%ld", &x);
        printf("Digite o segundo valor: ");
        scanf("%ld", &y);
        printf("%ld x %ld = %ld", x, y, x*y);
    }
    else{
        printf("Digite o primeiro valor: ");
        scanf("%ld", &x);
        printf("Digite o segundo valor: ");
        scanf("%ld", &y);
        if (x%y == 0)
        {
            printf("%ld / %ld = %ld", x, y, x/y);
        }
        else{
            float z = x;
            float w = y;
            printf("%ld / %ld = %f", x, y, z/w);
        }
    }
}
int main(){
    printf("-----------------------------------------------\n");
    printf("OLA!!! EU SOU UMA CALCULADORA, VAMOS COMECAR?\n");
    printf("------------------------------------------------");
    int a = 0;
    while (a < 1){
        int b;
        printf("\nPor favor, digite o numero da operacao:\n[0]SAIR\n[1]SOMA\n[2]SUBTRACAO\n[3]MULTIPLICACAO\n[4]DIVISAO\nResposta: ");
        scanf("%i", &b);
        if (b == 0){
            break;
        }
        else if (b == 1 || b == 1 || b == 2 || b == 3 || b ==4){
            operacao(b);
        }
        else{
            continue;
        }
    }   
}