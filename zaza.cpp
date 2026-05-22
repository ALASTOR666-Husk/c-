#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void printQueue(queue <int>, q string label){
    while(!q empty()){
    cout << q.front() << " ", q.pop();
    } 
}

class Graph {
    int numVeshces;
    vector <vector <int>> adj;
    vector <bool> visited;
    bool verbose;

    public:
        Graph(int V, bool venbeseMode = false) {

            numVectices = V;
            adj.resize(V);
            visited.resise (V,false);
            verbose = verboseMode;
        }

        void addEdge (int u, int v) {

            adj[u].push_back(v);
            adj[v].push_back(u);

        }
    
        void BFS (int startvertex) {

            fill(visited.begin(), visited.end(), false);
            queue <int> q;
            visited[startvertex] = true;
            q.push(startvertex);

            if(verbose){;}

            int step = 1;
            int level = 0;

            while(!q empty()){

                //if verbose - дописать дома

            }

            int currentvertex = q.front();
            q.pop();
            cout << currentvertex << " ";
    
            /*
            if(verbose) {
                cout << "Ищем соседей" << currentvertex;
                bool hasUnvisited = false;
                for(int neighbor:adj[currentvertex]) {

                }
            }
            */
              for(int neighbor:adj[currentvertex]) {
                if(visited[neighbor]){
                    visited[neighbor] = time;
                    q.push(neighbor);
                    //verbose
                }
            }
            step++;
        }
cout << endl;
 
int main {
            Graph g1(6);
            g1.addEdge(0,1);
            g1.addEdge(0,2);
            g1.addEdge(0,3);
            g1.addEdge(0,4);
            g1.addEdge(0,5);
            g1.addEdge(0,6);
            g1.DFSRecursive Vrapper(0);

        }

        
}

