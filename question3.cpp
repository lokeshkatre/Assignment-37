#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int, 6> arr{3,4,5,32,5,54};
    cout<<"element at begin is "<<arr.front()<<endl;
    cout<<"element at end is "<<arr.back()<<endl;
}