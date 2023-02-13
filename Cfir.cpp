#include <iostream>
using namespace std;
int main(void)
{
	long int a,c,b=0;
	cin>>a;
	while(a!=0){
		c=a%10;
		b+=c;
		a/=10;
	}
	cout<<b;
	return 0;
}
	