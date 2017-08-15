/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {

  char c[500];
  int i, count=0, j=0;
  int tam (char c[]);

  fgets(c,500,stdin);

  j= tam(c);

  for(i=0; i<=j; i++){
     
    if((c[i+1]<'0')||((c[i+1]>'9') && (c[i+1]<'A'))||((c[i+1]>'Z') && (c[i+1]<'a'))||(c[i+1]>'z')){
      if((c[i]>='0')&&(c[i]<='9')){
      	count++;
      }
      if((c[i]>='A')&&(c[i]<='Z')){
	count++;
      }
      if((c[i]>='a')&&(c[i]<='z')){
        count++;
      }
    }

 }
printf("%d\n", count);
return 0;

}

int tam (char c[]){
  int i, n=0;
     for (i=0;c[i]!='\0';i++) {
           n++;
         }
    return n;
}
  

 
