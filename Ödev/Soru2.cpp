#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    string months[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string aylar[12] = {"Ocak","Şubat","Mart","Nisan", "Mayıs", "Haziran","Temmuz","Ağustos","Eylül","Ekim","Kasım","Aralık"};
    int secim;
    cout << "Türkçe menü istiyorsanız 1 yazınız, If you want an English menu, write 2 :";
    cin >> secim;

    int aySecimi;
    if (secim == 1) {
        cout << "Kaçıncı sıradaki ayı yazdırmak istiyorsunuz: ";
        cin >> aySecimi;
        if (aySecimi > 13 || aySecimi < 1) {
            cout << "Girdiğiniz ay numarası geçerli değil.";
        }
        else
            cout << aylar[aySecimi -1 ];
    }

    if (secim == 2) {
        cout << "Which month do you want to print as a number: ";
        cin >> aySecimi;
        if (aySecimi > 13 || aySecimi < 1) {
            cout << "Invalid month number";
        }
        else
            cout << months[aySecimi - 1];

    }
}
