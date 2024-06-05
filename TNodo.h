#pragma once

using namespace System;
ref class TListaJ;

public ref class TNodo {
public:
    TNodo^ pEnlaceAdelante;
    TNodo^ pEnlaceAtras;

    TNodo();
};

public ref class TNodoAsignatura : public TNodo {
public:
    int ID;
    String^ Nombre;
    String^ Descripcion;
    int CantidadDeHoras;
    String^ FechaQueComenzoAImpartirla;

    TNodoAsignatura(int identificador, String^ nombre, String^ descripcion, int cantidadDeHoras, String^ fechaComienzo);
    int getID();
    String^ getNombre();
    String^ getDescripcion();
    int getCantidadDeHoras();
    String^ getFechaQueComenzoAImpartirla();
};

public ref class TNodoJ : public TNodo {
public:
    int CodigoProfesor;
    String^ NombreProfesor;
    String^ ApellidoProfesor;
    int EdadProfesor;
    String^ SexoProfesor;
    int CelularProfesor;
    String^ DireccionProfesor;
    String^ FechaDeIngreso;
    String^ CategoriaProfesor;
    int SalarioProfesor;
    String^ TituloUniversitario;

public:
    int AntiguedadProfesor;

public:
    TListaJ^ TListaTrabajador;

    TNodoJ();
    TNodoJ(int idProfesor, String^ Nombre, String^ Apellido, int Edad, String^ Sexo, int Celular, String^ Direccion, String^ Ingreso, String^ Categoria, int Salario, String^ Titulo, int Antiguedad);
    int getCodigoProfesor();
    String^ getNombreProfesor();
    String^ getApellidoProfesor();
    int getEdadProfesor();
    String^ getSexoProfesor();
    int getCelularProfesor();
    String^ getDireccionProfesor();
    String^ getFechaDeIngreso();
    String^ getCategoriaProfesor();
    int getSalarioProfesor();
    String^ getTituloUniversitario();
    int getAntiguedadProfesor();
};