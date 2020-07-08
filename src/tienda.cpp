#include <iostream>
using namespace std;
int main()
{
    double audifonos, relojes, celulares, precio, PCs, cantidadproductos=0, subtotal=0, descuento, totalpagar;
    cout << "ingrese cantidad de audifonos:";
    cin >>  audifonos;
    cout << "ingrese cantidad de relojes:";
    cin >>  relojes;
    cout << "ingrese cantidad de celulares:";
    cin >>  celulares;
    cout << "ingrese cantidad de PCs:";
    cin >>  PCs;
    cout << "ingrese precio: ";
    cin >> precio;
    cantidadproductos= audifonos + relojes + celulares + PCs;
    subtotal= cantidadproductos*precio;
    descuento= subtotal
    
    if (cantidadproductos==audifonos>10)
    {
        (descuento = subtotal*0.20);
    }
    else if (cantidadproductos==relojes>50)
    {
        (descuento = subtotal*0.15);
    }
   if (cantidadproductos==celulares>100)
   {
       (descuento = subtotal*0.10);
   }
   if (cantidadproductos==PCs>0.20)
   {
       (descuento = subtotal*0.25);
   }
   else 
    {   
        descuento = 0;
    }
    totalpagar=subtotal-descuento;

    cout<< "la cantidad es: " << cantidad << endl;
    cout << "el subtotal es: " << subtotal << endl;
    cout << "el descuento es: " << descuento << endl;
    cout << "el total a pagar es: " << totalpagar <<endl;

return 0;

}