#include <cstdlib>
#include <iostream>

using namespace std;

int preguntas(int);

int main(int argc, char *argv[])
{   
    cout<<endl<<" |||  BIENVENIDO AL MEJOR JUEGO DE PREGUNTAS  |||"<<endl<<endl;
    
    cout<<" Elija el tipo de pregunta : "<<endl<<endl;
    cout<<"   Matematica : 1"<<endl
        <<"   Geografia  : 2"<<endl
        <<"   Historia   : 3"<<endl
        <<" -------------------"<<endl
        <<"   Salir      : 4"<<endl<<endl<<"   ";

    int tipo; cin>>tipo;
    
   switch (tipo){
       case 1:
            cout<<"
            break;   
       
       case 2 :
            break; 
       
       case 3 :
            break;
       
       case 4 :
            cout<<endl<<" FIN DEL JUEGO, HASTA LUEGO"<<endl<<endl;
            break;
       default :
               cout<<"Item Incorrecto" ;
               break;  
   }
    system("PAUSE");
}

