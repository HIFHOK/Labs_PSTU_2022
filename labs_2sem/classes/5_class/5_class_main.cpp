#include "Object.h"
#include "Pair.h" 
#include "Hipotenuse.h" 
#include "Vector.h" 
#include <string> 
#include <iostream>
using namespace std;
void main() { 
	Vector v(5);//������ �� 5 ��������� 
	Pair a;//������ ������ Pair 
	cin>>a; 
	Hipo b;// ������ ������  Hipo
	cin>>b; 
	Object*p=&a;//������ ��������� �� ������ ������ Pair 
	v.Add(p);//��������� ������ � ������ 
	p=&b;//������ ��������� �� ������ ������ 
	v.Add(p); //��������� ������ � ������
	cout<<v;//����� �������
}