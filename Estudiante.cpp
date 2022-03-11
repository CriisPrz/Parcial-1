#include "Estudiante.h"

Estudiante::Estudiante() {
 // TODO Auto-generated constructor stub
 nombre = "";
 edad = 0;
 nota1 = 0;
 nota2 = 0;
 nota3 = 0;
}

void Estudiante::setnombre(string nom){
 nombre = nom;
}

string Estudiante::getnombre(){
 return nombre;
}

void Estudiante::setedad(int eda){
 edad = eda;
}

int Estudiante::getedad(){
 return edad;
}

float Estudiante::getNota1() {
 return nota1;
}

void Estudiante::setNota1(float not1) {
 nota1 = not1;
}

float Estudiante::getNota2() {
 return nota2;
}

void Estudiante::setNota2(float not2) {
 nota2 = not2;
}

float Estudiante::getNota3() {
 return nota3;
}

void Estudiante::setNota3(float not3) {
 nota3 = not3;
}

float Estudiante::Calnotaf() {
 float notaf;
 notaf = ((nota1 + nota2 + nota3) * 20) /100;
 return notaf;
}

string Estudiante::CalApRp() {
 string ApRp;
 if(Calnotaf() >= 10 && Calnotaf()<= 20)
  ApRp = "Aprobado";
 else
  if(Calnotaf() >= 0 && Calnotaf()< 10)
   ApRp = "Reprobado";
  else
   ApRp = "Error al verificar nota";
 return ApRp;
}
