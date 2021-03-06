/*======================================================================
COIS-4310H Assignment 3 - Dijkstra's Network
Name: Edge.cpp
Written By: Trevor Gilbert 
Purpose: Edge Class
For this algorithm we are representing our network as a direction less graph.
Each network connection is represented by an edge. Each edge is given a weight, 
this weight represents many things that may reduce reduce the speed of transport 
such as other traffic, type of connection, distance, etc.


Compilation: Please use the provided Make file that will make the result
----------------------------------------------------------------------*/

#include "Edge.hpp"

/* Default Constructor
    Directionless edge so does not matter which is which vertex is which.
    Given: vertex one - first vertex of the edge.
           vertex two - second vertex of the edge. 
           int cost - weight of the edge*/
Edge::Edge(Vertex *one, Vertex *two, int cost)
{
    weight = cost;
    ends[0] = one;
    ends[1] = two;
}

/* Deconstructor
    This will delete remove the edge from each of the Vertex's list of edges.
*/
Edge::~Edge() 
{    
    ends[0]->Edges.remove(this);
    ends[1]->Edges.remove(this);
}

/* Overloaded == Operator */
bool Edge::operator== (const Edge& e)
{
    // Make sure everything is the same
    if ( (weight == e.weight) && (ends[0] == e.ends[0]) && (ends[1] == e.ends[1]) )
        return true;
    return false;
}

/* Overloaded != Operator */
bool Edge::operator!= (const Edge& e)
{
    return !operator==(e);
}
