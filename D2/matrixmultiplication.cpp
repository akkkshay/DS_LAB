#include<iostream>
using namespace std; 
int main ()
{
    int r1, c1, r2, c2, i, j, k;
    int A[10][10], B[10][10], C[10][10];
    cin >> r1 >> c1;
    cin >> r2 >> c2; 
    if (c1 != r2)
    {
        cout << "Not Possible";
    }	
    else
    {
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
            cin >> A[i][j];
    }
    
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
            cin >> B[i][j];		
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < r2; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
   
    for (i = 0; i < r1; i++)
    {    
        for (j = 0; j < c2; j++)
            cout << C[i][j] << "  ";
        cout << "\n";
    }
    }
    return 0;
}