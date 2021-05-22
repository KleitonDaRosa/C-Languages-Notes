#include <stdio.h>

#define MAX 100



int main (){
    
int vetor[MAX];
    
int valoresPretendidos,numeroProcurado;
 
   
    
printf("Inserir quantos Valores pretendes Inserir>>");
    
scanf("%d",&valoresPretendidos);
 
   
    
for (int i=0 ; i < valoresPretendidos ; i++ ){
        
	printf("Inserir o valor %d>>",i+1);
        
	scanf("%d",&vetor[i]);
    }
    
    

//Imprimir valores do vector<> ;

for (int j =0 ; j < valoresPretendidos ; j++){

        printf("%d\t\7",vetor[j]);
    }
 
   
}