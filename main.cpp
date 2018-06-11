//
// Created by Wojciech Ciok on 06/11/2017.
//

#include <unistd.h>
#include <iostream>
#include "graph.h"
using namespace std;



int main() {
    Graph g;
    g.addVertex(2);
    g.addVertex(1);
    g.addVertex(4);
    g.addVertex(3);
    g.addConnection(1,2);
    g.addConnection(2,3);
    g.addConnection(3,4);
    g.addConnection(4,1);
    g.print();
    return 0;
}
