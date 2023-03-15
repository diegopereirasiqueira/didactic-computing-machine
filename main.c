#include <stdio.h>
#include <stdlib.h>



int main() {
  char s[51], sAux[51];

  printf("Entrada: ");
  scanf("%[^\n]s", &s);

  int i, j, n;

  n = strlen(s); // retorna o tamanho do String "s"

  j = n - 1; // valor da última posição
  for(i=0; i<n; i++) {
    sAux[i] = s[j];
    j = j - 1;
  }

  sAux[i] = '\0'; // terminador (finaliza a String "sAux")

  printf("\n");
  printf("Entrada: %s\n", s);
  printf("Saida..: %s\n", sAux);

  return(0);
}
