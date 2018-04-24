#include <iostream>

using namespace std;
int tamano(char arr[]){
    int a=0;
    for(int i=0;arr[i]!='\0';i++){
        a++;
        }
    return a;
    }

void imprimirstr(char arr1[],char arr2[]){
    for(int i=0;arr1[i]!='\0';i++){
        arr1[i]=arr2[i];
        cout<<arr1[i];
    }
}

void concstr(char arr1[],char arr2[]){
    int a;
    for(int i=0;arr1[i]!='\0';i++){
        a=i+1;
    }
    for(int e=0;arr2[e]!='\0';e++){
        arr1[a+e]=arr2[e];
    }
    for(int i=0;arr1[i]!='\0';i++){
        cout<<arr1[i];
    }
}

int main(){
 char cadena[] = "hola";
 char cadena_1[10] = " ";
 char cadena_2[] = "Daniel";
 imprimirstr(cadena_1,cadena_2);
 cout<<tamaho(cadena);
 concatenarstr(cadena,cadena_2);
 return 0 ;
}
}
