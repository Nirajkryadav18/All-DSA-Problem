// print the missing number of array;

#include <iostream>
using namespace std;
int main()
{
   int arr[6]={1,3,4,6,7,8};
   int sum=0;
   int n=7;        // max number of arrange like(shuld 1 to 7);

   for(int i=0;i<6;i++)
   {
    sum=sum+arr[i];

   }
   int total=n*(n+1)/2;
   int missing=total-sum;


   cout<<"missing number is "<<missing<<endl;
   return 0;
}