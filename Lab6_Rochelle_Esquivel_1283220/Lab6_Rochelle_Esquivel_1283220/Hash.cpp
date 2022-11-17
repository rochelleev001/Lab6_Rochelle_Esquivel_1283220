#include "Hash.h"
int Hash::hashFunction(int key) {
    return key % hashGropus;
}
void Hash::searchTable(int key) {
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    int i = 0;
    for (; bItr != end(cell); bItr++) {
        if (bItr->first == key) {
            keyExists = true;
            cout << "El numero fue encontrado en la posición: " << hashValue << endl;
            break;
        }
    }
    if (!keyExists) {
        cout << "El número no fue encontrado en el arreglo" << endl;
    }
    return;


}