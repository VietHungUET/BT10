#include<bits/stdc++.h>
using namespace std;
struct Pointer {
int y;
int x;
// Nếu đổi chỗ khai báo x trước y thì địa chỉ biến x sẽ bằng địa chỉ của struct và ngược lại địa chỉ biến y sẽ bằng địa chỉ của struct
Pointer(int _x,int _y)
{ x=_x;
  y=_y;}

};
void print(Pointer a)
{
 cout<<"("<<a.x<<","<<a.y<<")";

}
int main()
{
 Pointer a(1,2);
 cout<<&a.x<<" "<<&a.y<<"  "<<&a;


}
