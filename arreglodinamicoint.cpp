#include "arreglodinamicoint.h"


arreglodinamicoint::arreglodinamicoint(int size,int arr[])
        {
            this>size=size;
            this>data=new int[size];
            for (i=0;i<size;++i){
                data[i]=arr[i];
            }
void arreglodinamicoint::insertaratras(int elem){
            int nuevo=size+1;
            this>new int [nuevo];
            size=nuevo;
            for(int=i;i<=size-1;i++){
                nuevo[i]=data[i];
            }
            nuevo[size]=elem
        }
arreglodinamicoint::~arreglodinamicoint(){
       delete[] data;
       }
       data=nuevo;
       }
void arreglodinamicoint::mostrar(){
            for i=0 hasta size-1
                cout<< date[1]<<" ";
        }
}
