#ifndef VERTEX_HEADER
#define VERTEX_HEADER

#include <string>
#include <vector>

using std::vector;
using std::string;

class vertex {
   public:
    string val;
    vector<vertex> edges;
    vertex(string name);
    void print();
};

#endif
