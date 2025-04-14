#include <iostream>
#include <locale>

using namespace std;













int main(const char* args[])
{
    setlocale(LC_ALL, "RUS");

    cout << "1. ������������ ������ � ���������� ����� � ��������.��������� ��� �������� � ���, ����, ������ � �������.\n";
    int seconds = 0;
    cout << "������� �������: ";
    cin >> seconds;
    int days = seconds / 86400;
    seconds %= 86400;
    int hours = seconds / 3600;
    seconds %= 3600;
    int minutes = seconds / 60;
    cout << days << " - Days\n" << hours << " - Hours\n" << minutes << " - Minutes \n" << seconds % 60 << " - Seconds\n";



    cout << "2. ��������� ������, �������� ���������� ������.\n";
    int days2, hours2, minutes2;
    cout << "������� ���, ����, ������: ";
    cin >> days2 >> hours2 >> minutes2;
    cout << days2 * 86400 + hours2 * 3600 + minutes2 * 60 << " - seconds\n";



    cout << "\n3. ������������ ������ � ���������� ���������� �� ��������� � �����, �� ������� ����� �������.��������� ��������, � ������� ��� ����� �����.\n";
    double distance = 0;
    cout << "������� ����������: ";
    cin >> distance;
    double time = 0;
    cout << "������� �����: ";
    cin >> time;
    cout << "Speed: " << distance / time;



    cout << "\n\n4. ������������ ������ � ���������� ����� ������ � ����� ���������� ����������� ���������(����, ������ � �������).��������� ��������� ���������, ���� ��������� ������ ���������� 30 ������.\n";
    double seconds3, minutes3, hours3;
    double seconds4, minutes4, hours4;
    double check = 0;
    cout << "������� ����� ������ ��������� (���� ������ �������): ";
    cin >> hours3 >> minutes3 >> seconds3;
    cout << "������� ����� ��������� ��������� (���� ������ �������): ";
    cin >> hours4 >> minutes4 >> seconds4;
    double startInSeconds = hours3 * 3600 + minutes3 * 60 + seconds3;
    double endInSeconds = hours4 * 3600 + minutes4 * 60 + seconds4;
    if (endInSeconds < startInSeconds) {
        check += 86400 - startInSeconds;
        double result = (check + endInSeconds)/60 * 30;
        cout << "Result: " << result;
    }
    else {
        double result = (endInSeconds - startInSeconds)/60 * 30;
        cout << "Result: " << result;
    }




    cout << "\n\n5. ������������ ������ � ���������� ����� � ������� � ���� �������, ���� � �����.���������, ������� ������������ ������ ������ ��������, ���� � ������.��� ���� ���������� ��������, ���� � ������ ������ ���� �����.������������� ������� �� ����� ����� � �������.";
    double uah, changeInDollar, changeInEvro, changeInRubl;
    cout << "\n������� ����� � ������� � ���� �������, ���� � �����: ";
    cin >> uah >> changeInDollar >> changeInEvro >> changeInRubl;
    int dollarResult = uah / changeInDollar;
    int changeInUah = uah - dollarResult * changeInDollar;
    cout << "Dollar: " << dollarResult << "\nChange in UAH: " << changeInUah;
    int evroResult = uah / changeInEvro;
    int changeInUah2 = uah - evroResult * changeInEvro;
    cout << "\nEvro: " << evroResult << "\nChange in Evro: " << changeInUah2;
    int rublResult = uah / changeInRubl;
    int changeInUah3 = uah - rublResult * changeInRubl;
    cout << "\nRubl: " << rublResult << "\nChange in UAH: " << changeInUah3;



    cout << "\n\n6. ������������ ������ � ���������� ����� � ��������, ��������� � ������ �������� ���.���������, ������� ����� ����� ��� �������� ������ �� ������, ���� ������� ���� ���������� 8 �����.";

    int seconds5;
    cout << "\n������� ����� ��������� � ������ �������� ��� � ��������: ";
    cin >> seconds5;
    if (seconds5 / 3600 >= 8) {
        cout << "0 - hours";
    }
    else {
        cout << 8 - seconds5 / 3600 << " - hours";
    }
   






    cout << "\n\n7. ������������ ������ � ���������� ��������� ������ ��������, �� ���������� � ������� ������.��������� ����� ����� ������.";
    double cost, quantity, discount;
    cout << "\n������� ��������� ������ ��������, �� ���������� � ������� ������: ";
    cin >> cost >> quantity >> discount;
    double result2 = quantity * cost - (quantity * cost / 100 * discount);
    cout << "Result: " << result2;







    cout << "\n\n8. �������� ��������� ���������� 100$ + 5 % �� ������.������������ ������ � ���������� ����� ����� ������ ��������� �� �����.��������� �������� �������� ���������.";
    double quantity2;
    cout << "\n������� ����� ����� ������ ��������� �� �����: ";
    cin >> quantity2;
    double result3 = 100 + quantity2 / 100 * 5;
    cout << "Result: " << result3;




    cout << "\n\n9. ������������ ������ � ���������� ������ ������ ������ � ���������� � �������� �������� - ���������� � ����� � �������.����������, �� ����� �����(����, ������ � �������) ��������� �����.";
    int gbayt, b;
    cout << "\n������� ������ ������ ������ � ���������� � �������� �������� - ���������� � ����� � �������: ";
    cin >> gbayt >> b;
    int gb = gbayt * 8000000000;
    int seconds2 = gb / b;
    int hours5 = seconds2 / 3600;
    seconds2 %= 3600;
    int minutes5 = seconds2 / 60;
    seconds2 %= 60;
    cout << "Hours: " << seconds2 << "\nMinutes: " << minutes5 << "\nSeconds: " << seconds2;





    cout << "\n\n10. ������������ ������ � ���������� ����� ������ � ����������.���������, ������� �� ��� ���������� ������� �������� 760 �����.";
    int gbayt2;
    cout << "\n������� ����� ������ � ����������: ";
    cin >> gbayt2;
    cout << "Result: " << gbayt2 * 1000 / 760;





    cout << "\n\n11. ������������ ������ � ���������� ������� �����.��������� ��� �� ���� ������ ����� ������� � ������� �� �����.";
    double number;
    cout << "������� ������� �����: ";
    cin >> number;

    double abbreviated = number * 100;
    int rounding;
    if (abbreviated >= 0)
        rounding = (int)(abbreviated + 0.5);
    else
        rounding = (int)(abbreviated - 0.5);
    number = rounding / 100.0;
    cout << "���������� �����: " << number << endl;

    



    cout << "\n\n12. ������������ ������ � ���������� ���������� ���������, ������� �������, � ���������� ����������.���������, ������� ��������� ���������� ��������� �� ������ ����� ���������, � �����, ������� ��������� ���������� ��������, ������� �������.";
    double students, debtors;
    cout << "\n������� ���������� ���������, ������� �������, � ���������� ����������: ";
    cin >> students >> debtors;
    double allStudents = students + debtors;
    if (allStudents <= 0) {
        cout << "������: ����� ���������� ��������� �� ����� ���� ���� ��� ������ ����.";
    }
    else {
        double percentOfStudents = students / allStudents * 100;
        double percentOfDebtors = debtors / allStudents * 100;
        cout << "������� ������� ��������: " << percentOfStudents << "\n������� �� ������� ��������:" << percentOfDebtors;
    }


    cout << "\n\n13. ������������ ������ � ���������� ����� � ��������, ��������� � ������ ���.����������, ������� �������(�����, ����� � ������) �������� �� ��������.";
    int seconds6;
    cout << "\n������� ����� ��������� � ������ ��� � ��������: ";
    cin >> seconds6;
    if (seconds6  >= 86400) {
        cout << "0";
    }
    else {
        int hours6 = 24 - seconds6 / 3600;
        seconds6 %= 3600;
        int minutes6 =  seconds6 / 60;
        seconds6 %= 60;
        cout << "�����: " << hours6 << "\n�����: " << minutes6 << "\n������: " << seconds6;
    }


    cout << "\n\n14. ������������ ������ � ���������� ����� ������ ������ � ����������.���������, ������� ������ ����������� ��� �������� ������ �� ������ ���������(������ ������� ������� ������ 1.44 �����)";
    double gbayt3;
    cout << "\n������� ����� ������ ������ � ����������: ";
    cin >> gbayt3;
    cout << "Result: " << gbayt3 * 1000 / 1.44;




    cout << "\n\n15. ������������ ������ � ���������� ����� � �������, ���� ������ � ������� � ���������� ������ �� ���.���������, ������� ����� ����� � ������������.";
    double uah2, term, year;
    cout << "\n������� ����� � �������, ���� ������ � ������� � ���������� ������ �� ���: ";
    cin >> uah2 >> term >> year;
    double income = uah2 * (year / 100) * term / 12;
    cout << "� ������������ ����� " << income + uah2 << " ������";

    return 0;
}