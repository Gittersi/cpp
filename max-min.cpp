#include<iostream>
using namespace std;
void max_min(int a,int b)
{
if(a<b)
{
    cout<< b << " is maximum" << endl;
    cout << a << " is minimum" << endl;
}
else {
  cout<< a << " is maximum" << endl;
    cout << b << "  is minimum" << endl;

}
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    max_min(a,b);
    return 0;
}
