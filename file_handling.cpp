#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr(5);
    cout<<"enter the input:";
    for(int i=0;i<5;i++)
    cin>>arr[i];

    // file ko open karo
    ofstream fout;  // this function write karega;
   fout.open("zero.txt");
  
   for(int i=0;i<5;i++)
   {
    fout<<arr[i]<<" ";
   };
   // sort the data ;
} 