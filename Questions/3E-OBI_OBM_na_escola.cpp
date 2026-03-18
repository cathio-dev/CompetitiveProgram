#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main() {

    int M, C, qntd_intersec;
    set<int> id_OBM;
    set<int> id_OBI;
    set<int> set_obm;
    set<int> intersec_inscritos;


    cin >> M;

    for(int i=0; i < M; i++) {
        int aluno;
        cin >> aluno;
		id_OBM.insert(aluno);

        if (i == (M-1)) aluno = 0; 
	}

    // set<int>::iterator it;

	// for(it = id_OBM.begin(); it != id_OBM.end(); it++){ 
	// 	cout << *it << endl;
	// }

    cin >> C;


    for(int i=0; i < C; i++) {
        int aluno;
        cin >> aluno;
        id_OBI.insert(aluno);

        if (i == (C-1)) aluno = 0; 
    }

    // Operações a fazer:

        // Meninos OBM

        set_difference(id_OBM.begin(), id_OBM.end(),
        id_OBI.begin(), id_OBI.end(),
        inserter(set_obm, set_obm.begin()));

        if(set_obm.empty())
        {
            cout << 0;
        }else{
            for(int x : set_obm)
                cout << x << " ";
        }

        cout << endl;

        // Alunos da OBI:

        if(C == 0)
        {
            cout << 0;
        }else{

            for(int y : id_OBI)
                cout << y << " ";
        }

        cout << endl;

        // Cálculo para saber quantidade, usamos intersec

        set_intersection(id_OBM.begin(), id_OBM.end(),
            id_OBI.begin(), id_OBI.end(),
            inserter(intersec_inscritos, intersec_inscritos.begin()));

        qntd_intersec = intersec_inscritos.size();

        cout << qntd_intersec;


    return 0;
}
