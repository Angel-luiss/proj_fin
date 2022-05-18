#include <iostream>
#include <string>
#include "Marcas.h"

using namespace std;
int main() {
    string  marca;
    int idmarca = 0, op = 0;
    Marcas l = Marcas(idmarca, marca);
    cout << "1. Insertar datos\n2. Ver informacion\n3. Actualizar datos\n4. Eliminar informacion";
    cout << "\nIngrese el numero de la accion que desea realizar: ";
    cin >> op;


    if (op == 1) {
        cin.ignore();
        cout << "Ingrese Marca: ";
        getline(cin, marca);
        

        Marcas p = Marcas(idmarca, marca);
        p.crear();
    }
    if (op == 2) {
        l.leer();
    }
    if (op == 3) {
        l.leer();
        cout << "\nIngrese el id de la marca que desea actualizar: ";
        cin >> idmarca;
        cin.ignore();
        cout << "Ingrese Marca: ";
        getline(cin, marca);
        
        Marcas p = Marcas(idmarca, marca);
        p.actualizar();
    }
    if (op == 4) {
        l.leer();
        cout << "\nIngrese el id del proveedor que desea eliminar: ";
        cin >> idmarca;
        Marcas p = Marcas(idmarca, marca);
        p.eliminar();
    }
}