// 
//Foi desenvolvido por Henrique das Virgens e Boreloi Indi
//

#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
 
 
#define maxN 7	//coloque aqui a quantidade maxima de objetos 
#define maxC 15	//coloque aqui o valor maximo do peso da mochila
 
 
using namespace std;
 
int matrix[maxN+1][maxC+1];
//Lista dos pesos
int peso[maxN+1];
//Lista do valores de cada peso
int valor[maxN+1];
 
int main(){
	//Declaração dos atributos
	int c, v, x, i, b, n, s, soma, aux;
	//Os itens da mochila
	vector<int> mochila;

	//capacidade da mochila e total de itens 
	while(scanf("%d %d", &c, &n), c ){ 
 
		//lendo os elementos:
		for(i = 1; i<=n; i++){
			scanf("%d %d", &x, &v); //peso do objeto, valor do objeto
			peso[i] = x;
			valor[i] = v;
		}
 
		//zerando a primeira coluna:
		for(i=0; i<=n; i++){
			matrix[i][0] = 0;
		}
 
		//iniciando o algoritmo da mochila booleana:
		for(b = 1; b<=c; b++){
			matrix[0][b] = 0;
 
			for(i=1; i<=n; i++){
				s = matrix[[i-1][b];	//Pegando a linha de cima
 
				//se o novo objeto nao ultrapassar o peso e tiver maior valor:
				if( peso[i] <= b){
					soma = matrix[i-1][b-peso[i]] + valor[i];
					if( s < soma){
						s = soma;
					}
				}
 				
				matrix[i][b] = s;
			}
		}
 
 
		//imprimindo o valor total
		printf("%d\n", matrix[n][c]); 

 
		//imprimindo a matriz 
		for(i= 0; i<=n; i++){
			for(b = 0; b<=c; b++){
				printf("%d\t", matrix[[i][b]);
			}
			puts("");
		}

		 //pegando os objetos que entraram na mochila:
		 i = n;
		 b = c;
		 aux = tabela[i][b];
 
		 while(aux){
			 if(matrix[i][b] != matrix[i-1][b]){ //significa que o objeto i entrou;
				 mochila.push_back(i);		//Colocando na mochila
				 b -= peso[i];
			 }
			 i--;
			 aux = matrix[i][b];
		 }
		 
 		//Imprimindo a mochila
		 puts("Objetos na mochila:");
		 for(i=0; i<int(mochila.size()); i++){
			 printf("%d ", mochila[i]);
		 }
		 puts("");
 
 
	system("PAUSE"); 
	}
}
