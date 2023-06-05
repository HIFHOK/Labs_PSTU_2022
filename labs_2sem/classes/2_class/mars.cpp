#include "mars.h" 
#include <iostream>
#include <string> 
using namespace std;
//����������� ��� ����������
mars::mars()
{
	otp = "";
	naz = "";
	time = 0;
	cout << "Constructor bez parametrov dlia objecta: " << this << endl;
}
//����������� � �����������
mars::mars(string N, string K, float S)
{
	otp = N;
	naz = K;
	time = S;
	cout << "Constructor s parametrami dlia objecta: " << this << endl;
} //����������
mars::mars(const mars& obj)
{
	this->otp = obj.otp;
	this->naz = obj.naz;
	this->time = obj.time;
}
mars::~mars()
{
	cout << "Destructor dlia objecta: " << this << endl;
} //��������� 
string mars::get_otp()
{
	return otp;
}
string mars::get_naz()
{
	return naz;
}
float mars::get_time()
{
	return time;
}
//������������ 
void mars::set_otp(string N)
{
	otp = N;
}
void mars::set_naz(string K)
{
	naz = K;
}
void mars::set_time(float S)
{
	time = S;
} //����� ��� ��������� ���������
void mars::show()
{
	cout << "otpravlenie :" << otp << endl;
	cout << "naznachenie :" << naz << endl;
	cout << "time :" << time << endl;
}