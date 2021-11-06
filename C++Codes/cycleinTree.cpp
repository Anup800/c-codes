#include<bits/stdc++.h>
using namespace std;


class Graph{



    int V;
    list<int> * l;
    public:


    Graph(int v){
        V=v;
        l= new list<int>[V];
    }

void addGraph(int i, int j ){
    l[i].push_back(j);
}

bool dfs(int node,vector<bool> &visited ,vector<bool> &stak)
{
    visited[node]=true;
    stak[node] = true;

    for(int nbr : l[node])
    {
        if(stak[nbr]==true)
        {
            return true;
        }
        else if(visited[nbr]==false) {
            bool nbrfoundcycle = dfs(nbr,visited,stak);
            if(nbrfoundcycle)
            {
                return true;
            }
        }
    }
    stak[node]= false;
    return false;

}

bool contain_cycle(){
    vector<bool> visited(V,false);
    vector<bool> stak(V,false);
    for(int i =0;i< V;i++){
        if(!visited[i])
        {
            if( dfs(i,visited,stak))
            return true;
        }
        }
        return false;
    }
    

void print_list(){
    for(int i=0;i< V; i++)
    {
        cout<<i<<"-->";
        for (auto x : l[i]){
            cout<< x<<" , ";
        }
        cout<<endl;
    }
}
};
int main(){

    Graph g(5);
    g.addGraph(0,1);
    g.addGraph(0,2);
    g.addGraph(1,3);
    g.addGraph(2,4);
    g.addGraph(4,3);
    g.addGraph(3,0);
    g.print_list();
   bool f= g.contain_cycle();
   cout<<f;

}