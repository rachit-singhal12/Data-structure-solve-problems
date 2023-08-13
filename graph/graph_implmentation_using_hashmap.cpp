#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class Graph
{
    unordered_map<string,list<pair<string,int>>>l;

    public:
    void addEdge(string a,string b,bool val,int weight)
    {
        l[a].push_back(make_pair(b,weight));
        if(val)
        {
            l[b].push_back(make_pair(a,weight));
        }
    }

    void print()
    {
        for(auto p : l)
        {
            string city = p.first;
            auto nbrs = p.second;
            cout<<city<<" ";
            for(auto x : nbrs)
            {
                cout<<x.first<<","<<x.second<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Graph g;
    g.addEdge("a","b",false,30);
    g.print();
    return 0;
}