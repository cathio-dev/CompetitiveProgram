#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void fazer_hamburguer(int *P, int *S, int *Q, int *np, int *ns, int *nq)
{
    while ((np>P) && (ns>P) && (nq>P)) // Vai darp ra fazer hamburguer
    {
        np - P;
        ns - S;
        nq - Q;
    }

    // Quando sair do while acabou 

    
}
int main()
{
    int np, ns, nq, kp, ks, kq, r, P = 0, S = 0, Q = 0;
    string receita;
    
    cin >> receita;

    cin >> np >> ns >> nq;
    cin >> kp >> ks >> kq;
    cin >> r;

    for (char c : receita)
    {
        if (c == 'P')
        {
            P++;
        }

        if (c == 'S')
        {
            S++;
        }

        if (c == 'Q')
        {
            Q++;
        }
    }

    cout << P << " " << S << " " << Q << " ";

    fazer_hamburguer()


}
