# resolver
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

int main(){
  cout<<Perfecto(6)<<endl;
  return 0;
}

bool esprim(int n){
        if(n<1)
                retun false;
        for(int i=1;i<=n;i++){
              if(n%1==0){
                     n++;
         }
       }
        if (n==2){
           return true; 
         } else{
              return false;
        }
}
 for( int i=1; i<=n;i++)
        if(esprim(i)){
                cout<<i<< endl;
         }
 }

int potencia(int base,int exponente){
      if(exponente==0)
                return 1;
       else
         base=base*exponente(base,exponente-1)
        return base;
 cout<<"la potencia es:"<< potencia(2,3)    
        
void intercambiar(int a=1, int b=2)
        a=a+b;
        b=a-b;
        c=a-b;
        cout<<a<<endl;
        cout<<b<<endl;
        return 0;
void intercambiar(int a=1, int b=2)
        a=a^b;
        b=a^b;
        c=a^b;
        cout<<a<<endl;
        cout<<b<<endl;
        return 0;      
        
