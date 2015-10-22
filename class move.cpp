#include <iostream>
#include <string.h>
using namespace std;

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0); 
	void showmove() const; 
	Move add(const Move & m) const;
	// this function adds x of m to x of invoking object to get new x,
	// adds y of m to y of invoking object to get new y, creates a new
	// move object initialized to new x, y values and returns it
	reset(double a = 0, double b = 0); // resets x,y to a, b
};
void Move::showmove()
{
	cout <<"a="<< a << endl;
	cout << "b=" << b << endl;
}
Move Move ::add(const Move & m)const
{
	x[m] += a.Move;
	y]m] += b.Move;
}
int main()
{
	Move x, y;
	x.showmove();
	y.showmove();
	x.add(5);
	y.add(3);
	return 0;
}