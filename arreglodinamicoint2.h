#ifndef ARREGLODINAMICOINT_H
#define ARREGLODINAMICOINT_H
#include <iostream>
using namespace std;

class arreglodinamicoint
{
    int size;
    int *data;

    public:
       arreglodinamicoint(int size,int arr[]);
        void insertaratras(int elem);
        ~arreglodinamicoint();
        void  mostrar();
#endif // ARREGLODINAMICOINT_H
