#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, L, total=0;
    map<string, int> mp;
    cin >> N;

    for(int i=0; i<N; i++)
    {
        int P;
        string nome;
        cin >> nome >> P;

        mp[nome] = P;

    }

    // map preenchido

    cin >> L;

    for (int i = 0; i < L; i++)
    {
        string item;

        cin >> item;

        total += mp[item]; // retorna valor atrelado a chave
        
    }

    cout << total;
    
    return 0;
}
