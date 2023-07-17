/*Create a class Matrix with an integer matrix as its data member. Overload ~ operator to find the
transpose of the matrix object.
}*/

#include <iostream>
using namespace std;
class Matrix
{
    int mat[10][10],trans[10][10],row,col;

public:
    // Constructor for matrix initialisation
    Matrix(int r, int c)
    {
        row = r;
        col = c;
        cout << "Enter elements of matrix\n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

    void displayMatrix()
    {
        cout << "\nThe matrix is : \n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << mat[i][j] << "  ";
            }
            cout << endl;
        }
    }

    // Operaator overloading for transpose
    void operator~()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                trans[i][j] = mat[j][i];
            }
        }

        //Displaying transpose of matrix
        cout << "\nThe transpose of matrix is : \n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << trans[i][j] << "  ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Matrix M(3, 3);
    M.displayMatrix();
     ~M;//Calling operator function
    return 0;
}