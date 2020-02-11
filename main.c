#include <stdio.h>

print_G(){
    printf("Seu risco é Grande");
}

print_P(){
    printf("seu risco é Pequeno");
}

int main() {
    int r;
    float idade;


        printf("Sua pressao sistolica nas 24 horas iniciais esteve acima de 91?\n1-Sim\n2-Não\n->");
        scanf(" %d",&r);
    if(r==2)
    {
        print_G();
        return 0;
    } else {
        printf("Qual sua idade?\n->");
        scanf("%f", &idade);

    }if(idade>62.5){
        printf("Há sinus taquicardia?\n1-Sim\n2-Não\n->");
        r=0;
        scanf("%d",&r);
        if(r==1){
            print_G();
            return 0;
        } else{
            print_P();
            return 0;
        }

    } else{
        print_P();
        return 0;
    }
}
