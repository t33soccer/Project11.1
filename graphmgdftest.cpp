using namespace std;
#include "grmat.h"
#include <fstream>
int main() {
	
	ofstream fout;
	
	fout.open("testoutgdf.txt");
	
	
	
	Graphm MyGraph(4);
	cout << MyGraph.n() <<endl;
	MyGraph.setEdge(0,1,4);
	MyGraph.setEdge(0,2,4);
	MyGraph.setEdge(0,3,4);
	MyGraph.setEdge(1,3,4);
	MyGraph.setEdge(2,0,4);
	MyGraph.setEdge(3,2,4);
	
	MyGraph.serializegdf(fout);
	cout << MyGraph.n() <<endl;
	
	ifstream fin;
	
	fin.open("testingdf.txt");
	
	
	
	Graphm MyFileGraph(4);
	
	cout << MyFileGraph.e() <<endl;
	
	MyFileGraph.deserializegdf(fin);

	cout << MyFileGraph.e() << endl;
}