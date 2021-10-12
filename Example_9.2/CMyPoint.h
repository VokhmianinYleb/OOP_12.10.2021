class CMyPoint
{
	int x;
	int y;
public:
	// явно заданий конструктор за замовчуванням
	CMyPoint()
	{
		x = y = 1;
	}
	// конструктор с параметрами
	CMyPoint(int x_, int y_)
	{
		x = x_;
		y = y_;
	}
	// методи класу
	void SetPoint(int nx, int ny)
	{
		x = nx;
		y = ny;
	}
	int GetX(void) { return x; }
	int GetY(void) { return y; }
};
