#include <bits/stdc++.h>
using namespace std;

class Animal
{
string especie;
public:
int edad;
string nombre;
string sonido;
Animal()
{
    especie="desconocida";
    edad=0;
    nombre="desconocido";
    sonido="desconocido";
}
Animal(string esp, int ed, string nom, string son)
{
setEspecie(esp);
edad=ed;
nombre=nom;
sonido=son;
};
string getEspecie()
{
return especie;
}
void setEspecie(string esp)
{
especie=esp;
}
void presentarse() 
{
    cout <<  "Hola, soy un "<<especie<<" de "<<edad <<"años y me llamo "<<nombre<< " Hago" << sonido<<endl;
}
};
int main ()
{
    vector <Animal> animales;
    Animal wofy( "perro", 8, "wofy", "aña");
    Animal cuyin;
    cuyin.setEspecie("cuyo");
    cuyin.edad=1;
    cuyin.nombre="cloe";
    cuyin.sonido="waza";
    animales.push_back(wofy);
    animales.push_back(cuyin);
    for (int i=0;i<animales.size();i++)
    {
        animales[i].presentarse();
    }
    return 0;
}