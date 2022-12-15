#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<float> arr;
    arr.push_back(4.5);
    arr.push_back(5.34);
    arr.push_back(6);
    arr.push_back(8.5);
    for(auto i= arr.begin();i!=arr.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    return 0;
}