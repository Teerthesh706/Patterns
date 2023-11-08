#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int row=5;
    int col=3;
    vector<vector<int> > arr(row, vector<int>(col, 0));
    for(int i=0; i<arr[0].size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// //In following code we take input from user in the 2d Vector
// int main()
// {
//     int row;
//     cout<<"Enter the number of rows:";
//     cin>>row;
//     int col=3;
//     cout<<"Enter the number of columns:";
//     cin>>col;
//     vector<vector<int> > arr(row, vector<int>(col));
//     cout<<"Enter the elements:";
//     for(int i=0; i<arr[0].size(); i++){
//         for(int j=0; j<arr[0].size(); j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0; i<arr[0].size(); i++){
//         for(int j=0; j<arr[0].size(); j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }