#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "selamat Belajar do Prodi TI UMY" << endl;
		throw 0.5;	//melemparkan sebuah integer maka
		cout << "Pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		/*jika selain integer maka block ini akan dieksekusi*/
		cout << "default pengecualian dieksekusi" << endl;
	}
	return 0;
}