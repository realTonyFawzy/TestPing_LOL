#include <windows.h> //MessageBox(NULL, TEXT("ايه يسطا عامل ايه"), TEXT("Message"), MB_OK | MB_ICONASTERISK);
#include <stdlib.h>
#include <tchar.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>


using namespace std;
int main(int argc, _TCHAR* argv[])
{
	SetConsoleTitle(_T("TestPing for LOL - By: 6rwadh v0.1"));
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240 | 240); // ابيض - الخلفيه ازرق
	system("cls");





	while (true) {

		cout << "\tWelcome to TestPING" << endl << endl;


		cout << setw(12) << "NA" <<
			setw(3) << "1" <<

			setw(9) << "EUW" <<
			setw(3) << "2" << endl <<

			setw(12) << "EUNE" <<
			setw(3) << "3" <<

			setw(9) << "OCE" <<
			setw(3) << "4" << endl <<

			setw(12) << "LAN" <<
			setw(3) << "5" <<

			setw(9) << "EXIT" <<
			setw(3) << "6" << endl <<
			endl;
		string x;
		cout << "Server=> ";
		getline(cin, x);

		if (x == "1") {
			system("ping 104.160.131.3");
			MessageBox(NULL, TEXT("اي بي السيرفر: 104.160.131.3\nاسم السيرفر: NA\n تم تنفيذ العمليه بنجاح"), TEXT("تم بنجاح عمل اختبار سرعه وصول"), MB_OK | MB_ICONASTERISK);
			cout << "\n\n" << endl;
		} else if (x == "2") {
			system("ping 104.160.141.3");
			MessageBox(NULL, TEXT("اي بي السيرفر: 104.160.141.3\nاسم السيرفر: EUW\n تم تنفيذ العمليه بنجاح"), TEXT("تم بنجاح عمل اختبار سرعه وصول"), MB_OK | MB_ICONASTERISK);
			cout << "\n\n" << endl;
		} else if (x == "3") {
			system("ping 104.160.142.3");
			MessageBox(NULL, TEXT("اي بي السيرفر: 104.160.142.3\nاسم السيرفر: EUNE\n تم تنفيذ العمليه بنجاح"), TEXT("تم بنجاح عمل اختبار سرعه وصول"), MB_OK | MB_ICONASTERISK);
			cout << "\n\n" << endl;
		} else if (x == "4") {
			system("ping 104.160.156.1");
			MessageBox(NULL, TEXT("اي بي السيرفر: 104.160.156.1\nاسم السيرفر: OCE\n تم تنفيذ العمليه بنجاح"), TEXT("تم بنجاح عمل اختبار سرعه وصول"), MB_OK | MB_ICONASTERISK);
			cout << "\n\n" << endl;
		} else if (x == "5") {
			system("ping 104.160.136.3");
			MessageBox(NULL, TEXT("اي بي السيرفر: 104.160.136.3\nاسم السيرفر: LAN\n تم تنفيذ العمليه بنجاح"), TEXT("تم بنجاح عمل اختبار سرعه وصول"), MB_OK | MB_ICONASTERISK);
			cout << "\n\n" << endl;
		} else if (x == "6") {
			MessageBox(NULL, TEXT("يسطا انت سجلت خروجك ناو مع السلامه"), TEXT("تم تسجيل خروج بنجاح"), MB_OK | MB_ICONWARNING);
			break;
		}


	}
	return 0;
}

