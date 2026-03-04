#include <bits/stdc++.h>
#include <iostream>

using namespace std;

struct CorMoeda
{
    string C;
    int V;
};

int main() {

    int N, E, sum=0;
    bool entrou = false;

    cin >> N;
    CorMoeda vet[N];

    for (int i=0; i<N; i++)
    {
        cin >> vet[i].C >> vet[i].V; // escaneia todos
    } 

    cin >> E;

    for (CorMoeda e : vet)
    {   
        
        if (e.V >=E)
        {
            cout << e.C << " " << e.V << "\n";
            sum += e.V;
            entrou = true; // Se entrar aqui quer dizer que tem valor maior que E
        } 
    }

    if (entrou)
    {
        cout << sum;
    }else{
        cout << 0;
    }

    return 0;
}
