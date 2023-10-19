#include <iostream>
using namespace std;

void Prime(int j)
{
    bool flag = false;
    for( int i=2; i<j; i++)
    {
        if(j%i == 0)
        {
            flag = false;
            break;
        }
            
        else
        flag = true;    
    }

    if(flag==true)
    cout<<j<<" ";
}

int main()
{
    int n,i;
    cout<<"enter n"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        Prime(i);
    } 
}
