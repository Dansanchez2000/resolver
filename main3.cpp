#include <iostream>
#include "arreglodinamicoint.h"
using namespace std;

int main()
{
    int arr[]={1,2};

    arreglodinamicoint a(2,arr);
    a.insertaratras(5);
    a.mostrar();

    return 0;
}
