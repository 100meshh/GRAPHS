#include<bits/stdc++.h>
using namespace std;
int main()
{
    int vertex,edges;
    cout<<"enter no. of vertex and edges : ";
    cin>>vertex>>edges;
    vector<vector<int>>adjmat(vertex,vector<int>(vertex,0));
    int u,v,weight;
    cout<<"enter all the paths or edges and their weight: "<<endl;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v>>weight;
        adjmat[u][v]=weight;
        adjmat[v][u]=weight;
    }
    cout<<"output matrix is : "<<endl;
    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
        {
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
}