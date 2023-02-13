#include<iostream>
#include<iomanip>
#define a 30
using namespace std;
int main(void)
{
   double N;
   cin>>N;
   double sqrt=10;
   for(int ctr=1;ctr<=a;ctr++)
   {
          sqrt=sqrt-((sqrt*sqrt-N)/(2*sqrt));
   }
   cout<<fixed<<setprecision(3)<<sqrt;
}