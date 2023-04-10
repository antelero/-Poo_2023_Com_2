#include <iostream>
using namespace std;
int recurse(int i);
int main(int argc, char *argv[]) {
	recurse(0);
	return 0;
}

int recurse(int i){
	if (i<10)
	{
		recurse(i+1);
		cout << i << " ";
		return 0;
	}
	return 0;
}
