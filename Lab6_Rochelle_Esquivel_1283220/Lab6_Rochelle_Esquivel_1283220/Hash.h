#pragma once
#include <iostream>
#include <cstdlib>
#include <list>

ref class Hash
{
private:
    static const int hashGropus = 10;
    list<pair<int, string >> table[hashGropus];
public:
    int hashFunction(int key);
    void insertItem(int key, string value);
    void searchTable(int key);
    void printTable();
};

