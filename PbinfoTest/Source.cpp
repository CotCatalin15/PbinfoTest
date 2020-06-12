#include <iostream>


class A
{
public:

	void TEST(int x)
	{
		std::cout << x;
	}

private:
};

#define TEST(x) std::cout << x;


int main()
{

	return 0;
}