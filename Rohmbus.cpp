#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int n, i, j;
   cout<<"Enter the Number:";
   cin>>n;
   for(i=0;i<n;i++){
    for(j=(n-i)-1;j>0;j--){
        cout<<" ";
    }
    for(j=0;j<i+1;j++){
        cout<<"* ";
    }
    cout<<endl;
   }
   for (i=0;i<n;i++){
        for(j=1;j<=i;j++){
            cout<<" ";
        }
        for(j=n-i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
   
}

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
