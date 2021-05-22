#include <stdio.h>
#include <math.h>
#include <stdlib.h>






//Exemplo1
/*
int maximo(int a , int b){
    int c;
    if(a>b)
        c=a;
    else
        c=b;
    return c;

}


int main(){
int number_1,number_2;

printf("Introduz um numero>>");
scanf("%d",&number_1);
printf("Introduz um numero>>");
scanf("%d",&number_2);
printf("Maximo>>%d",maximo(number_1,number_2));

return 0;}
*/



//Exemplo2

/*void menu();
int main(){
menu();

return 0;}

void menu(){

printf("1-Abrir ficheiro\n");
printf("2-Terminar\n");
}
*/


/*float soma (float a , float b){
    return a+b;
}
int main(){
float number_1,number_2;

printf("Introduz numero>>");
scanf("%f",&number_1);
printf("Introduz numero>>");
scanf("%f",&number_2);
printf("Soma=%f",soma(number_1,number_2));


return 0;}
*/
/*
float soma (float a , float b){
    float c;
    c = a + b;
    return c;
}
int main(){
float number_1,number_2;

printf("Introduz dois numeros>>\n");
scanf("%f %f",&number_1,&number_2);
printf("%f + %f = %f",number_1,number_2,soma(number_1,number_2));


}
*/


/*
int quadrado_numero(int num){
    int resultado;
    resultado = num * num;
    return resultado;

}
int main(){
int number;

printf("Introduz numero>>");
scanf("%d",&number);
printf("Quadrado de %d = %d",number,quadrado_numero(number));

}
*/

//Outra Abordagem
/*
int quadrado_numero(int num);
int

int main(){
int number;

printf("Inserir numero>>");
scanf("%d",&number);
printf("Quadrado de %d = %d",number,quadrado_numero(number));

return 0;}

int quadrado_numero(int num){
    int resultado;
    resultado = num * num;
    return resultado;
}

*/

/*int quadrado_numero(int num){
    int resultado;
    resultado = pow(num,2);
    return resultado;
    }
int main(){
int number_1;
printf("Introduz numero>>");
scanf("%d",&number_1);
printf("Quadrado de %d= %d",number_1,quadrado_numero(number_1));


return 0;}

*/

/*float hipotenusa_triangulo(float cateto_1,float cateto_2){
    float hipotenusa,resultado;
    cateto_1 = cateto_1 * cateto_1;
    cateto_2 = cateto_2 * cateto_2;
    hipotenusa = cateto_1 + cateto_2;
    resultado = sqrt(hipotenusa);

    return resultado;

}
int main(){
float cateto1,cateto2;

printf("Introduz cateto1>>");
scanf("%f",&cateto1);
printf("Introduz cateto2");
scanf("%f",&cateto2);
pritntf("Cateto>>%f",hipotenusa_triangulo(cateto1,cateto2));

return 0;}

*/

void menu(){

    printf("=====Menu=====\n");
    printf("+=>Adicao\n");
    printf("-=>Subtracao\n");
    printf("*=>Multiplicacao\n");
    printf("/=>Divisao\n");

}


int operacao (int number_1,int number_2,char op){
    if (op=='+'){
        int resultado;
        resultado = number_1 + number_2;
        return resultado;
        }
    else
        if (op == '-'){
            int resultado;
            resultado = number_1 - number_2;
            return resultado;
        }
        else
            if (op == '*'){
                int resultado;
                resultado = number_1 * number_2;
                return resultado;}
            else
                if(op == '/'){
                    int resultado;
                    resultado = number_1 / number_2;
                    return resultado; }
                else
                    return -1;
}


int main(){
int num_1,num_2,activar_calculadora;
char operador;
menu();


do{
printf("Prima qualquer numero para activar e -1 para Desactivar>>\n");
scanf("%d",&activar_calculadora);
printf("Introduz numero>>");
scanf("%d",&num_1);
printf("Introduz numero>>");
scanf("%d",&num_2);
printf("Introduz operacao pretendida>>");
scanf(" %c",&operador);
printf("%d %c %d = %d\n",num_1,operador,num_2,operacao(num_1,num_2,operador));
}while(activar_calculadora!=-1);


return 0;}











