#include <iostream>
#include <math.h>
using namespace std;
int main(){
    using namespace std;
    int N, M;
    cout << "N degerini giriniz: ";
    cin >> N;
    cout << "M degerini giriniz: ";
    cin >> M;
    float toplam = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++)
            toplam += 1 / (pow(j, 2) + 3);
    }
    cout << "Islem Sonucu: " << toplam;
  
}