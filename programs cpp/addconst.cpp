#include <iostream>
using namespace std;

class Add{
    int c;
    public:
        Add(int a, int b)
        {
                c=a+b;
        }
        void display()
        {
            cout<<"The addition od nos is:"<<c;
        }

};

int main()
{
    int a,b;

    cout<<"\nEnter the nos:-";
    cin>>a>>b;

    Add obj(a,b);
    obj.display();

    return 0;

}

/********OUTPUT**********
Enter the nos:-12
45
The addition od nos is:57
*************************/