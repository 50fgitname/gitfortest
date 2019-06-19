#include<iostream>
using namespace std;

#include "class_init.h"
#include "classKeyword.h"
#include "classconstructor.h"

classconstructor::A  getTmpA1(){ return classconstructor::A(); };

int main()
{   
	//Init_Test1 init_test1;
	//init_test1.display();

	//classkeyword::C c;
	{
		classconstructor::A a = getTmpA1();
	}

	getchar();

	return 0;
}