#include <iostream>
#include <string>
#include "vertex.h"

using std::string;
using std::cout;
using std::endl;


vertex::vertex(string name) {
    val = name;   
}

void vertex::print() {
    cout << val << endl;   
}

int main() {
    vertex::vertex v0("chicken");   
    v0.print();
    return 0;   
}
