#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\t\tЛАБОРАТОРНА РОБОТА #4\n\n";


	
	cout << "\t\t****1**** ПРОГРАМА SUM\n\n";
	
	double a;
	double sum = 0;
	int  i = 2;
	cout << "Введфіть будь-яке ціле число для знаходження суми чисел (0 ознака кінця): "<<endl;
	cout << "a[1] = ";
	cin >> a;

	while (a!=0) {
		sum += a;
		cout << "a["<< i << "] = ";
		cin >> a;
		i++;
		
		}	cout << "SUM = " << sum << endl;





	cout << "\t\t****2**** ПРОГРАМА PRODUCT" << endl;
	int a1;
	double b1 = 1;
	int  j = 2;
	double c1;
	cout << "Введіть будь-яке ціле число для знаходження добутку введених парних чисел (0 ознака кінця): " << endl;
	cout << "a[1] = ";
	cin >> a1;
	
	while (a1 != 0) {
		c1 = a1 % 2;
		if (c1 == 0) {
			b1 *= a1;
		}
		cout << "a[" << j << "] = ";
		cin >> a1;
		j++;
	
	}
	cout << "ДОБУТОК = " << b1 << endl;
	



	cout << "\t\t****3**** ПРОГРАМА COUNTODD\n\n";
	int a2;
	double c2;
	double i2 = 0;
	cout << "Введіь число (0 ознака кінця) = ";
	cin >> a2;
	while (a2!=0) {
		c2 = a2 % 2;
		if (c2 != 0) {
			a2 = i2;
			i2++;
		}
		cout << "Введіь число (0 ознака кінця) = ";
		cin >> a2;
		
	}
	cout << "Зустрілося " << i2 << " непарних числа\n";
	
	



	cout << "\t\t****4**** ПРОГРАМА Parrot2\n\n";
	cin.ignore(32767, '\n');
	char c[50];
	cout << "Введіть довільний рядок з клавіатури: ";
	cin.getline(c, 50);
	cout << c << endl;
	while ( c[0] !='\0') {
		cout << "Введіть довільний рядок з клавіатури: (ENTER - ознака кінця): ";
		cin.getline(c, 50);
		cout << c << endl;
	}
	 







	cout << "\t\t****5**** ПРОГРАМА MENU2\n\n";

	int f5;
	char a5[] = " Новини дня: ФПМ перемогли у змаганнях з футболу";
	char b5[] = " Анекдот: Ніколи не смійся з цигана, що їде на вилосипеді. Це може бути твій вилосипед =)";
	char c5[] = " Автор: Мороз Микола";

	cout << " Працює інформаційна система факультету прикладної математики: " << endl;
	cout << " 1. Новини дня " << endl;
	cout << " 2. Анекдот тижня" << endl;
	cout << " 3. Автора!!!" << endl;
	cout << " 0. Вихід!" << endl;
	cout << " Введіть відповідний номер і натисніть ENTER: ";
	cin >> f5;
	cout << endl;

	while (f5 != 0) {
		switch (f5) {
		case 1:
			cout << a5 << endl;
			cout << " Введіть відповідний номер і натисніть ENTER: ";
			cin >> f5;
			cout << endl;
			break;
		case 2:
			cout << b5 << endl;
			cout << " Введіть відповідний номер і натисніть ENTER: ";
			cin >> f5;
			cout << endl;
			break;
		case 3:
			cout << c5 << endl;
			cout << " Введіть відповідний номер і натисніть ENTER: ";
			cin >> f5;
			cout << endl;
			break;
		case 0:
			cout << endl;
			break;
		default:
			cout << "Невірний вибір, введіть відповідний номер і натисніть ENTER:";
			cin >> f5;
			cout << endl;
			break;
		}

	}





	cout << "\t\t****6**** ПРОГРАМА MAX2\n\n";
	int k, max, h = 3;
	cout << "Введіть будь-яке число: a[1] (0 - ознака кінця) = ";
	cin >> k;
	max = k;
	cout << "Введіть будь-яке число: a[2] (0 - ознака кінця) = ";
	cin >> k;
	while (k != 0) {
		if (k > max) {
			max = k;
		}
		cout << "Введіть будь-яке число: a[" << h << "] (0 - ознака кінця) = ";
		cin >> k;
		h++;
	}
	cout << "MAX = " << max << endl;


	




	cout << "\t\t****7**** ПРОГРАМА FIBO\n\n";
	double k7, d7 = 0;
	double c7 = 0, i7 = 0;
	double a7 = 0, b7 = 1;
	cout << "Введіть будь-яке ціле число для знаходження Фіабонічного числа: ";
	cin >> k7;
	cout << endl;
	cout << "normal = " << k7 << endl;
	while (i7 < k7) {
		a7 = b7;
		b7 = c7;
		c7 = a7 + b7;
		i7++;
	}
	cout << "fiabon = " << c7 << endl;










	cout << "\t\t****8**** ПРОГРАМА HIT2\n\n";
	float x0 = 0, y0 = 0;
	float R = 10, x, y;
	cout << " Введіть координати (х,у) точки А на площині (для перевірки чи попало число у коло): " << endl;
	cout << " x = ";
	cin >> x;
	cout << " y = ";
	cin >> y;
	cout << endl;

	while (((x * x + y * y) <= R * R)|| ((x * x + y * y) >= R * R)) {
		if ((x * x + y * y) < R * R) {
			cout << " Точка (" << x << "," << y << ") потряпляє в коло з центром в точці (" << x0 << ";" << y0 << ") радіуса " << R << endl;
			break;
		}
		else if ((x * x + y * y) == R * R) {
			cout << " Точка (" << x << "," << y << ") потряпляє на коло з центром в точці (" << x0 << ";" << y0 << ") радіуса " << R << endl;
			break;
		}
		else if (((x * x + y * y) > R * R) && ((x * x + y * y) < 160)){
			cout << "Тепліше " << endl;
			cout << " Введіть координати (х,у) точки А на площині: " << endl;
			cout << " x = ";
			cin >> x;
			cout << " y = ";
			cin >> y;
			cout << endl;
		}
		else if (((x * x + y * y) > R * R) && ((x * x + y * y) > 160)) {
			cout << "Холодно" << endl;
			cout << " Введіть координати (х,у) точки А на площині: " << endl;
			cout << " x = ";
			cin >> x;
			cout << " y = ";
			cin >> y;
			cout << endl;
		}
	}
	





	cout << endl << endl;
	cout << "\t\t****9**** ПРОГРАМА Factor\n\n";
    double k1;
	int i4 = 1;
	double factor= 1;
	cout << "Введіть будь-яке ціле число для знаходження факторіалу: ";
	cin >> k1;
	while (i4 <= k1) {
		factor *= i4;
		i4++;
	}
	cout << k1 << "! = " << factor << endl;



	




cout << "\t\t****9.2**** ПРОГРАМА Factor (удосконалена програма Factor) \n\n";
double k2;
int i5 = 1;
double factor2 = 1;
cout << "Введіть будь-яке ціле число для знаходження факторіалу: ";
cin >> k2;


while (k2 >= 0 || k2 <=0) {
	if (!cin) {
		cout << "Невірно введено число " << endl;
		cout << "Введіть будь-яке інше ціле число (не словом, та не десятковим дробом): ";
		cin.clear();
		cin.ignore(32767, '\n');
		cin >> k2;
		cout << endl;
	}
	else if (k2 >= 0) {
		while (i5 <= k2) {
			factor2 *= i5;
			i5++;
		}
		cout << k2 << "! = " << factor2 << endl;
		break;
	}
	else if (k2 < 0) {
		cout << "Число повинне бути додатнім " << endl;
		cout << "Введіть інше число: ";
		cin >> k2;
		cout << endl;
	}
	
	
}




  system("pause");
}