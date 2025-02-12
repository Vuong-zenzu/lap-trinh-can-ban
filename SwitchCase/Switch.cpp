#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int intInput = 0;
	bool isRunning = true;

	while (isRunning) {
		cout << "Nhap vao menu tuong ung: " << "\n";
		cout << "1: Bai 1" << "\n";
		cout << "2: Bai 2" << "\n";
		cout << "3: Bai 3" << "\n";
		cout << "4: Bai 4" << "\n";
		cout << "5: Bai 5" << "\n";
		cout << "6: Bai 6" << "\n";
		cout << "7: Bai 7" << "\n";
		cout << "8: Bai 8" << "\n";
		cout << "9: Bai 9" << "\n";
		cout << "10: Bai 10" << "\n";
		cout << "11: Bai 11" << "\n";
		cout << "12: Bai 12" << "\n";
		cout << "0: Thoat" << "\n";
		cout << "nhap so: ";
		cin >> intInput;

		switch (intInput)
		{
		case 1: {
			char strHello[100] = "Xin Chao";
			cout << strHello << endl;
			break;
		}
		case 2: {
			int int5 = 5;
			int int8 = 8;
			cout << "Ket qua cua phep cong 5 + 8 la: " << int5 + int8 << endl;
			break;
		}
		case 3: {
			char strUserName[100];
			cout << "Nhap vao ten nguoi dung: ";
			cin >> strUserName;
			cout << "Ten nguoi dung: " << strUserName;
			cout << "\n";
			break;
		}
		case 4: {
			int intSo1;
			int intSo2;
			cout << "Nhap vao so thu nhat: ";
			cin >> intSo1;
			cout << "Nhap vao so thu hai: ";
			cin >> intSo2;
			cout << "Ket qua cua phep cong la: " << intSo1 + intSo2;
			cout << "\n";
			break;
		}
		case 5: {
			int intSoA;
			int intSoB;
			int intTemp;
			cout << "Nhap vao so A: ";
			cin >> intSoA;
			cout << "Nhap vao so B: ";
			cin >> intSoB;
			intTemp = intSoA;
			intSoA = intSoB;
			intSoB = intTemp;
			cout << "So A sau khi hoan vi: " << intSoA << "\n";
			cout << "So B sau khi hoan vi: " << intSoB << "\n";
			cout << "\n";
			break;
		}
		case 6: {
			float a, b, Tong, Hieu, Tich, Thuong;
			cout << "Nhap vao so thu nhat: ";
			cin >> a;
			cout << "Nhap vao so thu hai: ";
			cin >> b;
			Tong = a + b;
			Hieu = a - b;
			Tich = a * b;
			Thuong = a / b;
			cout << "Tong cua 2 so la: " << Tong << "\n";
			cout << "Hieu cua 2 so la: " << Hieu << "\n";
			cout << "Tich cua 2 so la: " << Tich << "\n";
			cout << "Thuong cua 2 so la: " << Thuong << "\n";
			cout << "\n";
			break;
		}
		case 7: {
			float flA, flB, flC, flMin, flMax;

			cout << "Nhap so A: ";
			cin >> flA;
			cout << "Nhap so B: ";
			cin >> flB;
			cout << "Nhap so C: ";
			cin >> flC;
			flMin = flA;
			flMax = flA;

			if (flMin > flB) {
				flMin = flB;
			}
			if (flMin > flC) {
				flMin = flC;
			}

			if (flMax < flB) {
				flMax = flB;
			}
			if (flMax < flC) {
				flMax = flC;
			}

			cout << "So be nhat la: " << flMin << endl;
			cout << "So lon nhat la: " << flMax << endl;

			break;
		}
		case 8: {
			int n = 0;
			float flResult = 0;
			float flInput = 0;

			cout << "nhap vao so n(n<100): ";
			cin >> n;

			for (int i = 0; i < n; i++) {
				int intPos = i + 1;
				cout << "nhap so thu" << intPos << ":";
				cin >> flInput;
				flResult = flResult + flInput;
			}
			cout << "trung binh cong : " << flResult << endl;
			return 0;
			break;
		}
		case 9: {
			//khai bao bien cho 3 canh tam giac
			float flA, flB, flC;
			// in ra man hinh yeu cau
			cout << "nhap vao ba canh cua tam giac" << "\n";

			// nhap 3 canh cua tam giac
			cout << "nhap canh A: ";
			cin >> flA;

			cout << "nhap canh B: ";
			cin >> flB;

			cout << "nhap canh C: ";
			cin >> flC;

			//tinh chu vi tam giac
			float flCV = flA + flB + flC;

			// heron
			float flHeron = flCV / 2;

			// tinh dien tich
			float flS = sqrt(flHeron * (flHeron - flA) * (flHeron - flB) * (flHeron - flC));

			//kiem tra 3 canh cua tam giac
			if (flA + flB > flC) {
				cout << "chu vi hinh tam giac la: " << flCV << endl;
				cout << "dien tich tam giac la: " << flS;
			}
			else if (flA + flC > flB) {
				cout << "chu vi hinh tam giac la: " << flCV << endl;
				cout << "dien tich tam giac la: " << flS;
			}
			else if (flC + flB > flA) {
				cout << "chu vi hinh tam giac la: " << flCV << endl;
				cout << "dien tich tam giac la: " << flS;
			}
			else {
				cout << "khong hop le";
			}
			break;
		}
		case 10: {
			// in ra man hinh yeu cau
			cout << " nhap vao so cua phuong trinh bac 2";

			//khai bao bien
			double dbA, dbB, dbC;

			//nhap vao 3 so cua phuong trinh bac 2
			cout << "nhap vao so A (Ax^2): ";
			cin >> dbA;

			cout << "nhap vao so B (Bx): ";
			cin >> dbB;

			cout << "nhap vao so C: ";
			cin >> dbC;

			// tinh den ta
			double dbDT = pow(dbB, 2) - (4 * dbA * dbC);

			if (dbDT < 0) {
				cout << "phuong trinh vo nghiem" << endl;
			}
			else if (dbDT == 0) {
				double dbNkep = (-dbB) / (2 * dbA);
				cout << "phuong tring co nghiem kep" << endl;
				cout << "X1=X2" << dbNkep;
			}
			else if (dbDT > 0) {
				double dbX1 = (-dbB - sqrt(dbDT)) / (2 * dbA);
				double dbX2 = (-dbB + sqrt(dbDT)) / (2 * dbA);
				cout << "phuong trinh co 2 nghiem phan biet: " << endl;
				cout << "X1= " << dbX1 << endl;
				cout << "X2= " << dbX2 << endl;
			}
			else if (dbA == 0) {
				cout << "loi" << endl;
			}
			break;
		}
		case 11: {
			int i, j, n;
			cout << "nhap so n: ";
			cin >> n;
			for (i = 1;i <= n;i++, cout << endl)
				for (j = 1;j <= i;j++) {
					cout << j;
				}
			break;
		}
		case 12: {
				double n;
				std::cout << "Nhap so: ";
				std::cin >> n;

				if (std::floor(n) == n)
					std::cout << n << " la so nguyen." << std::endl;
				else
					std::cout << n << " khong phai la so nguyen." << std::endl;
				break;
			}
		case 0: {
			cout << "\nThoat";
			exit(1);
		}
		}
		}
	}