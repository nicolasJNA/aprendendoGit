//ordenação por inseção

void imprimir(int vetor, int tamanho){
for(int a =0; a < tam; a++){
	printf("%d ", vetor[a]);
}
}
#include <stdio.h>
int main(){
int vetor[10] = {5,6,4,8,7,2,1,16,3,4}
int copia, indice;

for(int a =1; a<10;a++){
indice = a;
copia = vetor[a];
while(indice > 0 && copia < vetor[indice -1]){
vetor[indice] = vetor[indice  1];
indice--
}
vetor[indice] = copia;
}

imprimir(vetor,10);
return 0;
}
