#include <iostream>
#include<string>
using namespace std;// <iostream>������Ͽ� ����� �̸�������Ҷ� std::�� �������ֱ����ؼ�

int main() {
	cout << "����� �̸��� �����Դϱ�?" << endl;
	string  name; //#include <string>�� ���־��� ����, ũ��������
	getline(cin, name); //cin��ü�� getline()����Լ� �̿� �� ���������� ���ڿ� �Է¹ޱ� ����
	cout << "�ݰ����ϴ� " << name << " ��" << endl;

	int a, o, b;//�Էº�������
	int ag, og, bg;
	int total;

	cout << "apple�� ������ ���Դϱ�? : ";
	cin >> a;

	cout << "orange�� ������ ���Դϱ�? : ";
	cin >> o;

	cout << "banana�� ������ ���Դϱ�? : ";
	cin >> b;

	cout << "apple�� �� �� �ֽ��ϱ�?? : ";
	cin >> ag;

	cout << "orange�� �� �� �ֽ��ϱ�?? : ";
	cin >> og;

	cout << "banana�� �� �� �ֽ��ϱ�?? : ";
	cin >> bg;


	total = (a * ag + o * og + b * bg) - 500; // ������ ��� 
	cout << "�� " << total << "�� �Դϴ�.";


}