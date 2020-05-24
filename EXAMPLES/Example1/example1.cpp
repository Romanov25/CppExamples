#include "Example1/example1.h"

namespace EXAMPLE1
{

#ifdef PART1
int main(int argc, char *argv[])
{
	A *ptr = new B;
	ptr->foo();
	//ptr->goo();		// goo() - �� �������� ������ ������ A
	//ptr->B::goo();	// B::goo() - �� �������� ������ ������ A

	auto ptr_b = static_cast<B*>(ptr);
	ptr_b->foo();
	ptr_b->goo();

	delete ptr;

	system("pause");
	return 0;
}
#endif

#ifdef PART2
int main(int argc, char *argv[])
{
	A *ptr = new B;
	ptr->foo();			// ��-�� ������� ���������� ���������� ������� foo() �� ��������
	//ptr->B::foo();	// B::foo() - �� �������� ������ ������ A
	
	auto ptr_b = static_cast<B*>(ptr);
	ptr_b->A::foo();
	ptr_b->foo();

	delete ptr;

	system("pause");
	return 0;
}
#endif

#ifdef PART3
int main(int argc, char *argv[])
{
	A *ptr = new B;
	ptr->foo();
	//ptr->foo(1);	// foo(int) - �� �������� ������ ������ A 

	auto ptr_b = static_cast<B*>(ptr);
	//ptr_b->foo();	// foo() - �� �������� ������ ������ B 
	ptr_b->A::foo();
	ptr_b->foo(1);

	delete ptr;

	system("pause");
	return 0;
}
#endif

#ifdef PART4
int main(int argc, char *argv[])
{
	A *ptr = new B;
	ptr->foo();
	ptr->foo(1);

	auto ptr_b = static_cast<B*>(ptr);
	ptr_b->foo();
	ptr_b->A::foo();

	//ptr_b->foo(1);	// foo(int) - �� �������� ������ ������ B 
	ptr_b->A::foo(1);

	delete ptr;

	system("pause");
	return 0;
}
#endif

}