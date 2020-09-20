#include <iostream>
class SetValue {
	int x, y;
public:
	void SetXValue(int x) { this->x = x; }
	void SetYValue(int y) { this->y = y; }
	int GetXValue() { return x; }
	int GetYValue() { return y; }
};
int main() {
	SetValue obj;
	obj.SetXValue(33);
	obj.SetYValue(44);
	std::cout << "X= " << obj.GetXValue() << " , Y= " << obj.GetYValue() << std::endl;
	system("pause");
	return 0;
}