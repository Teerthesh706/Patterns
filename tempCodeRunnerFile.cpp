#include<iostream>
using namespace std;
int main()
{
    int m, n, i, j, k;
    cout<<"Enter the number:";
    cin>>n;
    for(i=0;i<n;i++)
    {   
        for (m=n;m>0;m--){
        for (j=m;j>0;j--){
            cout<<j;
        }
       
    }
        for (k=0; k<=i;k++){
            cout<<"* ";
        }
        
        cout<<endl;
    }
    
}