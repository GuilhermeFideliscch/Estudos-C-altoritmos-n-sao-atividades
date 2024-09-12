
#include <stdio.h>

int main()
{
    char nota;
    float sal;
    printf("digite se a nota de desempenho foi A, B ou C(por favor em caixa alta).",nota);
    scanf("%c",& nota);
    printf("digite o salario");
    scanf("%f",& sal);
    if(A){
        sal = (sal*0.15)+sal;
        printf("Nota:%c,o salario tera um bonus de 15%, valor do salario:%.2f"nota,sal);
    }
       else
       if("%c"B){
        sal = (sal*0.10)+sal;
        printf("Nota:%c,o salario tera um bonus de 10%, valor do salario:%.2f"nota,sal);
       }
          else
          if("%c"C){
            sal = (sal*0.05)+sal;
            printf("Nota:%c,o salario tera um bonus de 5%, valor do salario:%.2f"nota,sal);
          }
             else
             if("%c"D){
                printf("Nota:%c,o salario nao tera um bonus valor do salario:%.2f"nota,sal);
             }
    return 0;
}