#include "Example2/example2.h"

namespace EXAMPLE2
{

int main(int argc, char *argv[])
{
	C c;
	c.foo();
	c.goo();

	c.toB();
	c.foo();
	c.goo();

	c.toA();
	c.foo();
	c.goo();

	system("pause");
	return 0;
}

}