#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std; // set -> std

// MIssão: 

int main() {
    int N, Q;
    
    set<string> set_animais; // Toods
    set<string> set_verificar; // OS que estao vivos ou nao

    cin >> N;

    for(int i=0; i < N; i++) {
        string animal;
        cin >> animal;
        set_animais.insert(animal);
    }

    cin >> Q;

    for(int i=0; i < N; i++) {
        string verificar;
        cin >> verificar;
        set_animais.insert(verificar);
        
        set<string> set_animais_vivos; // intersec

        set_intersection(
            set_animais.begin(), set_animais.end(),
            set_verificar.begin(), set_verificar.end(),
            inserter(set_animais_vivos, set_animais_vivos.begin())
        );

        if (set_animais_vivos.size() == 0)
        {
            cout << verificar << " foi extinto :(" << endl;
        }else{
            cout << verificar << " vive!";
        }

    }

    return 0;



}