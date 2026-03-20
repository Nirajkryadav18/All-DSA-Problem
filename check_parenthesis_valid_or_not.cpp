#include<iostream>
#include<stack>
using namespace std;

// create the function;
bool check(string str)
{
    // again create the stack jo value ko store kar k rakhe ga;
    stack<char>s;
    // itrate the all value;
    for(int i=0;i<str.size();i++)
    {
        // ya opening  braket
        if(str[i]=='(')
        s.push(str[i]);
        // closing braket ho;
        else{
            if(s.empty())  // if stack khali ho return kar do 0; ko;
            return 0;
            else
            s.pop();
        }
    }
    return s.empty(); // out put me if empty hua to return kar dena hai one ki khali ho gaya hai
}                    // nhi ho zero print kar dega ki khali nhi hai;


int main()
{
    string str="((())) ";
    cout<<check(str)<<endl;
    return 0;
}
