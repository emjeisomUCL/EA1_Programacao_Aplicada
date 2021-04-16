#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
  int pot2=0,pos, soma=0;
  string bin;

  cout<<"Numero binario: ";
  cin>> bin;

  pos = bin.length();
  for(int i = (bin.length() - 1); i >= 0; i--){
    if(bin[i]=='1'){
      soma += pow(2, pot2);
    }
    pos--;
    pot2++;
  }
  cout<<"Binario convertido para decimal = "<<soma;

  cout<<endl<<endl;
  return 0;
}