#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main() {

    int A, B, qntd_intersec;
    set<int> set_X;
    set<int> set_Y;
    set<int> inter_XY;
    set<int> exclusivo_X;
    set<int> exclusivo_Y;


    cin >> A;

    for(int i=0; i < A; i++) {
        int especie;
        cin >> especie;
		set_X.insert(especie);

        if (i == (A-1)) especie = 0; 
	}

    // set<int>::iterator it;

	// for(it = id_OBM.begin(); it != id_OBM.end(); it++){ 
	// 	cout << *it << endl;
	// }

    cin >> B;


    for(int i=0; i < B; i++) {
        int especie;
        cin >> especie;
        set_Y.insert(especie);

        if (i == (B-1)) especie = 0; 
    }

    // 1 linha intersec

    set_intersection(set_X.begin(), set_X.end(),
        set_Y.begin(), set_Y.end(),
        inserter(inter_XY, inter_XY.begin())
        );


    // 2 linha dif X com inter

    set_difference(set_X.begin(), set_X.end(),
        inter_XY.begin(), inter_XY.end(),
        inserter(exclusivo_X, exclusivo_X.begin())
        );
    
        // 3 linha dif Y com inter
        
        set_difference(set_Y.begin(), set_Y.end(),
        inter_XY.begin(), inter_XY.end(),
        inserter(exclusivo_Y, exclusivo_Y.begin())
    );
    
    
    // 4 soma do tamanho dos exclusives com o inter
    
    int sum = exclusivo_X.size() + exclusivo_Y.size() + inter_XY.size();
    
    for(int x : inter_XY)
    {
        cout << x << " ";
    }

    if (inter_XY.size() == 0)
    {
        cout << 0;
    }
    
    cout << endl;
    
    for(int x : exclusivo_X)
    {
        cout << x << " ";
    }
    
    if (exclusivo_X.size() == 0)
        cout << 0;

    cout << endl;
        
    for(int x : exclusivo_Y)
    {
        cout << x << " ";
    }
        
    if (exclusivo_Y.size() == 0)
        cout << 0;

    cout << endl;

    cout << sum; // Total de especies diferentes int sum = exclusivo_X.size() + exclusivo_Y.size() + inter_XY.size();

    return 0;
}
