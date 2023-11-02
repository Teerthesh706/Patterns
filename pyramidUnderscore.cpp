#include<iostream>
using namespace std;
int main()
{
    int n, l;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=0; i<n; i++){
        
        for(int j=n-i; j>1; j--){
            cout<<" ";
        }

        if(i==0){
            cout<<"*";
        }
        
        else{
            cout<<"*";
            for(int l=0; l<(i*2-1); l++){
                cout<<"_";
            }
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}

//          *
//         *_*
//        *___*
//       *_____*
//      *_______*
//     *_________*
//    *___________*
//   *_____________*
//  *_______________*
// *_________________*