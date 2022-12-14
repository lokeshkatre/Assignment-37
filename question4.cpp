#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int, 6> arr{3,4,5,32,5,54};
    for(auto i= arr.rbegin(); i!= arr.rend();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i= arr.rend()-1; i!= arr.rbegin()-1;i--)
    {
        cout<<*i<<" ";
    }
}