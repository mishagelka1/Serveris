// Serveris.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Vertex {
public:
    int number;
    Vertex *connected;
//public:
    Vertex(int a) {
        this->number = a;
    }
    Vertex(int a, Vertex *next) {
        this->number = a;
        this->connected = next;
    }    
    
    // methods
    void addConnection(Vertex *b) {
        this->connected = b;
    }
};

void printAllConnectons(Vertex* a) {
    while (a->connected != NULL) {
        cout << a->number << " " << endl;
        a = a->connected;
        printAllConnectons(a);
    }
}

class Graph : Vertex {
    
};

int main()
{
    char whitespace;
    Vertex a = Vertex(3);
    Vertex b = Vertex(2);
    Vertex c = Vertex(50, &b);
    Vertex d = Vertex(8, &c);
    Vertex e = Vertex(31, &d);

    printAllConnectons(&e);

    cin >> whitespace;
    Vertex x = Vertex(99);

    b.addConnection(&a);
    printAllConnectons(&e);
    return 0;
}


