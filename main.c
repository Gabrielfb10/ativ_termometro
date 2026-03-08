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
            printf(".\n");
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
    printf("%d\n", total);
}

void c_to_f(){
    float initial_temp, final_temp;
    
    printf("DIGITE A TEMPERATURA EM GRAUS CELSIUS QUE SERÁ CONVERTIDA (APENAS NÚMEROS):\n");
    scanf("%f", &initial_temp);
    
    final_temp = (initial_temp * (9.0/5.0)) + 32;
    printf("%.2f °C = %.2f °F\n", initial_temp, final_temp);
    
    
}

void f_to_c(){
    float initial_temp, final_temp;
    
    printf("DIGITE A TEMPERATURA EM GRAUS FAHRENHEITS QUE SERÁ CONVERTIDA (APENAS NÚMEROS):\n");
    scanf("%f", &initial_temp);
    
    final_temp = (initial_temp - 32) * (5.0/9.0);
    printf("%.2f °F = %.2f °C\n", initial_temp, final_temp);
}

void temperature_conversion(){
    printf("ESCOLHA O TIPO DE CONVERSÃO QUE SERÁ FEITA:\n");
    printf("1) CELSIUS PARA FAHRENHEIT;\n");
    printf("2) FAHRENHEIT PARA CELSIUS.\n");
    
    int choice;
    int test_choice =  0;
    
    while(test_choice == 0){
        scanf("%d", &choice);
        if(choice == 1 || choice == 2){
            test_choice = 1;
            switch (choice){
                case 1: c_to_f();
                        break;
                case 2: f_to_c();
                        break;
            }
        }else{
            printf("ESCOLHA INVÁLIDA, TENTE NOVAMENTE:\n") ; 
        }
    }
}

void count_string(){
    char text[100];
    int count = 0;
    
    printf("DIGITE O TEXTO QUE DESEJA CONTAR OS CARACTERES:\n");
    scanf(" %99[^\n]", text);
    while (text[count] != '\0'){
        count = count + 1;
    }
    
    printf("Esse texto tem %d caracteres (contando com os espaços).\n", count);
    
}

void cousin_verification(){
    int i;
    int is_cousin = 1;
    int num = 0;
    printf("DIGITE UM INTEIRO POSITIVO PARA DESCOBRIR SE ELE É PRIMO:\n");
    while (num<=0){
        scanf("%d", &num);
        if(num>0){
            break;
        }else{
            printf("ENTRADA INVÁLIDA! DIGITE UM INTEIRO MAIOR QUE ZERO:\n");
        }
    }  

    
    for(i=2;i * i <= num;i++){
        if(num % i == 0){
            is_cousin = 0;
            break;
        }
    }
    if (num == 1){
        printf("O número %d não é primo.\n", num);
    }else if (is_cousin == 1){
        printf("O número %d é primo.\n", num);
    }else{
        printf("O número %d não é primo.\n", num);
    }
    
}

int main(){
    int test = 1;
    
    
    while (test){
        int choice;
        int test_choice = 0;
        menu();
        while(test_choice == 0){
           scanf("%d", &choice);
           if(choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 ){
                test_choice = 1;
                switch (choice){
                    case 1: sequence();
                            break;
                    case 2: fatorial();
                            break;
                    case 3: temperature_conversion();
                            break;
                    case 4: count_string();
                            break;
                    case 5: cousin_verification();
                            break;
                }
           }else{
                printf("ESCOLHA INVÁLIDA, TENTE NOVAMENTE:\n"); 
           }  
        }
        
        while(test){
            printf("DESEJA REALIZAR OUTRA OPERAÇÃO?\n");
            printf("1) SIM;\n");
            printf("2) NÃO.\n"); 
            scanf("%d", &test);
            if(test==1){
                break;
            }else if(test==2){
                test = 0;
                break;
            }
            printf("DIGITE UMA OPÇÃO VÁLIDA:\n");
        }
    }
}
