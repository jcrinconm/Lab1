#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;
 int main()

 {
 char str[6] = "glmas";
 char temp;
 cout<<endl<<"Orden original: "<<str<<endl; //deberia imprimir cbjh

 if(str[1]<str[0])
  {
      temp = str[0];
      str[0] = str[1];
      str[1] = temp;
  }
 cout<<str;
 if(str[2]<str[1])
  {
      temp = str[1];
      str[1] = str[2];
      str[2] = temp;
  }
 cout<<str;

 if(str[3]<str[2])
  {
      temp = str[2];
      str[2] = str[3];
      str[3] = temp;
  }
 cout<<str;

 if(str[4]<str[3])
  {
      temp = str[3];
      str[3] = str[4];
      str[4] = temp;
  }
 cout<<str;

  cout<<endl<<"Alphabetical order : "<<str<<endl; //this should print out 'bc
 }
