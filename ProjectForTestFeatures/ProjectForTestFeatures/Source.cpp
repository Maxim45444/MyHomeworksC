#include <iostream>

int boo() // теперь уже не в main()
{
	std::cout << "boo!";
	return 0;
}

int main()
{
	boo();
	return 0;
}