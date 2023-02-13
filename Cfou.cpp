#include <iostream>
using namespace std;
int main(void){
    int N;
    cin>>N;
    int arr[100],max;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    max=arr[1];
    for(int i=0;i<N;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}