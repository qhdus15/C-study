#include <iostream>
#include<string>
using namespace std;// <iostream>헤더파일에 선언된 이름을사용할때 std::을 생략해주기위해서

int main() {
	cout << "당신의 이름은 무엇입니까?" << endl;
	string  name; //#include <string>을 써주었기 떄문, 크기상관없음
	getline(cin, name); //cin객체의 getline()멤버함수 이용 시 공백포함한 문자열 입력받기 가능
	cout << "반갑습니다 " << name << " 님" << endl;

	int a, o, b;//입력변수지정
	int ag, og, bg;
	int total;

	cout << "apple의 가격은 얼마입니까? : ";
	cin >> a;

	cout << "orange의 가격은 얼마입니까? : ";
	cin >> o;

	cout << "banana의 가격은 얼마입니까? : ";
	cin >> b;

	cout << "apple은 몇 개 있습니까?? : ";
	cin >> ag;

	cout << "orange은 몇 개 있습니까?? : ";
	cin >> og;

	cout << "banana은 몇 개 있습니까?? : ";
	cin >> bg;


	total = (a * ag + o * og + b * bg) - 500; // 최종값 계산 
	cout << "총 " << total << "원 입니다.";


}