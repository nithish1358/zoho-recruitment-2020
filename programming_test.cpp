#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    n+=1;
    int one=1,two=1;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            cout<< "  ";
        }
        for(int k=1;k<=one;k++)
        {
            cout<<abs(k-two)<<" ";
        }
    
    one+=2;
    two++;
    cout<<"\n";
    }
}