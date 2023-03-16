#include<bits/stdc++.h>
using namespace std;
struct Pointer {
double x;
double y;
Pointer(double _x,double _y)
{ x=_x;
  y=_y;}

};
void mid_point(const Pointer& a, const Pointer& b)
{
  Pointer s(0,0);
  s.x=(a.x+b.x)/2;
  s.y=(a.y+b.y)/2;
  cout<<"("<<s.x<<","<<s.y<<")";
}
int main()
{
 Pointer a(1,2);
 Pointer b(9,9);
 mid_point(a,b);


}
