/*======================================================================
COIS-4310H Assignment 3 - Dijkstra's Network
Name: Vertex.cpp
Written By: Trevor Gilbert 
Purpose: Vertex Class
Each vertex is a device on the network (end user, server, router, switch). 

Compilation: Please use the provided Make file that will make the result
----------------------------------------------------------------------*/

#include "Vertex.hpp"

/* Vertex Constructor
    Given: int identification - identification ID of the vertex.
*/
Vertex::Vertex(int identification) 
{
    ID = identification;
}

/* Vertex Deconstructor
    Remove all edges associated with this
*/
Vertex::~Vertex()
{
    // Loop until we have no edges for this vertex
    while (Edges.size() != 0)
    {
        // Get the front edge
        Edge* x = Edges.front();            
        // Call the deconstructor which will remove the pointer from the list too.
        delete x;
    }
}


/* Vertex:get_ID
    Returns the id
    Returns: int - ID of the vertex*/
int Vertex::get_ID(void) 
{
    return ID;
}

/* Vertex:add_edge
    Adds an existing edge to the vertex.
    Given: edge E - Edge that included the vertex*/
void Vertex::add_edge(Edge *e)
{
    Edges.push_back(e);
}

