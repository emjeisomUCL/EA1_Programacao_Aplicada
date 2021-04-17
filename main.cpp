#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int binaryToDecimal(int bin);
void decimalToBinary (int dec);

int main()
{
  //Caractere que determinará o tipo de operação (+,-,*,/,%)
  char op;
  //Variaveis da entrada (numeros binários)
  int binA, binB;
  //Variaveis da entrada convertidas para numeros decimais
  int convBinA, convBinB, res=0;

  cin>>op;
  cin>>binA;
  cin>>binB;

  convBinA = binaryToDecimal(binA);
  convBinB = binaryToDecimal(binB);

  switch (op)
  {
    case '+':
      res = convBinA + convBinB;
    break;
    case '-':
      res = convBinA - convBinB;
    break;
    case '*':
      res = convBinA * convBinB;
    break;
    case '/':
      res = convBinA / convBinB;
    break;
    default:
      res = convBinA % convBinB;
  }

  decimalToBinary (res);

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

//Função para converter deciamal para binário
void decimalToBinary (int dec){
  
  int div, convert, cont=2;
  convert = dec;

  if(dec <= 0){
    cout<<"00000000";
  }else{
    while (dec / 2 != 1){
      div = dec / 2;
      dec = div;
      cont++;
    }
  }

  int bin[cont];
  for (int i = (cont - 1); i >= 0; i--)
  {
    if (convert % 2 == 0)
    {
      bin[i] = 0;
    }
    else
    {
    bin[i] = 1;
    }
    convert = convert / 2;
   }
  
  for (int i = 0; i < cont; i++)
  {
    cout<<bin[i];
  }
}