#include<bits/stdc++.h>
using namespace std;
struct Pointer {
int x;
int y;
Pointer(int _x,int _y)
{ x=_x;
  y=_y;}

};
void print(Pointer a)
{
  Pointer* p=&a;
 cout<<p<<endl;

}
void print2(Pointer& a )
{
    Pointer* p=&a;
    cout<<p;
}
int main()
{
 Pointer a(1,2);
 Pointer *p=&a;
 cout<<p<<" ";
 print(a);
 cout<<p<<" ";
 print2(a);


}
