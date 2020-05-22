#pragma once

namespace EXAMPLE1
{
	
//#define PART1
//#define PART2 
//#define PART3
//#define PART4

int main(int argc, char *argv[]);

using namespace std;

#ifdef PART1
class A
{
public:
	A() { cout << "A()" << endl; }
	~A() { cout << "~A()" << endl; }

	void foo() { cout << "A::foo()" << endl; }
};

class B : public A
{
public:
	B() { cout << "B()" << endl; }
	~B() { cout << "~B()" << endl; }

	void goo() { cout << "B::goo()" << endl; }
};
#endif

#ifdef PART2
class A
{
public:
	A() { cout << "A()" << endl; }
	~A() { cout << "~A()" << endl; }

	void foo() { cout << "A::foo()" << endl; }
};

class B : public A
{
public:
	B() { cout << "B()" << endl; }
	~B() { cout << "~B()" << endl; }

	void foo() { cout << "B::foo()" << endl; }
};
#endif

#ifdef PART3
class A
{
public:
	A() { cout << "A()" << endl; }
	~A() { cout << "~A()" << endl; }

	void foo() { cout << "A::foo()" << endl; }
};

class B : public A
{
public:
	B() { cout << "B()" << endl; }
	~B() { cout << "~B()" << endl; }

	void foo(int val) { cout << "B::foo(int)" << endl; }
};
#endif

#ifdef PART4
class A
{
public:
	A() { cout << "A()" << endl; }
	~A() { cout << "~A()" << endl; }

	void foo() { cout << "A::foo()" << endl; }
	void foo(int val) { cout << "A::foo(int)" << endl; }
};

class B : public A
{
public:
	B() { cout << "B()" << endl; }
	~B() { cout << "~B()" << endl; }

	void foo() { cout << "B::foo()" << endl; }
};
#endif


}