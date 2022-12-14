#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,0> arr1{};
    array<int,5> arr2{};
    array<int,5> arr3{1,2,3,4,5};
    cout<<"arr1.empty():"<<arr1.empty()<<endl;
    cout<<"arr2.empty():"<<arr2.empty()<<endl;
    cout<<"arr3.empty():"<<arr3.empty()<<endl;
}