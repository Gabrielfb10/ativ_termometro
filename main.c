#include <stdio.h>

void menu(){
  printf("ESCOLHA UMA OPREÇÃO:\n");
  printf("1) IMPRIMIR NÚMEROS DE 1 ATÉ N;\n");
  printf("2) CALCULAR FATORIAL DE N;\n");
  printf("3) CONVERSÃO DE TEMPERATURA;\n");
  printf("4) CONTAR CARACTERES DE UMA STRING;\n");
  printf("5) VERIFICAR SE N É PRIMO.\n");
}

void sequence(){
    int n, i;
    printf("DIGITE ATÉ QUE NÚMERO INTEIRO A SEUQUÊNCIA DEVE IR:\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("%d", i);
        if (i<n){
            printf(", ");
        } else{
            
            printf(".");
        }
        
    }
}

void fatorial(){
    int n, i;
    int total = 1;
    printf("DIGITE QUAL NÚMERO INTEIRO DESEJA CALCULAR O FATORIAL:\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("%d", i);
        if (i<n){
            printf(" * ");
        } else{
            printf(" = ");
        }
        total = total * i;
    }
    printf("%d", total);
}

void temperature_convertion(){
    printf("ESChfgh\n");
}

void count_string(){
    printf("VAMENTE:\n");
}

void cousin_verification(){
    printf(" INVÁLIDA\n");
}

int main(){
    int test = 1;
    menu();
    
    while (test){
        int choice = 0;
        int true_choice = 0;
        while(true_choice == 0){
           scanf("%d", &choice);
           if(choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 ){
                true_choice = 1;
                switch (choice){
                    case 1: sequence();
                            break;
                    case 2: fatorial();
                            break;
                    case 3: temperature_convertion();
                            break;
                    case 4: count_string();
                            break;
                    case 5: cousin_verification();
                            break;
                }
           }else{
                printf("ESCOLHA INVÁLIDA, TENTE NOVAMENTE:\n") ; 
           }
           
        }
        
        
    }
    
  
}
