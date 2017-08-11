#include <vector>
#include <queue>
#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

struct NODE { //struct that describes a node of the graph
	int data; //
	vector<NODE*> neighbors;
}; 

void BFS(NODE* node){ //the function is passed the pointer to the node from which the search starts

    	set<int> mySet; //the set is needed to keep track of previously visited nodes
        queue<NODE> myQueue; //the queue is needed to visit all adjacent nodes first
        
        myQueue.push(*node); //put in the queue the first node
        
        while(!myQueue.empty()){ //until the queue is not empty
            NODE currNode = myQueue.front(); // store the front elem of the queue in a variable currNode
            myQueue.pop(); //pop that element from the queue
            
            if(mySet.find(currNode.data)!=mySet.end()){ //if the current node was visited continue to the next iteration
                continue;
            }
            //if the current node was not previously visited, insert current node in set and visit current node
            cout << currNode.data << endl;
            mySet.insert(currNode.data);
            
            //insert in queue all the neighbors of current node
            for(int i=0; i<currNode.neighbors.size(); i++){
                myQueue.push(*currNode.neighbors[i]);
            }
        }
    }

    







