// o/p
//       1       
//     1 2 1     
//   1 2 3 2 1   
// 1 2 3 4 3 2 1 

#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    
    int row = 1;


    while(row<=n){
        int column = 1;
        while(column<=1){
            for(int i=0; i<n-row; i++){
                cout<<"  ";
            }
            for(int i=1; i<=row; i++){
                cout<<i<<" ";
            }
            for(int i=row-1; i>=1; i--){
                cout<<i<<" ";
            }
            for(int i=0; i<n-row; i++){
                cout<<"  ";
            }
            column++;
        }

        row=row+1;
        cout<<endl;
    }

    return 0;
}
