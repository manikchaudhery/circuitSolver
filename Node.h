/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.h
 * Author: chaudhe2
 *
 * Created on November 7, 2017, 8:46 PM
 */

#ifndef NODE_H
#define NODE_H

#define MAX_RESISTORS_PER_NODE 5
#include <iostream>


using namespace std;
#include "ResistorList.h"
#include "Resistor.h"
class Node{
private:




    //new stuff
    int NodeID;
    Node* next;
    ResistorList r1;//object inside the ResistorList
    
    double voltage;
    bool setV;
    double min_iteration_change;
    
public:
    Node();
    ~Node();
    Node(int nodeID, Node* position);

    void print(int nodeIndex, int node1);
    
    ResistorList& get_resistorList();
    Node* getNextNode() const;
    int get_NodeID() const;
    void addNodeID(int nodeID);
    void set_next_node(Node* r);
    void set_voltage(double volt_);
    void set_voltage_without_bool(double volt_);
    void unset_voltage();
    bool get_set_bool() const;
    void set_minimum_change(double min_change);
    double get_minimum_change() const;
    double get_voltage() const;

};

#endif /* NODE_H */

