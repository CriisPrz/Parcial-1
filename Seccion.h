#ifndef SECCION_H_
#define SECCION_H_

#include "Estudiante.h"

const int MAX=3;

class Seccion {
private:
 int ptr;
 Estudiante AEstudiante[MAX];
public:
 Seccion();
 int getptr();
 void setAEstudiante(Estudiante elEstudiante);
 Estudiante getAEstudiante(int i);
 void OrdenarEstudiante();
 int Buscar(string nombreB);
 int Calcantap();
 int Calcantrep();
 float Calpromnot();
};

#endif /* SECCION_H_ */
