#include "Estudiante.h"
#include "Seccion.h"
#include <stdlib.h>
#include <stdio.h>
#include <fstream>

void IESeccion(Seccion & laSeccion);
void IS(Seccion laSeccion);
void IBuscar(Seccion laSeccion);
void Menu(Seccion laSeccion);
void Msjsalida(Seccion laSeccion);
void EstApRepProm(Seccion laSeccion);

int main(){
 Seccion laSeccion;
 Menu(laSeccion);
 Msjsalida(laSeccion);
 return 0;
}

void EstApRepProm(Seccion laSeccion){
 cout  << "La cantidad de estudiantes aprobados es de: " << laSeccion.Calcantap() << endl;
 cout  << "La cantidad de estudiantes reprobados es de: " << laSeccion.Calcantrep() << endl;
 cout  << "El promedio de notas es de " << laSeccion.Calpromnot() << " ptos"<< endl;
 ofstream archivo;  
 archivo.open("ARP.txt");

 archivo  << "La cantidad de estudiantes aprobados es de: " << laSeccion.Calcantap() << endl;
 archivo  << "La cantidad de estudiantes reprobados es de: " << laSeccion.Calcantrep() << endl;
 archivo  << "El promedio de notas es de " << laSeccion.Calpromnot() << " ptos"<< endl;

 archivo.close();

 system("pause>null");
}

void Msjsalida(Seccion laSeccion){
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << "                        GRACIAS POR USAR FRANCVES SYSTEM" << endl;
 cout << "                                      @francves" << endl;
}

void Menu(Seccion laSeccion){
 system("cls");
 int  variable;
 cout << endl;
 cout << "BIENVENIDO AL MENU DE USUARIO, PORFAVOR INGRESE UNA DE LAS SIGUIENTES OPCIONES" << endl;
 cout << "______________________________________________________________________________" << endl;
 cout << "1 Ingresar datos (si ya ha ingresado datos anteriormente elija otra opcion)" << endl;
 cout << "2 Buscar datos de estudiante a travez de su nombre" << endl;
 cout << "3 Informe de estudiantes ordenados por su nota de menor a mayor" << endl;
 cout << "4 Cantidad de estudiantes aprobados, reprobados y promedio de notas de la seccion" << endl;
 cout << "0 SALIR" << endl;
 cin >> variable;
 switch(variable){
 case 1:
  system("cls");
  IESeccion(laSeccion);
  Menu(laSeccion);
  break;
 case 2:
  system("cls");
 IBuscar(laSeccion);
 Menu(laSeccion);
  break;
 case 3:
  system("cls");
  IS(laSeccion);
  Menu(laSeccion);
  break;
 case 4:
  system("cls");
  EstApRepProm(laSeccion);
  Menu(laSeccion);
  break;
 case 0:
  system("cls");
  Msjsalida(laSeccion);
  break;
 default:
  cout << endl;
  cout << "Porfavor solo ingrese opcion 1 - 2 - 3 - 4 - 0" << endl;
  break;
 }
 system("pause>null");
}

void IEEstudiante(Estudiante & elEstudiante){
 string nom;
 int eda;
 float not1, not2, not3;
 cout << "Ingrese el Nombre del estudiante" << endl;
 cin >> nom;
 elEstudiante.setnombre(nom);
 cout << "Ingrese la edad del estudiante" << endl;
 cin >> eda;
 elEstudiante.setedad(eda);
 cout << "Ingrese las 3 notas del estudiante una por una" << endl;
 cin >> not1;
 elEstudiante.setNota1(not1);
 cin >> not2;
 elEstudiante.setNota2(not2);
 cin >> not3;
 elEstudiante.setNota3(not3);
}

void IESeccion(Seccion & laSeccion){
 Estudiante elEstudiante;
 for(int i=0; i < MAX; i++){
  IEEstudiante(elEstudiante);
  laSeccion.setAEstudiante(elEstudiante);
  laSeccion.OrdenarEstudiante();
 }
 cout << endl;
 cout << "Se han ingresado todos los datos correctamente " << endl;
 cout << "Presione cualquier tecla para ser redirigido al menu nuevamente" << endl;
 system("pause>null");
}

void IS(Seccion laSeccion){
 int i;
 cout << "                     INFORME ESTUDIANTES DE LA SECCION                    " << endl;
 cout << "__________________________________________________________________________" << endl;
 cout << "Nombre             Edad                Nota             Aprobado/Reprobado" << endl;
 for(i=0;i<MAX;i++){
  cout << laSeccion.getAEstudiante(i).getnombre() << "                 " << laSeccion.getAEstudiante(i).getedad() << "                     "<< laSeccion.getAEstudiante(i).Calnotaf() << "                   "<< laSeccion.getAEstudiante(i).CalApRp() <<endl;
 }
 cout << endl;
 cout << "Presione cualquiere tecla para regresar al menu" << endl;

 ofstream archivo;

 archivo.open("reporte.txt");

 archivo << "                     INFORME ESTUDIANTES DE LA SECCION                    " << endl;
  archivo << "__________________________________________________________________________" << endl;
  archivo << "Nombre             Edad                Nota             Aprobado/Reprobado" << endl;
  for(i=0;i<MAX;i++){
   archivo << laSeccion.getAEstudiante(i).getnombre() << "                 " << laSeccion.getAEstudiante(i).getedad() << "                     "<< laSeccion.getAEstudiante(i).Calnotaf() << "                   "<< laSeccion.getAEstudiante(i).CalApRp() <<endl;
  }
  archivo << endl;
  archivo << "Presione cualquiere tecla para regresar al menu" << endl;

 system("pause>null");
}

void IBuscar(Seccion laSeccion){
 Seccion OSeccion;
 Estudiante OEstudiante;
 string nombreB;
 int posi;
 cout << "Ingrese el nombre a buscar: " << endl;
 cin >> nombreB;
 posi = laSeccion.Buscar(nombreB);
 if(posi != -1){
  cout << "El nombre existe en la posicion: " << posi << endl;
  cout << "La edad es:  " << laSeccion.getAEstudiante(posi).getedad() << endl;
  cout << "La nota es: " << laSeccion.getAEstudiante(posi).Calnotaf() << endl;
  cout << "El estudiante ha " << laSeccion.getAEstudiante(posi).CalApRp() << " la materia" << endl;
 }
 else{
  cout <<  "No existen datos del estudiante " << nombreB <<  endl;}
 cout << endl;
 cout << "Presione cualquiere tecla para regresar al menu" << endl;
 system("pause>null");
}
