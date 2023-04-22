#include <iostream>
#include <malloc.h>
#include<string.h>

using namespace std;


struct corredor { string nombre; int valor=0; corredor *sig;
};

corredor *primero;
corredor *aux,*aux2;


 int Correr(){

    

 cout<<"     NUMERO DEL CORREDOR  :  "<<aux->valor<<endl<<"    NOMBRE :  "<<aux->nombre<<endl<<endl;
 

return 0;
};


int registrar()
{

     if (primero==NULL)

    {
       primero = (struct corredor *) malloc(sizeof(struct corredor));
       cout<<"REGISTRAR CORREDOR..........."<<endl<<endl;

       cout<<"NOMBRE:  "<<endl;
       cin>>primero->nombre;
       cout<<"NUMERO:"<<endl;
       cin>>primero->valor;
       primero->sig=NULL;

}else

    {
       aux = (struct corredor *) malloc(sizeof(struct corredor));
       
       cout<<"REGISTRAR CORREDOR..........."<<endl<<endl;

        cout<<"NOMBRE:  "<<endl;
         cin>>aux->nombre;

           cout<<"NUMERO:"<<endl;
            cin>>aux->valor;
              aux->sig=NULL;
              aux2=primero;
      
        while (aux2->sig!=NULL)
        aux2=aux2->sig;
        aux2->sig=aux;
        aux2=aux=NULL;

        
        free(aux);
        free(aux2);


    }

    
    
    return 0;
     
}

int mostrar()
{

    for (aux=primero; aux!=NULL; aux=aux->sig)
    {
      cout<<"     NUMERO DEL CORREDOR  :  "<<aux->valor<<endl<<"    NOMBRE :  "<<aux->nombre<<endl<<endl;
    }
    

 return 0;
}


int main(){

    int opcion=0;  


    do {


        cout<<"1. Registrar"<<endl;
        cout<<"2. Mostrar"<<endl;
        cout<<"3. correr"<<endl;
        cout<<"4. salir"<<endl;

       
        cin>>opcion;
        switch (opcion)
        {
            case 1: registrar();
             break;

            case 2:   mostrar();
             break;

              case 3:   Correr();
             break;

          case 4: exit;
       
       
        }
    }while(opcion!=4);
   
 return 0;
}
