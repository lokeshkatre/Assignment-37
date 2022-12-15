#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1{1,24,5,3,2};
    vector<int> v2;
    v2.assign(v1.begin(),v1.end());
    cout<<"Elements in vector 1 : ";
    for(auto i= v1.begin();i!=v1.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n\nElements in vector 2 : ";
    for(auto i= v2.begin();i!=v2.end();i++)
    {
        cout<<*i<<" ";
    }
}