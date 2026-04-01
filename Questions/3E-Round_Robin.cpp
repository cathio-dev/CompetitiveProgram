#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {

    int N, M;
    queue<int> Ei; // Tempo de cada N processos

    cin >> N >> M;

    for(int i=0; i < N; i++) {
		int E;
		cin >> E;
		Ei.push(E);
	}  

    cout << endl;

    for(int j=0; j < N; j++)
    {
        cout << Ei.front() << " ";
        Ei.pop();
    }

    return 0;
}
