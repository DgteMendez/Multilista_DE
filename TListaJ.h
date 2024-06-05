#pragma once

#include "TNodo.h"

using namespace System::Windows::Forms;

public ref class TLista {
public:
    TNodo^ Primero;
    TNodo^ Ultimo;
    TNodo^ Cursor;
    TNodo^ Antiguo;

    TLista();
    void inicializar();
    bool Vacia();
    void Insertar(TNodo^ nodo);
    TNodo^ Eliminarprimero();
    TNodo^ Eliminar();
    TNodo^ getPrimero();
    TNodo^ getUltimo();
    TNodo^ getCursor();
    TNodo^ getAntiguo();
    TNodo^ getProxCursor();
    TNodo^ getAntCursor();
    void setCursor(TNodo^ p);
};

public ref class TListaJ : public TLista {
public:
    TListaJ();
    void crearLista(int CodigoProfesor, String^ Nombre, String^ Apellido, int Edad, String^ Sexo, int Celular, String^ Direccion, String^ Ingreso, String^ Categoria, int Salario, String^ Titulo, int Antiguedad);
    bool BuscarProfesor(int nP);
    int contarAsignatura(int nP);
    TNodoJ^ getAnterior(int nP);
    TNodoJ^ getPosterior(int nP);
    void InsertarAsignatura(int nP, int id, String^ nombre, String^ descripcion, int cantidadHoras, String^ fechaComienzo);
    void EliminarAsignatura(int nP, int NId);
    void MostrarAsignatura(int nP, DataGridView^ dgv);
    bool EliminarLista();
    TNodoJ^ ObtenerProfesorMasAntiguo(int nP);
};