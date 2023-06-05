#include "Time.h"
#include <iostream>
using namespace std; 
void main() 
{
	Time a;//����������� ��� ����������
	Time b; //����������� ��� ����������
	Time c; //����������� ��� ���������� 
	cin>>a;//���� ����������
	cin>>b;//���� ���������� 
	
	c=a+b;//�������� 

	cout << "a=" << a << endl; //����� ����������
	cout<<"b="<<b<<endl; //����� ���������� 
	cout<<"c="<<c<<endl; //����� ���������� 
	c = a - b;//���������
	cout << "c=" << c << endl; //����� ���������� 
}