#include <iostream>

namespace a
{
	int x{ 10 };
}

namespace b
{
	int x{ 20 };
}

int main()
{
    /*causes naming collision because 
    compiler doesn't know what variable to use 
    from namespaces*/

	using namespace a;
	using namespace b;

	//std::cout << x << '\n';

	return 0;
}