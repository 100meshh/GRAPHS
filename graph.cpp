#include<bits/stdc++.h>
using namespace std;
int main()
{
    int vertex,edges;
    cout<<"enter no. of vertex and edges : ";
    cin>>vertex>>edges;
    vector<vector<bool>>adjmat(vertex,vector<bool>(vertex,0));
    int u,v;
    cout<<"enter all the paths or edges: "<<endl;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        adjmat[u][v]=1;
        adjmat[v][u]=1;
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