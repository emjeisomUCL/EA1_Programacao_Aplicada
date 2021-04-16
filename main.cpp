#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int binaryToDecimal(int bin);

int main()
{
  int binA;

  cin>>binA;

  cout<<binaryToDecimal(binA);

  return 0;
}

//Função intermediária para converter numeros binários em decimais.
int binaryToDecimal(int bin){
  int pot2=0,pos, soma=0;
  string s;

  s = to_string(bin);
  pos = s.length();

  for(int i = (s.length() - 1); i >= 0; i--){
    if(s[i]=='1'){
      soma += pow(2, pot2);
    }
    pos--;
    pot2++;
  }
  return soma;
}