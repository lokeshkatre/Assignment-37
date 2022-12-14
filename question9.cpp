#include<iostream>
#include<array>
using namespace std;

int oddInteger(array<int,5> arr)
{
    int result =0;
    for(int i=0;i< arr.size();i++)
    {
        result = result ^ arr[i];
    }
    return result;
}

int main()
{
    array<int, 5> arr{1,2,2,5,5};
    cout<<oddInteger(arr)<<endl;
    return 0;
}