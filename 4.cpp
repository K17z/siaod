#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int n, i, j, q;
    int position = 0;
    cout << "������� ������ �������: "; cin >> n;
    int* arr = new int[n]; // ������� ������ �� n ���������

    for (int i = 0; i < n; i++) //������ ���������� �������
    {
        arr[i] = rand() % 100; // ��������� ������ ���������� �������
        cout << arr[i] << "  "; // ����� ������� �� �����
    }
    cout << endl;
    cout << "������� ����� ������� ���� �����: "; cin >> q;
    if (arr[n - 1] != q) //��������, ��� �� �������� �������� �� ��������� �������
    {
        arr[n - 1] = q;  //��������� &quot;������&quot;
        for (; arr[position] != q; position++);  //�����
        position++; //������������ ����� �������
    }
    else {
        cout << n;
        return 0;
    }
    cout << "������� ���������� ����� �����: " << position; //���� ������� ������, �� ���������� ��� �������, ���� ���, �� 0
}