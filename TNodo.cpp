#include "TNodo.h"
#include "TListaJ.h"

TNodo::TNodo() {
    pEnlaceAdelante = nullptr;
    pEnlaceAtras = nullptr;
}

TNodoAsignatura::TNodoAsignatura(int identificador, String^ nombre, String^ descripcion, int cantidadDeHoras, String^ fechaComienzo) {
    ID = identificador;
    Nombre = nombre;
    Descripcion = descripcion;
    CantidadDeHoras = cantidadDeHoras;
    FechaQueComenzoAImpartirla = fechaComienzo;
}

int TNodoAsignatura::getID() 
{
    return ID;
}

String^ TNodoAsignatura::getNombre() 
{
    return Nombre;
}

String^ TNodoAsignatura::getDescripcion() 
{
    return Descripcion;
}

int TNodoAsignatura::getCantidadDeHoras()
{
    return CantidadDeHoras;
}

String^ TNodoAsignatura::getFechaQueComenzoAImpartirla()
{
    return FechaQueComenzoAImpartirla;
}

TNodoJ::TNodoJ() {
    TListaTrabajador = gcnew TListaJ();
}

TNodoJ::TNodoJ(int idProfesor, String^ Nombre, String^ Apellido, int Edad, String^ Sexo, int Celular, String^ Direccion, String^ Ingreso, String^ Categoria, int Salario, String^ Titulo, int Antiguedad) {
    CodigoProfesor = idProfesor;
    NombreProfesor = Nombre;
    ApellidoProfesor = Apellido;
    EdadProfesor = Edad;
    SexoProfesor = Sexo;
    CelularProfesor = Celular;
    DireccionProfesor = Direccion;
    FechaDeIngreso = Ingreso;
    CategoriaProfesor = Categoria;
    SalarioProfesor = Salario;
    TituloUniversitario = Titulo;
    AntiguedadProfesor = Antiguedad;
    TListaTrabajador = gcnew TListaJ();
}

int TNodoJ::getCodigoProfesor() {
    return CodigoProfesor;
}

String^ TNodoJ::getNombreProfesor() {
    return NombreProfesor;
}

String^ TNodoJ::getApellidoProfesor() {
    return ApellidoProfesor;
}

int TNodoJ::getEdadProfesor()
{
    return EdadProfesor;
}

String^ TNodoJ::getSexoProfesor()
{
    return SexoProfesor;
}

int TNodoJ::getCelularProfesor()
{
    return CelularProfesor;
}

String^ TNodoJ::getDireccionProfesor()
{
    return DireccionProfesor;
}

String^ TNodoJ::getFechaDeIngreso()
{
    return FechaDeIngreso;
}

String^ TNodoJ::getCategoriaProfesor()
{
    return CategoriaProfesor;
}

int TNodoJ::getSalarioProfesor()
{
    return SalarioProfesor;
}

String^ TNodoJ::getTituloUniversitario()
{
    return TituloUniversitario;
}

int TNodoJ::getAntiguedadProfesor()
{
    return AntiguedadProfesor;
}

