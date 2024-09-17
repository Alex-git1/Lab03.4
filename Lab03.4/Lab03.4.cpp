// Lab_03_4.cpp
// < ��������� ��������� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 13

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, R1, R2;

    cout << "(x, y): "; cin >> x >> y;
    cout << "R1 =  ";  cin >> R1;
    cout << "R2 = "; cin >> R2;

    // ���������� ������ �� ������� ���������
    double distance = sqrt(x * x + y * y);

    // �������� ���� ��� ��������� � ����������� �������
    bool inGrayArea = (R1 <= distance && distance <= R2) ||
        ((x <= 0 && y >= 0));

    if (inGrayArea) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    cin.get();
    return 0;
}
