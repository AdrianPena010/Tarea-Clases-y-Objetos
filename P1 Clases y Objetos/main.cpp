#include <iostream>

using namespace std;

class Empleado
{
private:

protected:

public:
    int ClaveEmpleado;
    string Nombre;
    string Domicilio;
    float Sueldo;
    string ReportA;

    Empleado(int c,string n,string d,float s,string r)
    {
        ClaveEmpleado=c;
        Nombre=n;
        Domicilio=d;
        Sueldo=s;
        ReportA=r;
    }
    void Imprime()
    {
        cout<<"\tDatos del empleado...\n";

            cout<<"Clave: "<<ClaveEmpleado<<endl;
            cout<<"Nombre: "<<Nombre<<endl;
            cout<<"Domicilio: "<<Domicilio<<endl;
            cout<<"Sueldo: $"<<Sueldo<<endl;
            cout<<"Reporta: "<<ReportA<<endl;
    }
    void CambiarDomic(string cDom)
    {
        cout<<"Domicilio: "<<Domicilio<<endl;
        cout<<"Nuevo Domicilio: ";
        cin>>cDom;
        cout<<"Domicilio actual: "<<cDom;
        Domicilio=cDom;
    }
    void CambiarReportA(string cRep)
    {
        cout<<"Reporta: "<<ReportA<<endl;
        cout<<"Ingrese el nuevo nombre: ";
        cin>>cRep;
        cout<<"Nombre actual: "<<cRep;
        ReportA=cRep;
    }
    void ActualSueldo(float actSu)
    {
        int porcen;
        cout<<"Ingrese el porcentaje a aumentar: ";
        cin>>porcen;
        actSu=((Sueldo*porcen)/100)+Sueldo;
        cout<<"Nuevo sueldo: $"<<actSu;
        Sueldo=actSu;
    }
};

int main()
{
    Empleado JefePlanta(2104,"Alberto","Lomas de las Flores",25000.55,"Juan");
    Empleado JefePersonal(1451,"Carlos","Avenida Hidalgo",20000.25,"Maria");
    int opc;
    int clave;
    string nDom;
    float nSue;
    string nRepo;

    do{
    cout<<"\n\nMENU DE EMPLEADOS\n1.Cambiar Domicilio\n2.Actualizacion Sueldo\n3.Imprimir Datos\n4.Cambiar Nombre de Persona\n5.Salir"<<endl;
    cout<<"Ingrese una opcion: ";
    cin>>opc;
    switch(opc)
    {
    case 1:
        cout<<"\n\tCAMBIAR DOMICILIO"<<endl;
        cout<<"Ingrese la clave del empleado: ";
        cin>>clave;
        if(clave==JefePersonal.ClaveEmpleado)
        {
            JefePersonal.CambiarDomic(nDom);
        }
        if(clave==JefePlanta.ClaveEmpleado)
        {
            JefePlanta.CambiarDomic(nDom);
        }
        else if(clave!=JefePersonal.ClaveEmpleado&&JefePlanta.ClaveEmpleado)
        {
            cout<<"\nLa Clave no coincide...";
        }
        break;

    case 2:
        cout<<"\n\tACTUALIZAR SUELDO"<<endl;
        cout<<"Ingrese la clave del empleado: ";
        cin>>clave;
        if(clave==JefePersonal.ClaveEmpleado)
        {
            JefePersonal.ActualSueldo(nSue);
        }
        if(clave==JefePlanta.ClaveEmpleado)
        {
            JefePlanta.ActualSueldo(nSue);
        }
        else if(clave!=JefePersonal.ClaveEmpleado&&JefePlanta.ClaveEmpleado)
        {
            cout<<"\nLa Clave no coincide...";
        }
        break;

    case 3:
        cout<<"\n\tIMPRIMIR DATOS DE EMPLEADO"<<endl;
        cout<<"Ingrese la clave del empleado: ";
        cin>>clave;
        if(clave==JefePersonal.ClaveEmpleado)
        {
            JefePersonal.Imprime();
        }
        if(clave==JefePlanta.ClaveEmpleado)
        {
            JefePlanta.Imprime();
        }
        else if(clave!=JefePersonal.ClaveEmpleado&&JefePlanta.ClaveEmpleado)
        {
            cout<<"\nLa Clave no coincide...";
        }
        break;

    case 4:
        cout<<"\n\tCAMBIAR NOMBRE A QUIEN REPORTA"<<endl;
        cout<<"Ingrese la clave del empleado: ";
        cin>>clave;
        if(clave==JefePersonal.ClaveEmpleado)
        {
            JefePersonal.CambiarReportA(nRepo);
        }
        if(clave==JefePlanta.ClaveEmpleado)
        {
            JefePlanta.CambiarReportA(nRepo);
        }
        else if(clave!=JefePersonal.ClaveEmpleado&&JefePlanta.ClaveEmpleado)
        {
            cout<<"\nLa Clave no coincide...";
        }
        break;
    case 5:
        cout<<"\n\nSaliendo...";
        break;
    default:
        cout<<"Ingrese una opcion valida...";
    }
    }while(opc!=5);
    return 0;
}
