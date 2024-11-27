// HashTable.h
#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <list>
#include <vector>


enum class collisionResolutionMethod{
    LINEAR_PROBING,
    QUADRATIC_PROBING
};

class HashTable {
private:
    std::vector<int> table;
    int tableSize;
    int numElements;
    collisionResolutionMethod collisionResolutionMethod;

    // Función de hash que utiliza el operador módulo
    int hashFunction(int key) const;

    int linearProbing(int index) const;
    int quadraticProbing(int index) const;


public:
    // Constructor
    HashTable(int size, collisionResolutionMethod method);

    // Métodos de la tabla hash
    void insert(int key);
    bool search(int key) const;
    void remove(int key);
    void display() const;
};

#endif // HASHTABLE_H