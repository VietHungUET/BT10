#include<bits/stdc++.h>
using namespace std;
struct String
{
    int n;
    char*str;
    String (const char *s) // constructor
    {
        int length=0;
        while(s[length]!='\0')
        {
            length++;
        }                      // Hoặc có thể gắn int length=strlen(s)
        n=length;
        str=new char[length+1];
        //str=s; Không thể gắn vì s đang là kiểu const char* còn str là kiểu char*  .
        for(int i=0; i<length; i++ )
        {
            str[i]=s[i];
        }
    }
    ~String()// destructor
    {
        delete[] str;
    }
    void print()
    {
        cout<<str;
    }
    void append(const char *t)
    {
        int size=0;
        while(t[size]!='\0')
        {
            size++;
        }
        char*temp= new char[n+size+1];
        for(int i=0; i< n; i++) // Sao chép từ chuỗi đầu tiên
        {
            temp[i]=str[i];
        }
        for(int i=n; i<n+size+1; i++) //Sao chép từ chuỗi cần thêm
        {
            temp[i]=t[i-n];
        }
        delete[] str;
        str=temp;
        n=n+size;
    }
};


int main()
{

    String greeting("Hi ");
    greeting.append("there");
    greeting.print();
}
