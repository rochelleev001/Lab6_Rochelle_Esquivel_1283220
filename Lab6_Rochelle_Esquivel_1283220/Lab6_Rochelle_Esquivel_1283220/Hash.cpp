#include "Hash.h"
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <cstdlib>
#include <list>

int Hash::hashFunction(int key) {
    return key % hashGropus;
}
void Hash::insertItem(int key, string value) {
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for (; bItr != end(cell); bItr++) {
        if (bItr->first == key) {
            keyExists = true;
            bItr->second = value;
            break;
        }
    }
    if (!keyExists) {
        cell.emplace_back(key, value);
    }
    return;
}
void Hash::printTable() {
    for (int i = 0; i < hashGropus; i++) {
        if (table[i].size() == 0)continue;
        auto bItr = table[i].begin();
        for (; bItr != table[i].end(); bItr++) {
            cout << " " << bItr->first << endl;
        }
    }
    return;
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
            cout << "El número se encuentra en la posición: " << hashValue << endl;
            break;
        }
    }
    if (!keyExists) {
        cout << "El número no se encuentra en el arreglo" << endl;
    }
    return;
}
