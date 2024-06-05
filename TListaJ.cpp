#include "TListaJ.h"

TLista::TLista() {
    Primero = nullptr;
    Ultimo = nullptr;
    Cursor = nullptr;
}

void TLista::inicializar() {
    Primero = nullptr;
    Ultimo = nullptr;
    Cursor = nullptr;
}

bool TLista::Vacia() {
    return Primero == nullptr;
}

void TLista::Insertar(TNodo^ nodo) {
    if (Vacia()) {
        Primero = nodo;
        Ultimo = nodo;
        Cursor = nodo;
        nodo->pEnlaceAtras = Ultimo;
        nodo->pEnlaceAdelante = Primero;
    }
    else {
        Ultimo->pEnlaceAdelante = nodo;
        nodo->pEnlaceAtras = Ultimo;
        Ultimo = nodo;
        Cursor = nodo;
        Primero->pEnlaceAtras = nodo;
        nodo->pEnlaceAdelante = Primero;
    }
}

TNodo^ TLista::Eliminarprimero() {
    if (Vacia())
        return nullptr;
    else {
        if (Primero == Ultimo)  //si cumple es que un solo elemento
            inicializar();
        else {
            if (Cursor == Primero) {
                Cursor = Primero->pEnlaceAdelante;
                Primero = Primero->pEnlaceAdelante;
                Primero->pEnlaceAtras = Ultimo;
                Ultimo->pEnlaceAdelante = Primero;
            }
        }
        return Primero;
    }
}

TNodo^ TLista::Eliminar() {
    TNodo^ pTemp;
    TNodo^ qTemp;
    if (Cursor == nullptr)
        return nullptr;
    else {
        if (Cursor == Primero)
            return Eliminarprimero();
        else {
            pTemp = getAntCursor();
            qTemp = getProxCursor();
            if (Cursor == Ultimo) {
                Ultimo = pTemp;
                Cursor = pTemp;
                Ultimo->pEnlaceAdelante = Primero;
                Primero->pEnlaceAtras = Ultimo;
            }
            else {
                pTemp->pEnlaceAdelante = Cursor->pEnlaceAdelante;
                qTemp->pEnlaceAtras = Cursor->pEnlaceAtras;
                Cursor = pTemp->pEnlaceAdelante;
            }
            return Cursor;
        }
    }
}

TNodo^ TLista::getPrimero() 
{
    return Primero;
}

TNodo^ TLista::getUltimo() 
{
    return Ultimo;
}

TNodo^ TLista::getCursor() 
{
    return Cursor;
}

TNodo^ TLista::getAntiguo()
{
    return Antiguo;
}

TNodo^ TLista::getProxCursor() 
{
    return Cursor->pEnlaceAdelante;
}

TNodo^ TLista::getAntCursor() 
{
    return Cursor->pEnlaceAtras;
}

void TLista::setCursor(TNodo^ p) {
    Cursor = p;
}

TListaJ::TListaJ() { }

void TListaJ::crearLista(int CodigoProfesor, String^ Nombre, String^ Apellido, int Edad, String^ Sexo, int Celular, String^ Direccion, String^ Ingreso, String^ Categoria, int Salario, String^ Titulo, int Antiguedad) {
    Insertar(gcnew TNodoJ(CodigoProfesor, Nombre, Apellido, Edad, Sexo, Celular, Direccion, Ingreso, Categoria, Salario, Titulo, Antiguedad));
}

bool TListaJ::BuscarProfesor(int nP) {
    TNodoJ^ p;
    bool aux = false;
    p = (TNodoJ^)getPrimero();
    while (p != nullptr) {
        if (p->getCodigoProfesor() == nP) {
            aux = true;
            Cursor = p;
            break;
        }
        p = (TNodoJ^)p->pEnlaceAdelante;
    }
    return aux;
}

int TListaJ::contarAsignatura(int nP) {
    TNodoJ^ p;
    TNodoAsignatura^ q;
    int aux = 0;

    BuscarProfesor(nP);
    p = (TNodoJ^)getCursor();
    q = (TNodoAsignatura^)p->TListaTrabajador->getPrimero();
    while (true) {
        if (q == p->TListaTrabajador->Ultimo) {
            return aux;
        }
        else {
            q = (TNodoAsignatura^)q->pEnlaceAdelante;
            aux++;
        }
    }
}

TNodoJ^ TListaJ::getAnterior(int nP) {
    if (BuscarProfesor(nP))
        return (TNodoJ^)getAntCursor();
    else
        return nullptr;
}

TNodoJ^ TListaJ::getPosterior(int nP) {
    if (BuscarProfesor(nP))
        return (TNodoJ^)getProxCursor();
    else
        return nullptr;
}

void TListaJ::InsertarAsignatura(int nP, int id, String^ nombre, String^ descripcion, int cantidadHoras, String^ fechaComienzo) {
    TNodoJ^ p = gcnew TNodoJ();

    if (BuscarProfesor(nP)) {
        p = (TNodoJ^)getCursor();
        p->TListaTrabajador->Insertar(gcnew TNodoAsignatura(id, nombre, descripcion, cantidadHoras, fechaComienzo));
    }
    else {
        MessageBox::Show("no se existe el numero de brigada que introdujo");
    }
}

void TListaJ::EliminarAsignatura(int nP, int NId) {
    TNodoJ^ p;
    TNodoAsignatura^ q;
    BuscarProfesor(nP);
    p = (TNodoJ^)getCursor();
    q = (TNodoAsignatura^)p->TListaTrabajador->getPrimero();
    while (true) {
        if (q->ID == NId) {
            p->TListaTrabajador->Cursor = q;
            break;
        }
        else {
            q = (TNodoAsignatura^)q->pEnlaceAdelante;
        }
    }
    p->TListaTrabajador->Eliminar();
}

void TListaJ::MostrarAsignatura(int nP, DataGridView^ dgv) {
    TNodoJ^ p;
    TNodoAsignatura^ q;
        int w;
    int n, i;

    n = dgv->RowCount - 1;

    BuscarProfesor(nP);
    p = (TNodoJ^)getCursor();
    q = (TNodoAsignatura^)p->TListaTrabajador->getPrimero();

    w = contarAsignatura(nP);

    dgv->Rows->Clear();
    for (i = 0; i <= w; i++) {
        if (q == nullptr)
            break;
        else {
            dgv->Rows->Add();
            dgv->Rows[i]->Cells[0]->Value = q->getID();
            dgv->Rows[i]->Cells[1]->Value = q->getNombre();
            dgv->Rows[i]->Cells[2]->Value = q->getDescripcion();
            dgv->Rows[i]->Cells[3]->Value = q->getCantidadDeHoras();
            dgv->Rows[i]->Cells[4]->Value = q->getFechaQueComenzoAImpartirla();
            q = (TNodoAsignatura^)q->pEnlaceAdelante;
        }
    }
}

bool TListaJ::EliminarLista() {
    if (getCursor() != nullptr) {
        Eliminar();
        return true;
    }
    else {
        return false;
    }
}

TNodoJ^ TListaJ::ObtenerProfesorMasAntiguo(int nP)
{
    if (Vacia()) {
        return nullptr;
    }

    TNodoJ^ q = (TNodoJ^)getPrimero();
    TNodoJ^ masAntiguo = q;

    do {
        if (q->AntiguedadProfesor > masAntiguo->AntiguedadProfesor) {
            masAntiguo = q;
        }
        q = (TNodoJ^)q->pEnlaceAdelante;
    } while (q != Primero);

    return masAntiguo;

}