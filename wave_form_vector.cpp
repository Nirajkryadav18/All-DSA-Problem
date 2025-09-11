// print the wave form of vector;

#include <iostream>
using namespace std;
int wave(int arr[][4],int row,int col)
{
    for(int j=0;j<col;j++)
    {
        if(j%2==0)  // even;
        {
            for(int i=0;i<row;i++)
            cout<<arr[i][j]<<" ";
        }
        else{   // odd;
            for(int i=row-1;i>0;i--)
            cout<<arr[i][j]<<" ";
        }
    }
}
int main()
{
    int arr1[3][4]={2,3,5,6,7,8,9,2,3,6,9,8};
    int arr2[3][4]={7,8,9,4,5,6,3,2,1,4,5,9};
    int ans[3][4];

    // create the calling function;
    // wave form
    cout<<wave(arr1,3,4);
    return 0;
}