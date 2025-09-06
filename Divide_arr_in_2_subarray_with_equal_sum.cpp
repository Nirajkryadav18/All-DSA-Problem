// Divide array in 2 subarray with equal sum;

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;                // the answer output is 0 and 1 k form;

    bool divide(vector<int>arr)
    {
        int  maxi=INT_MIN,prefix=0, total_sum=0, n=arr.size();
        for(int i=0;i<n;i++)
            total_sum+=arr[i];
            
            for(int i=0;i<n;i++)
            {
                prefix+=arr[i];
                if(total_sum==2*prefix)
                return 1;
            }
            return 0;  
    }
    // create the main function;
    int main()
    {
        int n;
        cout<<"enter the size of array:";
        cin>>n;
        vector<int>v(n);
        cout<<"enter the element of array:";
        for(int i=0;i<n;i++)
        
            cin>>v[i];
        
        // create the calling function;
        cout<<divide(v);
    }
