#include <iostream>
#include <map>
using namespace std;

map<string, int> words;
int n;
string word;

int main() {
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> word;
		if(!words[word]){
			cout << "OK\n";
			words[word] = 1;
		} else {
			cout << word << words[word] << "\n";
			words[word]++;
		}
	}
	return 0;
}