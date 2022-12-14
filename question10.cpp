#include<iostream>
#include<array>
using namespace std;

array<int ,6> productExceptI(array<int,6>  arr)
{
    array<int ,6> temp;
    int product =1;
    for(int i=0;i<6;i++)
    {
        product = product *arr[i];
    }
    for(int i=0;i<6;i++)
    {
        temp[i] = product/ arr[i];
    }
    return temp;
}
int main()
{
    array<int ,6> num{1,2,3,4,5,6};
    array<int,6> answer = productExceptI(num);
    for(auto i= answer.begin(); i<answer.end();i++)
    cout<<*i<<" ";
    cout<<endl;
}