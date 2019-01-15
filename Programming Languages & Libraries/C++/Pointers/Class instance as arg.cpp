#include<iostream>
using namespace std;

class TestClass {

public:
	int i;
	char c;
	float* f;

	TestClass(int ip, char cp, float* fp) {
		i = ip;
		c = cp;
		f = fp;
	}
};

void change(TestClass tc) {
	tc.i++;
	tc.c = 'P';
	tc.f = new float(13.37);
}

int main() {
	TestClass tc = TestClass(1, 'a', new float(144.3));
	change(tc);

	cout << tc.i << " " << tc.c << " " << *tc.f;
	cin.get();
}