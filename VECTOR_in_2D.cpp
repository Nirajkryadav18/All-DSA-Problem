// basic vector;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // // create the 2d vector;
    // vector<vector<int> >matrix(3,vector<int> (4,1));

    // // for(int i=0;i<3;i++)
    // // for(int j=0;j<4;j++)
    // // cout<<matrix[i][j]<<" ";
    // // print the row and column 
    // cout<<"row="<<matrix.size();
    // cout<<endl;
    // cout<<"col= "<<matrix[0].size();


    // create the user input program;

    int n,m;
    cout<<"enter the row and col:";
    cin>>n>>m;

    vector<vector<int> >matrix(n,vector<int>(m,1));

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>matrix[i][j];

    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    cout<<matrix[i][j]<<"  ";
    cout<<endl;
    }
}