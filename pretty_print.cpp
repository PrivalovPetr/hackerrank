#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        {
            cout << hex << showbase << left << nouppercase << (long long) A << endl;
        }
        {
            cout << setw(15) << setfill('_') << right
                << showpos << fixed << setprecision(2) << B << endl;
        }
        {
            cout << noshowpos << uppercase << scientific << setprecision(9) << C << endl;
        }
        
		

	}
	return 0;

}
