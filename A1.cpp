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
 cout<<"("<<a.x<<" "<<a.y<<")";

}
int main()
{
 Pointer a(1,2);
 print(a);


}
