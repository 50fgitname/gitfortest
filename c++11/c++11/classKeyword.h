#include<iostream>
using namespace std;

namespace classkeyword
{
	class A
	{
	public:
		virtual void func() = 0;
	};

	class B : public A
	{
		virtual void func() final override {};
	};

	class C
	{
		virtual void func(){}; //�������Ӧ���д����  c++11
		//virtual void func2() override {};
	};

}