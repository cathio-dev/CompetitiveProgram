#include <bits/stdc++.h>
using namespace std;

long long n;

bool ok(long long k) {
    long long current_acarajes = n;
    long long may = 0;

    while (current_acarajes > 0) // enquanto tem acarajevis no backes
    {
        long long eat = min(k, current_acarajes); // se for k = 10 e cur = 7, ela come 7
        may += eat;
        current_acarajes -= eat;
        current_acarajes = current_acarajes - (current_acarajes*0.10); // parcela do cara

    }

    return may >= (n/2); // true se ja tiver comido pelo menos metade e false se nao
}



int main() {
    cin >> n;

    long long l = 1, r = n;
   while(l < r){
       int mid = l + (r - l) / 2;
       if(ok(mid))
           r = mid;
    else
           l = mid+1;
   }
   return r;
}
