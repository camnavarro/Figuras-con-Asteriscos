///
//  main.cpp
//  FIGURAS CON ASTERISCOS
//
//  Created by Camilo Navarro on 8/26/19.
//  Copyright © 2019 Camilo Navarro. All rights reserved.
//

#include <iostream>
using namespace std;

//FIRMAS//
void tri(int, int);
void squ(int);
void smile();


void ratri(int);
void sad();

//MAIN//
int main(){
int p=1;

    cout<< "Bienvenido al programa de figuras con asteriscos. Presione ENTER para continuar..."<< endl;
    cin.get();
while(p!=0)
{
    int o, n=0, s=0;
    
    //MENU//
    
    cout << "----------------------------------------------------" << endl;
    cout << "- Para dibujar un cuadrado, teclee '1'             -"<< endl;
    cout << "- Para dibujar un triangulo equilatero, teclee '2' -"<< endl;
    cout << "- Para dibujar un triangulo rectangulo, teclee '3' -"<< endl;
    cout << "- Para dibujar una carita feliz, teclee '4'        -"<< endl;
    cout << "- Para dibujar una carita triste, teclee '5'       -"<< endl;
    cout << "- Para salir, teclee '0'                           -"<< endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl;
    cin>> o;
    cout << endl;
   
    switch (o)
    {
        case 1:
        {
            cout << "Por favor, teclee cuantos asteriscos desea que mida un lado del cuadrado"<< endl;
            cout << endl;
            cin >> n;
            cout << endl;
            cout << "Cuadrado " << n << " x " << n << " :" << endl;
            cout << endl;
            squ(n);
            cout << endl;
            cout << "Para volver al menu, teclee 1. Para salir, teclee 0"<< endl;
            cout << endl;
            cin >> p;
        }
            
            break;
            
        case 2:
        {
            cout << "Por favor, teclee cuantos asteriscos desea que mida la base del triangulo"<< endl;
            cin >> n;
            tri(n, s);
            cout << endl;
            cout << "Para volver al menu, teclee 1. Para salir, teclee 0"<< endl;
            cin >> p;
            
        }
            break;
            
        case 3:
        {
            cout << "Por favor, teclee cuantos asteriscos desea que mida la base del triangulo"<< endl;
            cout << endl;
            cin >> n;
            cout << endl;
            cout << "Triangulo rectangulo de base "<< n<< ":"<< endl;
            cout << endl;
            ratri(n);
            cout << endl;
            cout << "Para volver al menu, teclee 1. Para salir, teclee 0"<< endl;
            cout << endl;
            cin >> p;
            
        }
            break;
            
        case 4:
        {
            smile();
            cout << endl;
            cout << "Para volver al menu, teclee 1. Para salir, teclee 0"<< endl;
            cin >> p;
            
        }
            break;
            
        case 5:
        {
            sad();
            cout << endl;
            cout << "Para volver al menu, teclee 1. Para salir, teclee 0"<< endl;
            cin >> p;
            
        }
            break;
            
        case 0:
        {
            p=0;
        }
            break;
            
        default:
        {
            cout << "Error, opcion no valida"<< endl;
            cout << "Para volver al menu, teclee 1. Para salir, teclee 0"<< endl;
            cout << endl;
            cin >> p;
        }
    }
}
    return 0;

}

//CUADRADO DE N LADOS//
void squ(int n)
{
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            cout << "* ";
        }
        cout<< endl;
    }
}

//TRIANGULO EQUILATERO DE BASE N//
void tri(int n, int s)
{
    for (int i=1, k=0; i<=n; i++, k=0)
    {
        for(s=1; s <= n-i; s++)
        {
            cout<<"  ";
        }
        while(k!=2*i-1)
        {
            cout <<"* ";
            k++;
        }
        cout << endl;
    }
}


//TRIANGULO RECTANGULO DE BASE N//
void ratri(int n)
{
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout<< endl;
        
    }
    
}


//CARITA FELIZ :)//
void smile()
{
    cout << "   * * * * * * *   " << endl;
    cout << " *               * " << endl;
    cout << " *   + +    + +  * " << endl;
    cout << " *   + +    + +  * " << endl;
    cout << " *       ..      * " << endl;
    cout << " *   **      **  * " << endl;
    cout << " *     ******    * " << endl;
    cout << " *               * " << endl;
    cout << "   * * * * * * *   " << endl;
}

//CARITA TRISTE :(//
void sad()
{
    cout << "   * * * * * * *   " << endl;
    cout << " *               * " << endl;
    cout << " *   + +    + +  * " << endl;
    cout << " *   + +    + +  * " << endl;
    cout << " *       ..      * " << endl;
    cout << " *     ******    * " << endl;
    cout << " *   **      **  * " << endl;
    cout << " *               * " << endl;
    cout << "   * * * * * * *   " << endl;
}

