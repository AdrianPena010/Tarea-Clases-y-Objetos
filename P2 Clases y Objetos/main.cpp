#include <iostream>

using namespace std;

class Materia
{
private:

protected:

public:
    int Clave;
    string Nombre;
    string ProfesorTit;
    string LibroTexto;

    Materia(int c,string n,string p,string l)
    {
        Clave=c;
        Nombre=n;
        ProfesorTit=p;
        LibroTexto=l;
    }

    void Imprime()
    {
        cout<<"\n\tDATOS DE LA MATERIA BASES DE DATOS"<<endl;
        cout<<"Clave: "<<Clave<<endl;
        cout<<"Materia: "<<Nombre<<endl;
        cout<<"Profesor: "<<ProfesorTit<<endl;
        cout<<"Libro de texto: "<<LibroTexto<<endl;
    }
    void CambiaClave(int nClave)
    {
        cout<<"\n\tCAMBIAR CLAVE DE LA MATERIA PROGRAMACION"<<endl;
        cout<<"Clave original: "<<Clave<<endl;
        cout<<"Ingrese una nueva clave: ";
        cin>>nClave;
        Clave=nClave;
        cout<<"La nueva Clave es: "<<Clave;
    }
    void CambiaProfe(string nom)
    {
        cout<<"\n\tCAMBIAR EL NOMBRE DEL PROFESOR DE BASES DE DATOS"<<endl;
        cout<<"Profesor: "<<ProfesorTit<<endl;
        cout<<"Ingrese el nuevo nombre: ";
        cin>>nom;
        ProfesorTit=nom;
    }
};

int main()
{
    Materia Programacion(1458,"Programacion","Jaramillo","Pseudocodigo");
    Materia BasesDatos(15577,"Bases de Datos","Rigoberto","DATAFIND");
    int opc;
    int claveN;
    string profeNom;

    do{
    cout<<"\n\tMENU DE MATERIAS"<<endl;
    cout<<"1.Cambiar clave de la materia Programacion\n2.Cambiar nombre del profesor de Bases de Datos\n3.Imprimir datos de la materia Bases de Datos\n4.Salir";
    cout<<"\nIngrese una opcion: ";
    cin>>opc;

    switch(opc)
    {
    case 1:
        Programacion.CambiaClave(claveN);
        break;
    case 2:
        BasesDatos.CambiaProfe(profeNom);
        break;
    case 3:
        BasesDatos.Imprime();
        break;
    case 4:
        cout<<"\nSaliendo...";
        break;
    default:
        cout<<"Ingrese una opcion valida...";
    }
    }while(opc!=4);

    return 0;
}
