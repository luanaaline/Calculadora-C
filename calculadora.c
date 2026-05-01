#include <stdio.h>

int main(){
    
    int a, b, op;
    
    scanf("%i %i %i", &a, &b, &op);
    
    if (op <= 0 || op > 10){ 
        printf("opção inválida!\n");
    }
    
    else if (op == 1){
        printf("%i\n", a + b);
    }
    
    else if (op == 2){
        printf("%i\n", a - b);
    }
    
    else if (op == 3){
        printf("%i\n", b - a);
    }
    
    else if (op == 4){
        printf("%i\n", a * b);
    }
    
    else if (op == 5){
        if (b == 0){
            printf("divisão por 0!\n");
        } else {
            printf("%.2f\n", (float)a / b);
        }
    }
    
    else if (op == 6){
        if (a == 0){
            printf("divisão por 0!\n");
        } else {
            printf("%.2f\n", (float)b / a);
        }
    }
    
    else if (op == 7){
        if (b == 0){
            printf("divisão por 0!\n");
        } else {
            printf("%i\n", a / b);
        }
    }
    
    else if (op == 8){
        if (a == 0){
            printf("divisão por 0!\n");
        } else {
            printf("%i\n", b / a);
        }
    }
    
    else if (op == 9){
        if (b == 0){
            printf("divisão por 0!\n");
        } else {
            printf("%i\n", a % b);
        }
    }
    
    else if (op == 10){
        if (a == 0){
            printf("divisão por 0!\n");
        } else {
            printf("%i\n", b % a);
        }
    }

    return 0;
}

//1.Soma dos dois números;
//2.Subtração do primeiro pelo segundo;
//3.Subtração do segundo pelo primeiro;
//4.Multiplicação dos dois números;
//5.Divisão do primeiro pelo segundo;
//6.Divisão do segundo pelo primeiro;
//7.Quociente inteiro da divisão do primeiro pelo segundo;
//8.Quociente inteiro da divisão do segundo pelo primeiro;
//9.Resto da divisão do primeiro pelo segundo;
//10.Resto da divisão do segundo pelo primeiro.