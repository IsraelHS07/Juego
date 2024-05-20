#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int seleccionusuario;
    double seleccioncomputadora;

    cout << "Seleccione  una opcion \n"<< "opcion 1 : piedra\n"<<"opcion 2 : papel\n"<< "opcion 3 : tijera\n";
    cin >> seleccionusuario;

    switch (seleccionusuario)
    {
    case 1: cout << "\n Haz seleccionado piedra \n"<< endl;
        break;
        
        case 2: cout <<"Haz seleccionado papel \n" << endl;
        break;

        case 3: cout << "Haz seleccionado tijera \n"<< endl;
        break;

        case 0: cout << "saliste del juego\n"<< endl;

        default: cout << "solo puedes  seleccionar  las opciones 1, 2, y 3 \n"<<endl;
        break;

        return 0;
    }
    srand(time(NULL));
    seleccioncomputadora = rand()%3+1;

    if (seleccioncomputadora == 1)
    {
        cout << "La computadora selecciono piedra\n"<< endl;
    }else if (seleccioncomputadora == 1) {
        cout  << "La computadora selecciono piedra\n"<< endl;
        }else if (seleccioncomputadora == 2){
            cout << "La computadora selecciono papel\n"<< endl;
        }else if (seleccioncomputadora == 3){
        cout << "La computadora selecciono tijera\n "<< endl;
        }

        if (seleccionusuario == 2 && seleccioncomputadora == 1){
            cout << "Ganaste! \n"<< endl;
        }else if( seleccionusuario == 3 && seleccioncomputadora == 2){
            cout << "Ganaste \n"<< endl;
        }else if (seleccionusuario == 1 && seleccioncomputadora == 3){
            cout << "Ganaste\n"<<endl;
        }else if(seleccionusuario == seleccioncomputadora){
            cout << "Empate\n"<< endl;
        }else{
            cout << "Perdiste\n"<< endl;
        }
        


    return 0;
}