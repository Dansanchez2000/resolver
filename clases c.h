#ifndef CURSO_H
#define CURSO_H

#include <string>
using namespace std;



class   curso
{
    public:

        int promedio;
        string nombre;

    curso(int prom,string n){
     promedio=prom;
     nombre=n;
    };



    void setearpromedio(int prom);
    void setearnombre(string n);
    int obtenerpromedio();
    int obtenermayor();
    int obtenermenor;
    string obtenernombre();
    string obtenerinfo();

    void curso::setearpromedio(int prom){
        promedio=prom;

    }
    void curso:: setearnombre(string n){
        nombre=n;
    }

    int curso::obtener promedio(){
        return promedio;
        }

    string curso::obtenernombre(){
        return nombre;
        }

    string curso::obtenerinfo(){
        stringstream ss;

    ss<<promedio;
    return"el nombre del curso es"





};

#endif // CURSO_H
