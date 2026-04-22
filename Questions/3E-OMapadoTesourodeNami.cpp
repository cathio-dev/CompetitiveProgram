#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int C;
    map<pair<int,int>, int> mp;

    cin >> C;

    for (int i; i < C; i++)
    {
        int mapx, mapy, mapb;
        cin >> mapx >> mapy >> mapb;

        mp[{mapx, mapy}] += mapb; // Escaneia as coordenadas e respectivos baús
    }

    int minX = INT_MAX, maxX = INT_MIN;
    int minY = INT_MAX, maxY = INT_MIN;

    for (auto it : mp)
    {
        int x = it.first.first; // Pega as coordenadas do pair no map
        int y = it.first.second;

        // Faz as comp de maiores e menores
        maxX = max(maxX, x);
        minX = min(minX, x);
        maxY = max(maxY, y);
        minY = min(minY, y);
    }

    int matrix_limitsX = (maxX - minX) + 1;
    int matrix_limitsY = (maxY - minY) + 1; 

    for (int i = 0; i < matrix_limitsY; i++)
    {
        for (int j = 0; j < matrix_limitsX; j++)
        {
            
        }
        
    }

    // isso eh tipo: vector de dentro com X para fazer uma linha com X colunas, e dps o vector de Y para multiplicá-las em linhas
    
    vector<vector<int>> mat(matrix_limitsY, vector<int>(matrix_limitsX, 0)); // matriz preenchida com zeros.
    
    return 0;
}
