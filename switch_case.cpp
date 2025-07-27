#include <iostream>
using namespace std;
int main()
{
    int  day;
    cout<<"enter the number:";
    cin>>day;

    switch(day)
    {
        case 1:
        cout<<"monday:";
        break;

        case 2:
        cout<<"tuesday:";
        break;

        case 3:
        cout<<"wednesday:";
        break;

        case 4:
        cout<<"thurusday:";
        break;

        case 5:
        cout<<"friday:";
        break;

        case 6:
        cout<<"sarturday:";
        break;

        case 7:
        cout<<"sunday:";
        break;

        default:
        cout<<"it is not a day:";
        break;

    }
}