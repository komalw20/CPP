#include <iostream>
using namespace std;

int main() {

    int a,b,c;
    int *ptr1,*ptr2;

    ptr1=&a;   //addr of a  assign

    ptr2=&b;     //addr of b assogn


    cout<<"Enter the nos:-";
    cin>>a>>b;

    c=*ptr1+*ptr2;

  cout << "Addition of nos-"<<c;
  return 0;
}



/**OUTPUT**
  pointer through input
The addition of no-68
**/