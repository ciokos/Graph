//
// Created by Wojciech Ciok on 06/11/2017.
//
#include <stdio.h>
#include <vector>
using namespace std;

class Vertex {
private:

    //every vertex has an index (name)
    int index;

    //every vertex keeps a vector of vertices it is connected to
    vector<int> connections;

public:

    explicit Vertex(int index);

    //adds toPair to connections
    void pair(int toPair);

    //deletes toUnpair from  connections
    void unpair(int toUnpair);

    //check if connections contains 'a'
    bool contains(int a);

    void print();

    //check if this vertex is of an even degree
    bool isEven();

    int getIndex(){
        return index;
    }

    vector<int> getConnecions(){
        return connections;
    }
};