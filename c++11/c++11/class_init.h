#include<iostream>
 
using namespace std; 

class Init_Test1
{
public:
 
 
	//cout 1233 主要看看3个地方初始化的优先情况
	void display(){ std::cout << m_a << m_b << m_c << m_d << endl; }
public:
	int m_a = 1;
	int m_b = 1;
	int m_c = 1;
	int m_d = 1;
};
