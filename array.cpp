#include <iostream>

using namespace std;

int main()
{
 int tamano(char arr[]){
    int a=0;
    for(int i=0;arr[i]!='\0';i++){
        a++;
        }
    return a;
    }

void copystr(char arr1[],char arr2[]){
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
}
