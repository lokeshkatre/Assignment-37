#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v{1,242,14,5,212,23};
    cout<<"Max element is "<<*max_element(v.begin(),v.end())<<endl;
    cout<<"Min element is "<<*min_element(v.begin(),v.end())<<endl;
}
