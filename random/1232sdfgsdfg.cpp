#include <iostream>

using namespace std;


class xxx
{
	private:
		int y1;
		float y2;
		char y3;
		
	public:
		void sety1(int y1)
		{
			this->y1 = y1;
		}
		int gety1()
		{
			return y1;
		}
};

int main()
{
	xxx *obj = new xxx;
	
	obj->sety1(10);
	
	cout<<" y1 = "<<obj->gety1();
	
	return 0;
}


