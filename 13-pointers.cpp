
#include <iostream>
using namespace std;

int main() {

	//25.1
	int const size = 5;
	int masivf[size] = { 1, 2, 3, 4, 5 };
	int masivs[size];
	int* pr1 = masivf;
	int* pr2 = pr1;
	for (int i = 0; i < size; i++) {
		*pr2 = *pr1++;
		/*masivs[i] = *pr2;*/
		cout << masivs[i] << endl;
	}

	//25.2
	int const size = 5;
	int masiv[size] = { 1,2,3,4,5 };
	int half = size / 2;
	int temp;
	for (int* pr = masiv; pr <= masiv + half; pr++) {
		temp = *pr;
		/*cout << temp << endl;*/
		*pr = masiv[size - temp];
		masiv[size - temp] = temp;
	}
	for (int j = 0; j < size; j++) {
		cout << masiv[j] << endl;
	}

	//25.3
	int const size = 5;
	int masivf[size] = { 1,2,3,4,5 };
	int masivs[size] = { 0 };
	int* pr1 = masivf;
	int* pr2 = masivs + size - 1;
	for (int* pr = masivf; pr < masivf + size; pr++) {
		*pr2-- = *pr;
	}
	for (int i = 0; i < size; i++) {
		cout << masivs[i] << endl;
	}

	//26.1
	int m, n, counter = 0, c = 0;
	cin >> m >> n;
	int* ma = new int[m];
	int* mb = new int[n];
	int* mc = new int[c];
	bool flag;
	for (int x = 0; x < m; x++) {
		ma[x] = 1 + rand() % 10;
		cout << ma[x] << "   ";
	}
	cout << endl;
	for (int x = 0; x < n; x++) {
		mb[x] = 1 + rand() % 10;
		cout << mb[x] << "   ";
	}
	cout << endl;
	for (int i = 0; i < m; i++) {
		flag = false;
		for (int j = 0; j < n; j++) {
			if (i != j and ma[i] == ma[j]) {
				ma[j] = ma[j + 1];
				m--;
			}
			if (ma[i] != mb[j]);
			else flag = true;
		}
		if (flag == false) {
			mc[counter] = ma[i];
			cout << mc[counter] << "   ";
			counter++;
		}
	}


	//26.2	
	int move, m, n, counter = 0, c = 0;
	cin >> m >> n;
	int* ma = new int[m];
	int* mb = new int[n];
	int* mc = new int[c];
	bool flag;
	for (int x = 0; x < m; x++) {
		ma[x] = 1 + rand() % 10;
		cout << ma[x] << "   ";
	}
	cout << endl;
	for (int x = 0; x < n; x++) {
		mb[x] = 1 + rand() % 10;
		cout << mb[x] << "   ";
	}
	cout << endl;
	for (int i = 0; i < m; i++) {
		flag = false;
		for (int j = 0; j < n; j++) {
			if (i != j and ma[i] == ma[j]) {
				ma[j] = ma[j + 1];
				m--;
			}
			if (i != j and mb[i] == mb[j]) {
				mb[j] = mb[j + 1];
				m--;
			}
			if (ma[i] != mb[j])move = 1;
			else if (mb[i] != ma[j])move = 0;
			else flag = true;
		}
		if (flag == false) {
			if (move == 1)mc[counter] = ma[i];
			if (move == 0)mc[counter] = mb[i];
			cout << mc[counter] << "   ";
			counter++;
		}
	}

}
