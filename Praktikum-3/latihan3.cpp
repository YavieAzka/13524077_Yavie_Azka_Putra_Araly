#include <iostream>
using namespace std;

class RekeningBank{
    private:
        double saldo;
    public:
        RekeningBank(double saldoAwal){
            saldo = saldoAwal;
        }
        void setor(double jumlah){
            saldo += jumlah;
        }
        void tarik(double jumlah){
            if(jumlah > saldo){
                cout << "Penarikan Gagal!" << endl;
            } else {
                saldo -= jumlah;
                cout << "Penarikan Berhasil!" << endl;
                cout << "Saldo saat ini: " << saldo << endl;
            }
        }
};

int main(){
    RekeningBank rekening(1000.0);
    rekening.setor(500.0);
    rekening.tarik(200.0);
    rekening.tarik(1500.0);
}