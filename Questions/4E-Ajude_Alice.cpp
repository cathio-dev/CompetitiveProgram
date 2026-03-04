#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main()
{
    int h1, h2, m1, m2;
    char dot1, dot2;

    cin >> h1 >> dot1 >> m1;
    cin >> h2 >> dot2 >> m2;

    //cout << h1 << dot1 << m1 << h2 << dot2 << m2;
    

    int total_sec1 = (60*h1) + m1;
    int total_sec2 = (60*h2) + m2;

    int dif_sec = total_sec1 - total_sec2;

    int final_min = (dif_sec/60);
    int final_sec = (dif_sec%60);

    // cout << "\n" << final_min;
    // cout << "\n" << final_sec;

    if (final_sec < 10)
    {
        cout << final_min << ".0" << final_sec;
    }else{
        cout << final_min << "." << final_sec;
    }



}
