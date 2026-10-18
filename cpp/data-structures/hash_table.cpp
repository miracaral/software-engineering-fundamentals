#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class HashTable
{
    private:
        static const int hashGroups = 10;
        list<pair<int, string> > table[hashGroups];

    public:
        bool isEmpty() const;
        int hashFunction(int key);
        void insertItem(int key, string value);
        void removeItem(int key);
        string searchTable(int key);
        void printTable();        
};

bool HashTable::isEmpty() const
{
    int sum {};
    for(int i{}; i < hashGroups; i++)
    {
        sum += table[i].size();
    }

    if(!sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int HashTable::hashFunction(int key)
{
    return key % hashGroups;
}

void HashTable::insertItem(int key, string value)
{
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue];
    auto bItr = beg in(cell);
    bool keyExists = false;
    for(; bItr != end(cell); bItr++)
    {
        if(bItr->first == key)
        {
            keyExists = true;
            bItr->second = value;
            cout << "[WARNING] Key exists. Value replaced." << endl;
            break;
        }
    }

    if(!keyExists)
    {
        cell.emplace_back(key, value);
    }

    return;
}

void HashTable::removeItem(int key)
{
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for(; bItr != end(cell); bItr++)
    {
        if(bItr->first == key)
        {
            keyExists = true;
            bItr = cell.erase(bItr);
            cout << "[INFO] Item removed." << endl;
            break;
        }
    }

    if(!keyExists)
    {
        cout << "[WARNING] Key not found. Pair not removed." << endl;
    }

    return;
} 

void HashTable::printTable()
{
    for(int i{}; i < hashGroups; i++)
    {
        if(table[i].size() == 0) continue;

        auto bItr = table[i].begin();
        for(; bItr != table[i].end(); bItr++)
        {
            cout << "[INFO] Key: " << bItr->first << " Value: " << bItr->second << endl;
        }
    }

    return;
}

int main()
{
    HashTable ht;
    if(ht.isEmpty())
    {
        cout << "[INFO] Table is empty." << endl;
    }
    else
    {
        cout << "[INFO] Table is not empty." << endl;
    }

    ht.insertItem(905, "Jim");
    ht.insertItem(201, "Tom");
    ht.insertItem(332, "Bob");
    ht.insertItem(124, "Sally");
    ht.insertItem(512, "Sue");
    ht.insertItem(632, "Shawn");
    ht.insertItem(433, "Tina");
    ht.insertItem(765, "Maya");
    ht.insertItem(543, "Miguel");
    ht.insertItem(123, "Olivia");
    ht.insertItem(432, "Tim");
    ht.insertItem(765, "Mia");
    ht.printTable();

    ht.removeItem(543);
    ht.removeItem(100);
    ht.printTable();

    if(ht.isEmpty())
    {
        cout << "[INFO] Table is empty." << endl;
    }
    else
    {
        cout << "[INFO] Table is not empty." << endl;
    }

    return 0; 
}