#pragma once
#include "Pair.h"
//����� Lorry ����������� �� ������ Car
class Hipo :
	public Pair
{
public:
	Hipo(void);//����������� ��� ���������� 
public: ~Hipo(void);//���������� 
	  Hipo(int, int, int);//����������� � ����������� 
	  Hipo(const Hipo&);//����������� ����������� 
	  int Get_hipot() { return hipot; }//�����������
	  void Set_hipot(int);//��������
	  Hipo& operator=(const Hipo&);//�������� ������������

	  friend istream& operator>>(istream& in, Hipo& l);//�������� ����� 
	  friend ostream& operator<<(ostream& out, const Hipo& l); //�������� ������
protected:
	int hipot;//������� ����������������
};