#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> NextSmallerElement(vector<int> &arr,int n)
{
   vector<int>ans(n,-1);
   stack<int>st;
   
   for(int i=0;i<n;i++)
   {
    while(!st.empty() && arr[i]<arr[st.top()])
    {
        ans[st.top()]=arr[i];
        st.pop();
    }
      st.push(i);
   }
   return ans;
}

// create the main function;
int main()
{
    vector<int> arr={7,9,12,10,14,8,3,6,9};
  vector<int> result=  NextSmallerElement(arr,arr.size());

  for(int i=0;i<result.size();i++)
  {
     cout<<result[i]<<" ";
  }
}
