#include<iostream>
using namespace std;
int main()
{
    int n, i, j, k, l;
    cout<< "Enter the Number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=n;j>i;j--){
            cout<<" ";
        }
        for(k=0;k<i;k++)
                cout<<k+1;
                
            
            for(l=i-1;l>0;l--){
                cout<<l;
            }    
        cout<<endl;
    }
}

//     1
//    121
//   12321
//  1234321