#ifndef ALUMNO_H
#define ALUMNO_H
#include <cstring>
class Alumno
{
private:
    int dni;
    char * nombres;
    char * apellido;
    char * email;
public:
    Alumno(int dni, char * nombres,   char * apellido);
    virtual char * getCondicion()= 0;
    char *getNombres() const;
    char *getApellido() const;
    char *getEmail() ;
};

#endif // ALUMNO_H
