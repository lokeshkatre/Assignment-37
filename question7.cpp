#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    vector <int> v{23,234,32,34,65};
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<"sum of elements is "<<sum<<endl;
}