#include<iostream>
using namespace std;
struct Array
{
    int arr[10];


};
int main()
{
    Array a;
    for(int i=1; i<10; i++)
    {
        cout<< &(a.arr[i])<<" ";
    }
    cout<<endl;
    Array p;
    p=a;
    for(int j=1; j<10; j++)
    {
        cout<<&(p.arr[j])<<" ";
    }
}
