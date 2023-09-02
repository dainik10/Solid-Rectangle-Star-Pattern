#include <iostream>
using namespace std;

int main()
{
    // solid rectangle star pattern
    //     for(int row =0; row < 3; row = row+1)
    //     {
    //         for(int col = 0; col < 5; col = col +1)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }
    // }

    // solid square pattern
    //        for(int row =0; row < 4; row = row+1)
    //     {
    //         for(int col = 0; col < 4; col = col +1)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }
    // }


    // int n;
    // cout << "Enter n:" << endl;
    // cin >> n;

    // for (int row = 0; row < n; row = row + 1)
    // {
    //     for (int col = 0; col < n; col = col + 1)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

     // half pyramid 
    //  int n;
    //  cout << "Enter n:" << endl;
    //  cin >> n;

    //  for (int row = 0; row < n; row = row + 1){
    //     for (int col = 0; col < row+1; col = col + 1){
    //         cout << "*";
    //     }
    //     cout << endl;
    //  }


    //inverted half pyramid
    //  int n;
    //  cout << "Enter n:" << endl;
    //  cin >> n;

    //  for (int row = 0; row < n; row = row + 1){
    //     for (int col = 0; col < n-row; col = col + 1){
    //         cout << "*";
    //     }
    //     cout << endl;
    //  }


    // half numeric pyramid
//     int n;
//     cout << "Enter n:" << endl;
//     cin >> n;

//   for (int row = 0; row < n; row = row + 1){
//         for (int col = 0; col < row+1; col = col + 1){
//             cout << col + 1;
//          }
//        cout << endl;
//      }
    // half inverted numeric pyramid
     int n;
     cout << "Enter n:" << endl;
     cin >> n;

     for (int row = 0; row < n; row = row + 1){
        for (int col = 0; col < n-row; col = col + 1){
            cout << col + 1;
        }
        cout << endl;
     }


}