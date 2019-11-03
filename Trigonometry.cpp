#include <iostream>

int sin(int opp, int hyp)
{
	return opp / hyp;
}

int cos(int adj, int hyp)
{
	return adj / hyp;
}

int tan(int opp, int adj)
{
	return opp / adj;
}

int main()
{
	sin(4, 5);
	cos(3, 5);
	tan(4, 3);

	return 0;
}
