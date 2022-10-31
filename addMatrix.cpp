#include <iostream>
using namespace std;

int main()
{
    int row, col, a[200][200], b[200][200], sum[200][200], k, l;

    cout << "Enter number of rows : ";
    cin >> row;

    cout << "Enter number of columns  ";
    cin >> col;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    for(k = 0; k < row; ++k)
       for(l = 0; l < col; ++l)
       {
           cout << "Enter element a" << k + 1 << l + 1 << " : ";
           cin >> a[k][l];
       }

    // Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(k = 0; k < row; ++k)
       for(l = 0; l < col; ++l)
       {
           cout << "Enter element b" << k + 1 << l + 1 << " : ";
           cin >> b[k][l];
       }

    // Adding Two matrices
    for(k = 0; k < row; ++k)
        for(l = 0; l < col; ++l)
            sum[k][l] = a[k][l] + b[k][l];

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for(k = 0; k < row; ++k)
        for(l = 0; l < col; ++l)
        {
            cout << sum[k][l] << "  ";
            if(l == col - 1)
                cout << endl;
        }

    return 0;
}