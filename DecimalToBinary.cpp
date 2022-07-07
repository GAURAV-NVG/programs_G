#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 10;
    int arr[100];
    int k = 0;
    while(n/2!=0){
        arr[k++] = n%2;
        n/=2;
    }
    arr[k++] = n;
    cout<<"binary number : ";
    
    for(int i = k-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<"\nDecimal number : ";
    int m = 0,s=0;
    for(int i = 0;i<k;i++){
        s+=arr[i]*pow(2,m);
        m++;
    }
    cout<<s;
    return 0;
}
