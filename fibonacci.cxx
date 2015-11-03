#include <iostream>
using namespace std;

int main() {

	int N;	
	cout << "N" << endl;
	cin >> N;
	
	int f0 = 0;
	int f1 = 1;
	int f;
	
	for(int i=2; i<=N; i++) {
		f = f1 + f0;
		f0 = f1;
		f1 = f;
	}

	cout << "f = " << f << endl;

	return 0;
}
