#include <iostream>

using namespace std;

int main(void)
{
	int h, m, s;
	cout << "시 : ";
	cin >> h;
	cout << "분 : ";
	cin >> m;
	cout << "초 : ";
	cin >> s;

	cout << "전제 초 : " << 3600 * h + 60 * m + s << endl;

	return 0;
}