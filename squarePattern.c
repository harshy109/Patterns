#include <iostream>
using namespace std;
int main()
{
    int b,l;
    cout<<"Enter no. breadth:";
    cin>>b;
    cout<<"Enter length:";
    cin>>l;
    //Rectangle
    for(int i=0; i<b; i++){
        for(int j=0; j<l; j++){
            //har column me 1 * print krwana hai
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
