#include <iostream>
using namespace std;

int T;
string w;

int main() {
	cin >> T;
	while(T--){
		cin >> w;
		
		if(w.size() > 10){
			cout << w[0] << w.size() - 2 << w[w.size() - 1] << endl;
		} else {
			cout << w << endl;
		}
	}
	return 0;
}