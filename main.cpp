#include <iostream>

class Point
{
private:
	int x, y;
public:
	void Print() const
	{
		std::cout << "Point(" << x << " , " << y << ")" << std::endl;
	}

	friend void ChangeValue(Point& value,int ValueX,int ValueY);

};

void ChangeValue(Point& value,int ValueX,int ValueY)
{
	value.x = ValueX;
	value.y = ValueY;
}

int main() 
{
	Point p;
	p.Print();
	ChangeValue(p, 10, 20);
	p.Print();
	return 0;
}