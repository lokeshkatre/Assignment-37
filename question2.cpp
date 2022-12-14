#include<iostream>
#include<array>
#include<tuple>
using namespace std;

int main()
{
    array<int,5> arr{1,2,3,4,5};
    cout<<"element at 2 :"<<arr.at(2)<<endl;
    cout<<"element at 2 :"<<get<2>(arr)<<endl;
    cout<<"size of array : "<<arr.size()<<endl;
}