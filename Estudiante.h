#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

#include <iostream>
#include <string.h>
using namespace std;

class Estudiante {
private:
 string nombre;
 int edad;
 float nota1;
 float nota2;
 float nota3;
public:
 Estudiante();
 void setnombre(string nom);
 string getnombre();
 void setedad(int eda);
 int getedad();
 float getNota1();
 void setNota1(float not1);
 float getNota2();
 void setNota2(float not2);
 float getNota3();
 void setNota3(float not3);
 float Calnotaf();
 string CalApRp();
};

#endif /* ESTUDIANTE_H_ */
