#pragma once
class Edge
{
	int weight;

	Node* endpoint1;
	Node* endpoint2;


	Edge(Node* a, Node* b, int w)
	{
		endpoint1 = a;
		endpoint2 = b;
		weight = w;

		//endpoint1 -> addNeighbor(this)
		endpoint2 -> addNeightbor(this)

	}

};

