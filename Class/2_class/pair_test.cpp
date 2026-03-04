#include<iostream>
#include<utility>
using namespace std;
int main(){
	pair<int,int> P1 = {10,12};
	pair<int,int> P2 = {10,13};

	if (P1 > P2)
	     cout << "P1 ganha" << endl;
	else if (P2 > P1)
	     cout << "P2 ganha" << endl;
	else
	   cout << "empate" << endl;
        return 0;
} 
