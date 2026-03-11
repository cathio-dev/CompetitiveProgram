#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int N, P;
    vector<int> pontos;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> P;
        pontos.push_back(P);
    }

    cout << endl;

    sort(pontos.begin(), pontos.end());

    for (int el : pontos)
    {
        cout << el << " ";
    }
    


    return 0;
}
