#include<iostream>
using namespace std;

namespace classconstructor
{
	class A
	{
	public:
		A(){ cout << "construct times: " << ++c1 << endl; };
		A(const A& a){ cout << "copy construct times: " << ++c2 << endl; };
		~A(){ cout << "deconstruct times: " << ++d1 << endl; };

		A(A&& a){  cout << "move construct times: " << ++c3 << endl ; };

	private:
		static int c1; //error, static不能在这里赋值 = 0;
		static int c2;
		static int c3;
		static int d1;
	};

	int A::c1 = 0;
	int A::c2 = 0;
	int A::c3 = 0;
	int A::d1 = 0;

	A GetTmpA(){ return A(); }
	void displayA()
	{
		A a = GetTmpA();
	}
}