#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;

    // matricula tem nome e turma
    map<long long, pair<string, string>> alunos;

    for (int i = 0; i < N; i++) {
        long long M;
        string T, Nome;

        cin >> M >> T >> Nome;

        alunos[M] = make_pair(Nome, T);
    }

    int C;
    cin >> C;

    for (int i = 0; i < C; i++) {
        long long procura;
        cin >> procura;

        if (alunos.count(procura)) {
            cout << alunos[procura].first << ": " << alunos[procura].second << endl;
        } else {
            cout << "Aluno nao encontrado" << endl;
        }
    }

    return 0;
}