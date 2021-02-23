#include <iostream>
#include <algorithm>
using namespace std;

struct Rect
{
	double x, y, w, h;
};

double overlap(Rect r1,Rect r2)
{
	double a,b,c;
	a = min(r1.y,r2.y) - max(r1.y-r1.h,r2.y-r2.h);
	b = min(r1.x+r1.w,r2.x+r2.w) - max(r1.x,r2.x);
	c = a*b;
	if(c <= 0) return 0;
	else return c; 
}

int main()
{
	Rect r1 = {-1,2,6.9,9.6};
	Rect r2 = {0,0,1.2,2.5};
	cout << overlap(r1,r2);
}
