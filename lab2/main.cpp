#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main()
{
    //Declarando una variable local
      bool son_anagramas;
      int i=0;int u=0;int a; int b; char d;char e;int n;int suma1=0;int suma2=0;
  char input1[256];
  char input2[256];
  printf ("Introduzca la primera palabra: ");
  gets (input1);
  printf ("La primera palabra tiene %u caracteres.\n",(unsigned)strlen(input1));
  a=strlen(input1);
  while (input1[i])
  {
   d=input1[i];
   putchar (tolower(d));
   i++;

  }
  cout<< (a);
  printf ("\n");
  printf ("Introduzca la segunda palabra: ");
  gets (input2);
  printf ("La segunda palabra tiene %u caracteres.\n",(unsigned)strlen(input2));
  b=strlen(input2);
  while (input2[u])
  {
   e=input2[u];
   putchar (tolower(e));
   u++;
  }
  cout<<(b);

  //cout<<(e);
  //for(n=0; n<strlen(input1);++n);
    //  suma1 += d[n];


}

