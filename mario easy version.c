
#include <stdio.h>

int main()
{
    int n = 8, i, j;

//para imprimir uma piramide com 8# lá embaixo
//começa com 1 e termina com 8 pq n = 8
  for(i = 1; i <=n; i++){
      //antes de imprimir os # tenho que imprimir os espaços do lado esquerdo
      for(j = n - 1; j >= i; j--)
		printf(" ");
	for(j = 1; j <= i; j++){
		printf("#");
	}
	printf("\n");
}
    return 0;
}