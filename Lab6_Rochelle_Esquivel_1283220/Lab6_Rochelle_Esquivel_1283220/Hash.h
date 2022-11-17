#pragma once
#include <iostream>
#include <cstdlib>
#include <list>
#include <cstring>

//con ayuda de:https://www.youtube.com/watch?v=2_3fR-k-LzI

ref class Hash
{
private:
    static const int hashGropus = 10;
    list;<pair<int, string >> table[hashGropus];
public:
    int Hash::hashFunction(int key);
    void Hash::insertItem(int key, string value);
    void Hash::searchTable(int key);
    void Hash::printTable();
};

