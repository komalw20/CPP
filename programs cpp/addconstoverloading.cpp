#include <iostream>
using namespace std;

class Test{
    int c;
    public:

        Test()  //defailt constructor
        {
            cout<<"The addition nos is:- ";
        }
        
        Test(int a, int b)  //paramterised  
        {
                c=a+b;
        }
        void display()
        {
            cout<< c;
        }

};

int main()
{
    int a,b;

    cout<<"\nEnter the nos:-";
    cin>>a>>b;

    
    Test t;
    Test tt(a,b);
    tt.display();

    

    return 0;

}

/********OUTPUT**********
Enter the nos:-23
4
The addition nos is:- 27
*************************/