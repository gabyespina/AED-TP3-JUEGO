//TODAVIA NO TERMINÉ EL PROGRAMA

#include <cstdlib>
#include <iostream>

using namespace std;

int crear_preguntas(int);

int main(int argc, char *argv[])
{   
    cout<<endl<<" |||  BIENVENIDO AL MEJOR JUEGO DE PREGUNTAS  |||"<<endl<<endl;
    
    cout<<" Elija el tipo de pregunta : "<<endl<<endl;
    cout<<"   Matematica : 1"<<endl
        <<"   Geografia  : 2"<<endl
        <<"   Historia   : 3"<<endl<<endl<<"   ";

    int tipo; cin>>tipo;
    
    
   /* for (pos= 0; pos<10;pos++){
        tipo[pos]= pos;
        cout<< tipo[pos]<< "  ,  ";
    }
   */
    system("PAUSE");
}

int crear_preguntas(int tipo){
    tipo = tipo + 3;
    return tipo;
}
