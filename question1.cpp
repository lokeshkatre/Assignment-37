#include<array>
#include<iostream>
using namespace std;

int main()
{
    array<int,4> arr {10,20,30,40};
    cout<<"element at 0 is "<<arr[0]<<endl;
    cout<<"element at 1 is "<<arr[1]<<endl;

    arr[3]=5;
    arr[2]=3;
    cout<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<"element at "<<i<<" is "<<arr[i]<<" "<<endl;
    }
}