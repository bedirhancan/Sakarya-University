#include <iostream>
using namespace std;

void Hanoi(int diskSayisi, char kaynak, char ara, char hedef, int &adimSayisi) {
    if (diskSayisi == 1) {
        cout << "Diski " << kaynak << "'dan " << hedef << "'ya tasi." << endl;
        adimSayisi++;
    } else {
        Hanoi(diskSayisi - 1, kaynak, hedef, ara, adimSayisi);
        cout << "Diski " << kaynak << "'dan " << hedef << "'ya tasi." << endl;
        adimSayisi++;
        Hanoi(diskSayisi - 1, ara, kaynak, hedef, adimSayisi);
    }
}

int main() {
    int diskSayisi;
    cout << "Disk sayisi:";
    cin >> diskSayisi;
    int adimSayisi = 0;
    Hanoi(diskSayisi, 'A', 'B', 'C', adimSayisi);
    cout << "Toplam adim sayisi: " << adimSayisi << endl;
    return 0;
}
