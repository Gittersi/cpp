#include<iostream>
using namespace std;
int square(int n)
{   
    return n*n;
}
int main(){
    int a,b;
    cin>>a;
    b=square(a);
    cout<<b;
    return 0;
}