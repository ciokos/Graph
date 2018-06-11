//
// Created by Wojciech Ciok on 06/11/2017.
//
#include <stdio.h>
#include <iostream>
#include <vector>
#include "Vertex.h"
using namespace std;

Vertex::Vertex(int index) {
    this->index = index;
}


void Vertex::pair(int toPair) {
    connections.push_back(toPair);
}


void Vertex::unpair(int toUnpair) {

    //can't delete from an empty vector
    if(connections.empty())
        return;

    //search for the given vertex an delete it
    for(int x = 0; x < connections.size(); x++){
        if(connections[x] == toUnpair){
            connections.erase(connections.begin()+x);
            return;
        }
    }
}


bool Vertex::contains(int a) {

    //go through every connected vertex and search for 'a'
    for (int connection : connections) {
        if(connection == a){
            return true;
        }
    }
    return false;
}


void Vertex::print() {
    for (int connection : connections) {
        cout << connection << " ";
    }
    cout << endl;
}


bool Vertex::isEven() {

    //check if size of connections is even
    if(connections.size()%2==0)
        return true;
    return false;
}
