struct Nodo {
    int dato;
    Nodo *izq;
    Nodo *der;
};

// Función para crear un nuevo nodo
Nodo *nuevoNodo(int valor) {
    Nodo *nodo = new Nodo();
    nodo->dato = valor;
    nodo->izq = NULL;
    nodo->der = NULL;
    return nodo;
}

// Recorrido Preorden: Raíz ? Izquierda ? Derecha
void preorden(Nodo *nodo) {
    if (nodo != NULL) {
        cout << nodo->dato << " ";
        preorden(nodo->izq);
        preorden(nodo->der);
    }
}

// Recorrido Inorden: Izquierda ? Raíz ? Derecha
void inorden(Nodo *nodo) {
    if (nodo != NULL) {
        inorden(nodo->izq);
        cout << nodo->dato << " ";
        inorden(nodo->der);
    }
}

// Recorrido Postorden: Izquierda ? Derecha ? Raíz
void postorden(Nodo *nodo) {
    if (nodo != NULL) {
        postorden(nodo->izq);
        postorden(nodo->der);
        cout << nodo->dato << " ";
    }
