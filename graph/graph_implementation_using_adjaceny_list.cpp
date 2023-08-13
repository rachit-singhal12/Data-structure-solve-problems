#include<iostream>
#include<list>

using namespace std;

class Graph
{
    public:
    int v;

    list<int> *l;

    Graph(int v)
    {
        this->v = v;
        l = new list<int>[v];
    }

    void addEdge(int x,int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void print()
    {
        for(int i=0;i<v;i++)
        {
            cout<<"vertex "<<i<<"-->";
            for(auto x : l[i])
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(3,2);
    g.print();
    return 0;
}