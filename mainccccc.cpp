#include <iostream>
#include "curso.h"
using namespace std;

int main()
{
    curso cursos[6];
    cursos[0].nombre="filo";
    cursos[0].promedio=11.49;
    cursos[1].nombre="mate";
    cursos[1].promedio=12;
    cursos[2].nombre="icc";
    cursos[2].promedio=17;
    cursos[3]nombre="cci";
    cursos[3].promedio=15;
    cursos[4].nombre="comu";
    cursos[4].promedio=17;
    cursos[5].nombre="discretas";
    cursos[5].promedio=14;
    int tam=6;

     for (i=1; i<TAM; i++)
          for j=0 ; j<TAM - 1; j++)
               if (cursos[j].promedio > cursos[j+1].promedio)
                    int temp = curso[j].promedio;
                  cursos[j].promedio = cursos[j+1].promedio;
                    cursos[j+1].promedio = temp;

}
    cout<<cursos[0].nombre<<endl;
    cout<<cursos[0].promedio<<endl;
    cout<<cursos[1].nombre<<endl;
    cout<<cursos[1].promedio<<endl;
    cout<<cursos[2].nombre<<endl;
    cout<<cursos[2].promedio<<endl;
    cout<<cursos[3].nombre<<endl;
    cout<<cursos[3].promedio<<endl;
    cout<<cursos[4].nombre<<endl;
    cout<<cursos[4].promedio<<endl;
    cout<<cursos[5].nombre<<endl;
    cout<<cursos[5].promedio<<endl;
}
