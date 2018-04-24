#include<iostream>
using namespace std;

bool Perfecto(int n){
  int contador=0;
  for(int i=1; i<n; i++){
    if(n%i==0){
      contador=contador+i;
    }
  }
  if (contador==n){
    return true;
  }else{
    return false;
  }
}

bool esPrimo(int x){
  int contador=0;

  for (int i=1;i<=x; i++){
    if(x%i==0){
      contador++;
    }
  }
  if(contador==2){
    return true;
  }else{
    return false;
  }
}

int potencia(int base, int exponente){
  if(exponente==0){
    return 1;
  }else{
    base=base*potencia(base, exponente-1);
    return base;
  }
}

int intercambio(int &x, int &y){
  y=y+x;
  x=y-x;
  y=y-x;
}

int intercambioconBits(int &x, int &y){
  y=y^x;
  x=y^x;
  y=y^x;
}

int main(){
////Es Perfecto
//  cout<<Perfecto(6)<<endl;
////Es Primo
//int x,n=1,contador=0;
//cout<<"ingrese un numero: ",cin>>x;
//while(contador!=x){
//  if(esPrimo(n)){
//    cout<<n<<",";
//    contador++;
//    n++;
//  }else{
//    n++;
//  }
//}
////Potencia
//cout<<potencia(2,3);
////Intercambio
//int x=3, y=2;
//intercambio(x,y);
//cout<<"x es : "<<x<<endl;
//cout<<"y es : "<<y<<endl;
////Intercambio con Bits
//int x=3, y=2;
//intercambioconBits(x,y);
//cout<<"x es : "<<x<<endl;
//cout<<"y es : "<<y<<endl;
  return 0;
}
