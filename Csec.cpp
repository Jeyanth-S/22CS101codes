#include <iostream>
using namespace std;
int main(void)
{
    long int a,b,c;
    cin>>a>>b;
    c=1;
    for(long int i=1;i<=a;i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            if(i>c)
            {
                c=i;
            }
        }
     }
    cout<<c;
}