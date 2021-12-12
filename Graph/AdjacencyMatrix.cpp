
#include<iostream>
using namespace std;

int matrix[20][20]; //the adjacency matrix initially 0


void displayMatrix(int v) 
{
   for(int i = 0; i < v; i++)
    {
      for(int j = 0; j < v; j++) 
      {
         cout << matrix[i][j] << " ";
      }
      cout << endl;
   }
}

 //function to add edge into the matrix
void add_edge(int u, int v) {      
   matrix[v][u] = 1;
   matrix[u][v] = 1;
}

int main() {
   int v = 6;    //there are 6 vertices in the graph
   add_edge(0, 4);
   add_edge(0, 3);
   add_edge(1, 2);
   add_edge(1, 4);
   add_edge(1, 5);
   add_edge(2, 3);
   add_edge(2, 5);
   add_edge(5, 3);
   add_edge(5, 4);
   displayMatrix(v);

   return 0;
}