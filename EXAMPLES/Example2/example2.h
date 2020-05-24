#pragma once

#include <iostream>

namespace EXAMPLE2
{

using namespace std;

int main(int argc, char *argv[]);

class I
{
public:
	I() { cout << "I()" << endl; }
	virtual ~I() { cout << "~I()" << endl; }

	virtual void foo() = 0;
	virtual void goo() = 0;
};

class A : public I
{
public:
	A() { cout << "A()" << endl; }
	~A() { cout << "~A()" << endl; }

	void foo() override { cout << "A::foo()" << endl; }
	void goo() override { cout << "A::goo()" << endl; }
};

class B : public I
{
public:
	B() { cout << "B()" << endl; }
	~B() { cout << "~B()" << endl; }

	void foo() override { cout << "B::foo()" << endl; }
	void goo() override { cout << "B::goo()" << endl; }
};

class C : public I
{
public:
	C() { toA(); }
	~C() { if (_i) delete _i; }

	void foo() override { _i->foo(); }
	void goo() override { _i->goo(); }

	void toA() { if (_i) delete _i; _i = new A; }
	void toB() { if (_i) delete _i; _i = new B; }

private:
	I * _i = nullptr;
};

}