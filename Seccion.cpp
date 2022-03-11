/*
 * Seccion.cpp
 *
 *  Created on: 23/02/2013
 *      Author: Francisco Velásquez
 */

#include "Seccion.h"

Seccion::Seccion() {

 ptr = 0;
}

int Seccion::getptr(){
 return ptr;
}

void Seccion::setAEstudiante(Estudiante elEstudiante){
 AEstudiante[ptr] = elEstudiante;
 ptr++;
}

Estudiante Seccion::getAEstudiante(int i){
 return AEstudiante[i];
}

void Seccion::OrdenarEstudiante(){
 Estudiante Aux;
 int i, j;
 for(i=0; i<ptr-1; i++){
  for (j=i+1; j<ptr; j++){
   if(AEstudiante[i].Calnotaf() > AEstudiante[j].Calnotaf())
   {
    Aux = AEstudiante[i];
    AEstudiante[i] = AEstudiante[j];
    AEstudiante[j] = Aux;
   }
  }
 }
}

int Seccion::Buscar(string nombreB) {
 int i=0, enc = -1;
 while(i<ptr && enc == -1){
  if(AEstudiante[i].getnombre() == nombreB)
   enc = i;
  else i++;
 }
 return enc;
}

int Seccion::Calcantap() {
 int cantap;
 int contap=0;
 for(int i=0; i < ptr; i++){
  if(AEstudiante[i].CalApRp() == "Aprobado")
   contap++;
 }
 cantap = contap;
 return cantap;
}

int Seccion::Calcantrep() {
 int cantrep;
 int contrep = 0;
 for(int i=0; i < ptr; i++){
  if(AEstudiante[i].CalApRp() == "Reprobado")
   contrep++;
 }
 cantrep = contrep;
 return cantrep;
}

float Seccion::Calpromnot() {
 float promnot;
 float acum=0;
 for(int i = 0; i<ptr;i++){
  acum = acum + AEstudiante[i].Calnotaf();
 }
 promnot = acum/ptr;
 return promnot;
}
