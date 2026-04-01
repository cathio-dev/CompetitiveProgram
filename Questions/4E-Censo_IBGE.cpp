#include <bits/stdc++.h>
#include <iostream>
#include <utility>

using namespace std;

int main() {

    int n, m, xi, yi, sum_casas=0;
    int casa_momento = 0;
    vector<int> vet_casas;
    vector < pair<int,int> > vet_casasdia;

    cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> casa_momento;
        vet_casas.push_back(casa_momento); // recolhendo o vetor das casas
    }

    for (int i = 0; i<m; i++){
        cin >> xi >> yi;
        vet_casasdia.push_back(make_pair(xi, yi));
    }

    for (int i = 0; i<m; i++){
        cout<< vet_casasdia[i].first << " " << vet_casasdia[i].second << endl;
    }
    

    return 0;
}
