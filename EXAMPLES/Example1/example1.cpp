#include "Example1/example1.h"

namespace EXAMPLE1
{

#ifdef PART1
int main(int argc, char *argv[])
{
	A *ptr = new B;
	ptr->foo();
	//ptr->goo();		// goo() - не является членом класса A
	//ptr->B::goo();	// B::goo() - не является членом класса A

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
	ptr->foo();			// из-за раннего связывания вызывается функция foo() из базового
	//ptr->B::foo();	// B::foo() - не является членом класса A
	
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
	//ptr->foo(1);	// foo(int) - не является членом класса A 

	auto ptr_b = static_cast<B*>(ptr);
	//ptr_b->foo();	// foo() - не является членом класса B 
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

	//ptr_b->foo(1);	// foo(int) - не является членом класса B 
	ptr_b->A::foo(1);

	delete ptr;

	system("pause");
	return 0;
}
#endif

}