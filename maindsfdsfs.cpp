#include <iostream>

using namespace std;

using namespace std;


int tamaho(char arr[]){
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
int tamanopuntero( char *ptr){
    int a=0;

    for(;*ptr!='\0';ptr++){
        a++;
        }
    return a;
    }



void imprimirpuntero(char *ptr, char *ptr2){
    for(;*ptr!='\0';ptr++){
        *ptr=*ptr2;
         ++ptr2;}

        cout<<ptr;
    }

void concstr(char *ptr char *ptr2){
    int a;
    for(;*ptr!='\0';ptr++){
        a=i+1;
    }
    for(;*ptr2!='\0';ptr2++){
        arr1[a+e]=arr2[e];
    }
    for(;arr1[i]!='\0';i++){
        cout<<arr1[i];
    }





int main(){
char cont1[]="sadadsa        ";
char cont2[]="qwry";
 char cadena[] = "hola";
 char cadena_1[10] = " ";
 char cadena_2[] = "Daniel";
 //primirstr(cadena_1,cadena_2);
 //ut<<tamaho(cadena);
 //ncstr(cadena,cadena_2);
 //ut<<tamanopuntero(cadena_2);
 imprimirpuntero(cadena_2,cadena);
 cout<<cadena_2;
 return 0 ;
}







