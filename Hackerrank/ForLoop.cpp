#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    for ( ;a<=b;a++){
    if (a>9)
    {
        if (a%2==0)
        cout<<"even"<<endl;
        else 
        {
        cout<<"odd"<<endl;
        }
    }
    else if (a==1)
    {
    cout<<"one"<<endl;
    }
    else if (a==2)
    {
    cout<<"two"<<endl;
    }
    else if (a==3)
    {
    cout<<"three"<<endl;
    }
    else if (a==4)
    {
    cout<<"four"<<endl;
    }
    else if (a==5)
    {
    cout<<"five"<<endl;
    }
    else if (a==6)
    {
    cout<<"six"<<endl;
    }
    else if (a==7){
    cout<<"seven"<<endl;
    }
    else if (a==8)
    {
    cout<<"eight"<<endl;
    }
    else if (a==9)
    cout<<"nine"<<endl;
    }
    return 0;
}