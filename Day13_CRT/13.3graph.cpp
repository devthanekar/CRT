#include<iostream>
using namespace std;
class Graph{

//Pointer to adjecency matrix
bool **adjMatrix;
//Total no of vertices
int vertices;

public:
    //constructor
    Graph(int vertices)
    {
    //Store total vertices}
  this->vertices =vertices;

  //create rows dynamically
  adjMatrix = new bool *[vertices];

  //create column dynamically
  for (int i=0;i<vertices;i++)
  {
      adjMatrix[i]= new bool[vertices];

      //Initially no edges
      for(int j=0;j<vertices;j++)
        {
        adjMatrix[i][j]=false;

        }

    }

  }
  //Function to add a edge
  void addEdge(int source,int destination)
  {
  //Since graph is undirected
  adjMatrix[source][destination]=true;
  adjMatrix[destination][source]=true;
  }
  //Display adjacency matrix
  void display()
  {
      cout<<"\nAdjacency Matrix\n";
      for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            cout<<adjMatrix[i][j]<< " ";

        }
        cout<<endl;
      }
  }
  //Destructor
  ~Graph()
  {
      for (int i=0;i<vertices;i++){
        delete[] adjMatrix[i];
      }
      delete[] adjMatrix;
      }
  };
  int main()
  {
      //Cretae graph with 6 vertices
      Graph g(6);

      //Main Gate<->Library
      g.addEdge(0,1);
      //main gait<-> canteen
      g.addEdge(0,2);
      //Library<->Academic
       g.addEdge(1,3);
       //canteen <->Academic Block
        g.addEdge(2,3);
        //Academic bloack<->Hostel
         g.addEdge(3,4);
         //Hostel<-> Sport Ground
          g.addEdge(4,5);

          g.display();
  }
