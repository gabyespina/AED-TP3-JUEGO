//SE TRATA DE UN JUEGO, DONDE EL USUARIO ELIGUE CON QUE TIPO DE PREGUNTAS VA A JUGAR
//CADA PREGUNTA BIEN RESPONDIDA, SUMA 10 PUNTOS, EL JUGADOR GANA SI CONTESTA BIEN TODAS LAS PREGUNTAS 
//ES DECIR, SI LOGRA LOS 90 PUNTOS, YA QUE EL PROGRAMA CUENTA CON 3 PREGUNTAS POR TEMA
//GABRIEL ESPINA - K1091
//28/04/15

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   
    int cont = 0, pmate = 0, pgeo = 0, phist = 0;
    int tipo,tema = 0,porc = 0;
    
    cout<<endl<<" |||  BIENVENIDO AL MEJOR JUEGO DE PREGUNTAS  |||"<<endl<<endl;
    
    do{
    
    cout<<" Elija la tematica : "<<endl<<endl;
    cout<<"   Matematica : 1          " << pmate << "   puntos"<<endl
        <<"   Geografia  : 2          " << pgeo << "   puntos"<<endl
        <<"   Historia   : 3          " << phist << "   puntos"<<endl
        <<" --------------------------------------"<<endl
        <<"   Reiniciar  : 4" <<endl
        <<"   Reglas     : 5" <<endl
        <<"   Salir      : 6" <<endl<<endl<<"   ";

        cin>>tipo; cout<<endl;
        
    string res;
   switch (tipo){
       case 1:
            
            cont =0;
            cout<<endl<<"  Matematica : "<<endl<<endl;
            
            cout<<"  [ 152 / 10 ]"<<endl<<endl
            <<"  a) 1520    b) 15,2   c) 1,52"<<endl<<endl<<"  ";
            cin>>res;cout<<endl; if (res=="b" or res=="B") {cont= cont+10;};
            
            cout<<" [ Raiz Cubica de -64 ]"<<endl<<endl
            <<"  a) -3    b) -6   c) -4 "<<endl<<endl<<"  ";
            cin>>res;cout<<endl; if (res=="c" or res=="C") {cont= cont+10;};
            
            cout<<" [ Logaritmo Natural de e elevado al cubo ]"<<endl<<endl
            <<"  a) e    b) 3   c) 1 "<<endl<<endl<<"  ";
            cin>>res;cout<<endl; if (res=="b" or res=="B") {cont= cont+10;};
            pmate = cont;
            
            if (pmate==30) cout<< " MUY BIEN ! , SABES DE MATEMATICA , APROBASTE ESTE TEMA."<<endl<<endl;
            if (pmate==20) cout<< " A PRACTICAR ! , PODES MEJORAR EN TUS CUENTAS"<<endl<<endl;
            if (pmate==10) cout<< " QUE MAL ! , AGARRA UNA GUIA POR FAVOR"<<endl<<endl;
            if (pmate==0) cout<< " NO SE COMO LLEGASTE HASTA LA UNIVERSIDAD"<<endl<<endl;
            tema = tema + 1;
            break;   
       case 2 :
            
            cont =0;
            cout<<endl<<"  Geografia : "<<endl<<endl;
            
            cout<<"  [ Cantidad de provincias argentinas ]"<<endl<<endl
            <<"  a) 23    b) 29   c) 27"<<endl<<endl<<"  ";
            cin>>res;cout<<endl; if (res=="a" or res=="A") {cont= cont+10;};
            
            cout<<" [ Zona argentina con mas relieve ]"<<endl<<endl
            <<"  a) Patagonia    b) Centro   c) Cuyo "<<endl<<endl<<"  ";
            cin>>res;cout<<endl; if (res=="c" or res=="C") {cont= cont+10;};
            
            cout<<" [ Cantidad de provincias argentinas que limitan con la Cord. de los Andes ]"<<endl<<endl
            <<"  a) 12    b) 10   c) 11 "<<endl<<endl<<"  ";
            cin>>res;cout<<endl; if (res=="c" or res=="C") {cont= cont+10;};
            pgeo = cont;
            
            if (pgeo==30) cout<< " MUY BIEN ! , SABES DE GEOGRAFIA , APROBASTE ESTE TEMA."<<endl<<endl;
            if (pgeo==20) cout<< " A PRACTICAR !, PODES MEJORAR."<<endl<<endl;
            if (pgeo==10) cout<< " QUE MAL ! , TE PIDO QUE YA AGARRES UN MAPA"<<endl<<endl;
            if (pgeo==0) cout<< " NO SE COMO LLEGASTE HASTA LA UNIVERSIDAD"<<endl<<endl;
            tema = tema + 1;
            
            break; 
       
       case 3 :
            
            cont = 0;
            cout<<endl<<"  Historia : "<<endl<<endl;
            
            cout<<"  [ Primer presidente constitucional (Estado Unificado) ]"<<endl<<endl
            <<"  a) Mitre    b) Rivadavia   c) Urquiza"<<endl<<endl<<"  ";
            cin>>res;cout<<endl; if (res=="a" or res=="A") {cont= cont+10;};
            
            cout<<" [ Cuantas veces fue reformada la Constitucion Argentina? ]"<<endl<<endl
            <<"  a) 5    b) 6   c) 7 "<<endl<<endl<<"  ";
            cin>>res;cout<<endl; if (res=="c" or res=="C") {cont= cont+10;};
            
            cout<<" [ Anio que se sanciono la Ley Saenz Penia ]"<<endl<<endl
            <<"  a) 1913    b)1902  c) 1912 "<<endl<<endl<<"  ";
            cin>>res;cout<<endl; if (res=="c" or res=="C") {cont= cont+10;};
            phist = cont;
            
            if (phist==30) cout<< " MUY BIEN ! , SABES DE HISTORIA , APROBASTE ESTE TEMA."<<endl<<endl;
            if (phist==20) cout<< " A PRACTICAR ! , TENES UN REGULAR EN ESTE TEMA"<<endl<<endl;
            if (phist==10) cout<< " QUE MAL ! , SABES MUY POCO DE TU PROPIO PAIS"<<endl<<endl;
            if (phist==0) cout<< " NO SE COMO LLEGASTE HASTA LA UNIVERSIDAD"<<endl<<endl;
            tema = tema + 1;
            break;
       case 4 :
            pgeo = 0; phist = 0; pmate = 0; tema = 0 ; 
            break;
       case 5 :
            cout<<endl<<endl<<"  El juego se trata de contestar preguntas de diversos temas,"<<endl
                            <<"  y juntar la mayor cantidad de puntos !." <<endl<<endl
                            <<"  Para elegir el tipo de pregunta, seleccione el numero que corresponda,"<<endl
                            <<"  y para elegir la respuesta a cada pregunta,"<<endl
                            <<"  seleccione la letra correspondiente a cada una."<<endl<<endl
                            <<"  LOGRE 90 PUNTOS EN TOTAL PARA GANAR ! (30 PUNTOS POR TEMA)"<<endl<<endl
                            <<"  SUERTE ! ! "<<endl<<endl;
            break;
       case 6 : 
            cout<< " PUNTAJE TOTAL:  "<< (pmate+phist+pgeo)<<endl<<endl;
            porc = ((pmate+phist+pgeo) * 100)/90;
            cout<< " ACERTO EL " << porc << " % " << " DE LAS PREGUNTAS"<<endl<<endl;
            cout<<endl<<" FIN DEL JUEGO, HASTA LUEGO"<<endl<<endl;
            break;
       default :
               cout<<endl<<"Item Incorrecto"<<endl<<endl ;
               break;  
   }
   
   if (tipo!= 6){
      if (tema == 3) {
          cout<< " PUNTAJE TOTAL:  "<< (pmate+phist+pgeo)<<endl<<endl;
          porc = ((pmate+phist+pgeo) * 100)/90;
          cout<< " ACERTO EL " << porc << " % " << " DE LAS PREGUNTAS"<<endl<<endl;
          cout<< " QUIERE VOLVER A JUGAR?   s/n"<< endl<<endl<<"  ";
          string resp; cin>>resp;
          if (resp == "no"){
             tipo = 6;
         }else{
               pgeo = 0; phist = 0; pmate = 0; 
         }
      }
   }
   }while (tipo != 6);
    system("PAUSE");
}
