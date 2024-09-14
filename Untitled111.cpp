#include <stdio.h>

int main()
{
    char nota;
    float sal;
    printf("digite se a nota de desempenho foi A, B ou C(por favor em caixa alta).\n",nota);
    scanf("%c",& nota);
    printf("digite o salario\n");
    scanf("%f",& sal);
    if(nota == 'A'){
        sal = (sal*0.15)+sal;
        printf("Nota:%c,o salario tera um bonus de 15%, valor do salario:%.2f\n",nota,sal);
    }
       else
       if(nota == 'B'){
        sal = (sal*0.10)+sal;
        printf("Nota:%c,o salario tera um bonus de 10%, valor do salario:%.2f\n",nota,sal);
       }
          else
          if(nota == 'C'){
            sal = (sal*0.05)+sal;
            printf("Nota:%c,o salario tera um bonus de 5%, valor do salario:%.2f\n",nota,sal);
          }
             else
             if(nota =='D'){
                printf("Nota:%c,o salario nao tera um bonus valor do salario:%.2f\n",nota,sal);
             }
    return 0;
}
