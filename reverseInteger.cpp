#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int reversed_num = 0;
    while(num!=0){
        int digit = reversed_num%10;
        reversed_num=reversed_num*10 + digit;
        num/=10;
    }
    cout<<reversed_num;
    return 0;
}
