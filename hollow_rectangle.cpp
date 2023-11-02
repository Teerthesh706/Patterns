#include<iostream>
using namespace std;
int main()
{
    int row, col, i, j;
    cout<< "Enter the number of rows:";
    cin >> row;
    cout<< "Enter the number of column:";
    cin >> col;
    for (i=0;i<row;i++)
    {
        if (i==0 || i==row-1){
            for (j=0;j<col;j++)
            {
                cout<<"* ";
            };
            
        }
        else{
            cout<<"* ";
            for (j=0;j<col-2;j++){
                cout<<"  ";
            }
            cout<<"* ";
        }    
        cout<<endl;
    }
    return 0; 
}

// * * * * * * * * * * 
// *                 * 
// *                 * 
// *                 * 
// *                 * 
// *                 * 
// *                 * 
// *                 * 
// *                 * 
// * * * * * * * * * *