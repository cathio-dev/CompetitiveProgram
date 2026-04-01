#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int P;

    vector<int> Pih;
    vector<int> Pim;
    vector < pair<int,int> > pares_formados;

    cin >> P;
    // Homens

    for(int i=0; i < P; i++) {
        int j;
        cin >> j;
        Pih.push_back(j);
    }

    sort (Pih.begin(), Pih.end());

    // Mulheres

    for(int i=0; i < P; i++) {
        int j;
        cin >> j;
        Pim.push_back(j);
    }

    sort (Pim.begin(), Pim.end());

    for (int i = 0; i<P; i++){
        int par_h = Pih[P-(i+1)]; // Homem final pra inicio
        int par_m = Pim[i];       // Mulher inicio para final

        pares_formados.push_back(make_pair(par_h, par_m));
    }

    for (int i = 0; i<P; i++)
        cout<< pares_formados[i].first << " " << pares_formados[i].second << endl;
    

    return 0;
}
