#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Mamiferos{
    private:
string nacimiento;
string alimentacion;
string NombreRaza;
string LugarNacimiento;
string raza2;
string alimentacion2;
string fecha2;
string lugar2;
    protected:
    public:
        Mamiferos(string,string,string, string, string, string, string, string);
        void raza();
        void TipoAlimentacion();
        void FechaNacimiento();
        void LugarDNacimiento();

friend Mamiferos& operator +(Mamiferos &x, Mamiferos &y){
x.nacimiento=x.nacimiento+y.alimentacion;
x.nacimiento=x.nacimiento+y.NombreRaza;
return x;
}

friend ostream& operator <<(ostream &x, Mamiferos &y){
x<<"Raza: "<<y.NombreRaza<<endl;
x<<"Alimentacion: "<<y.alimentacion<<endl;
x<<"Lugar de nacimiento: "<<y.LugarNacimiento<<endl;
return x;
}
friend istream& operator <<(istream &x, Mamiferos &y){
cout<<"Ingrese el tipo de alimento: ";
x>>y.alimentacion;
cout<<"Ingrese lugar de nacimiento: ";
x>>y.LugarNacimiento;
cout<<"Ingrese el nombre de la raza: ";
x>>y.NombreRaza;
return x;
}

};

Mamiferos::Mamiferos (string nac, string ali, string nom, string lug, string raz, string ali2,string fec,string lug2)
{
    nacimiento = nac;
    alimentacion = ali;
    NombreRaza = nom;
    LugarNacimiento = lug;
    raza2=raz;
    alimentacion2=ali2;
    fecha2=fec;
    lugar2=lug2;
}

void Mamiferos::TipoAlimentacion(){
cout<<"La dieta de Minino es: "<<alimentacion2<<endl;
cout<<"La dieta de EstrellaCirco es: "<<alimentacion<<endl;
}
void Mamiferos::LugarDNacimiento(){
cout<<"Lugar de nacimiento de Minino: "<<LugarNacimiento<<endl;
cout<<"Lugar de nacimiento de EstrellaCirco: "<<lugar2<<endl;
}
void Mamiferos::raza(){
cout<<"La raza de Minino es: "<<raza2<<endl;
cout<<"La raza de EstrellaCirco es: "<<NombreRaza<<endl;
}
void Mamiferos::FechaNacimiento(){
cout<<"La fecha de nacimiento de Minino es: "<<nacimiento<<endl;
cout<<"La fecha de nacimiento de EstrellaCirco es: "<<fecha2<<endl;
}




class Felino: public Mamiferos{
private:
    string circo;
protected:
    public:
        Felino(string, string, string, string, string, string, string,string,string);
        void NombreCirco();
};
Felino::Felino(string nac, string ali, string nom, string lug,string raz,string ali2,string fec,string lug2, string cir): Mamiferos(nac,ali,nom,lug,raz,ali2,fec,lug2){
circo= cir;
}
void Felino::NombreCirco(){
cout<<"Nombre del  circo: "<<circo<<endl;
cout<<"Introduzca el nuevo nombre del circo: "<<endl;
cin>>circo;
cout<<"El nuevo nombre del circo es: "<<circo<<endl;
}



class GatoDomestico: public Felino{
private:
    string dueno;
protected:
public:
    GatoDomestico(string,string, string, string, string, string, string, string,string,string);
    void DuenoGato();

};
GatoDomestico::GatoDomestico(string nac, string ali, string nom, string lug, string raz,string ali2,string fec,string lug2, string cir, string due): Felino (nac,ali,nom,lug,raz,ali2,fec,lug2,cir){
dueno=due;
}

void GatoDomestico::DuenoGato(){
cout<<"El nombre del dueno es: "<<dueno<<endl;
cout<<"Ingrese el nombre del nuevo dueno: "<<endl;
cin>>dueno;
cout<<"El nuevo dueno es: "<<dueno<<endl;
}



void pausa();
int main()
{

    bool bandera=false;
    char tecla;

    do{
        system("cls");
        cout<<"Eliga la opcion que desea realizar."<<endl;
        cout<<"____________________________"<<endl<<endl;
        cout<<"1. Imprimir dieta de Minino y de EstrellaCirco."<<endl;
        cout<<"2. Imprimir el año y lugar de nacimiento de Minino y EstrellaCirco."<<endl;
        cout<<"3. Cambiar el nombre del dueño de Minino."<<endl;
        cout<<"4. Imprimir la raza de Minino y de EtrellaCirco."<<endl;
        cout<<"5. Cambiar el nombre del circo en el que actua EstrellaCirco."<<endl;
        cout<<"6. Salir"<<endl<<endl;
        cout<<"Elige una opcion"<<endl;
        cin>>tecla;

        switch(tecla){
        case '1':{
        system("cls");
        Mamiferos ambos("18/Agosto/2000", "Carne cruda o cocida","Jaguar","Mexico","siberiano","Whiskas","15/sep/2001","Brasil");
        ambos.TipoAlimentacion();
        system("pause");
        }
        break;
        case '2':{
        system("cls");
        Mamiferos Ambos("18/Agosto/2000", "Carne cruda o cocida","Jaguar","Mexico","siberiano", "Whiskas","15/sep/2001","Brasil");
        Ambos.FechaNacimiento();
        Ambos.LugarDNacimiento();
        system("pause");
        }
        break;
        case '3':{
        system("cls");
        GatoDomestico Minino("18/Agosto/2000", "Carne cruda o cocida","Jaguar", "Mexico","siberiano","Whiskas","15/sep/2001","Brasil", "Los hermanos", "Francisco");
        Minino.DuenoGato();
        system("pause");
        }
        break;
        case '4':{
        system("cls");
        Mamiferos Ambos("18/Agosto/2000", "Carne cruda o cocida","Jaguar", "Mexico", "siberiano","Whiskas","15/sep/2001","Brasil");
        Ambos.raza();
        system("pause");
        }
        break;
        case '5':{
        system("cls");
        Felino EstrellaCirco("18/Agosto/2000", "Carne cruda o cocida","Jaguar", "Mexico","siberiano","Whiskas","15/sep/2001","Brasil", "Los hermanos");
        EstrellaCirco.NombreCirco();
        system("pause");
        }
        break;
        case '6':
            bandera=true;
            system("pause");
            break;

        }
   }
   while(bandera!=true);
    return 0;
}
void pausa()
{
cout<<"Pulsa cualquier tecla para continuar.";
getwchar();
getwchar();
}

