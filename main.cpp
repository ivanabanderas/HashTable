#include "HashTable.h"

int main() {
    // Tamaño de la tabla hash
    int tableSize = 10;
    HashTable hashTable(tableSize);

    // Insertar elementos
    hashTable.insert(5);
    hashTable.insert(15);
    hashTable.insert(25);

    hashTable.insert(2);
    hashTable.insert(10);

    // Mostrar la tabla hash
    std::cout << "Tabla Hash:\n";
    hashTable.display();

    // Buscar elementos
    std::cout << "\nBuscar 15: " << (hashTable.search(15) ? "Encontrado" : "No encontrado") << "\n";
    std::cout << "Buscar 9: " << (hashTable.search(9) ? "Encontrado" : "No encontrado") << "\n";

    // Eliminar un elemento
    hashTable.remove(15);
    std::cout << "\nDespués de eliminar 15:\n";
    hashTable.display();

    return 0;
}