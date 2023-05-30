#include <iostream>
using namespace std;

int main() {

	int a, b, secim,sonuc;
	


	cout << "1-Toplama"<<endl;
	cout << "2-Cikarma" << endl;
	cout << "3-Carpma" << endl;
	cout << "4-Bolme" << endl;


	cout << "Lutfen secim yapiniz: ";
	cin >> secim;

	if (secim > 4)
	{
		cout << "Lutfen dogru parametrelerde secim yapiniz !!";
	}


	switch (secim)
	{
	case 1:
		cout << "Lutfen ilk sayiyi giriniz: ";
		cin >> a;
		cout << "Lutfen ikinci sayiyi giriniz: ";
		cin >> b;
		sonuc = a + b;
		cout << "Isleminicizin sonucu: " << sonuc;
		break;

	case 2:
		cout << "Lutfen ilk sayiyi giriniz: ";
		cin >> a;
		cout << "Lutfen ikinci sayiyi giriniz: ";
		cin >> b;
		sonuc = a - b;
		cout << "Isleminizin sonucu: " << sonuc;
		break;

	case 3:
		cout << "Lutfen ilk sayiyi giriniz: ";
		cin >> a;
		cout << "Lutfen ikinci sayiyi giriniz: ";
		cin >> b;
		sonuc = a * b;
		cout << "Isleminizin sonucu: " << sonuc;
		break;

	case 4:
		cout << "Lutfen ilk sayiyi giriniz: ";
		cin >> a;
		cout << "Lutfen ikinci sayiyi giriniz: ";
		cin >> b;
		sonuc = a / b;
		cout << "Isleminizin sonucu: " << sonuc;
		break;

	}

	return 0;
}