#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main()
{
    int M, N, sum = 0;
    
    cin >> N >> M;
    int mat[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> mat[i][j];

            if ( i == 0 || j==0 || i == (N-1) || j == (M-1) )
            {
                sum += mat[i][j];
            }
        }
        
    }

    cout << sum;
    



}
