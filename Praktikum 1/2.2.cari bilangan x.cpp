#include <iostream>
#include <stdlib.h>
using namespace std;

void cari(int x, int n) {
	static int i;
	if (n == 0) 
	cout << "Bilangan tidak ditemukan\n";
	else if (x == n) 
	cout << "Bilangan ditemukan setelah perulangan ke " <<i<<endl;
	else {
		i++;
		cari(x, n-1);
	}
}

int main(int argc, char *argv[]) {
	cari(4, 10);
	system("PAUSE");
	return EXIT_SUCCESS;
}
