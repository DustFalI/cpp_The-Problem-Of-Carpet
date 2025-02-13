#include <bits/stdc++.h>
using namespace std;
void f(int x,int y,int l,int q_x,int q_y)
{
	if(l == 1) return;
	if(q_x <= x+l/2-1 && q_y <= y+l/2-1)//вСио╫г 
	{
		cout << x+l/2 << " " << y+l/2 << " " << 1 << endl;
		f(x,y,l/2,q_x,q_y);
		f(x,y+l/2,l/2,x+l/2-1,y+l/2);
		f(x+l/2,y,l/2,x+l/2,y+l/2-1);
		f(x+l/2,y+l/2,l/2,x+l/2,y+l/2);
	}
	else if(q_x <= x+l/2-1 && q_y >= y+l/2)//срио╫г 
	{
		cout << x+l/2 << " " << y+l/2-1 << " " << 2 << endl;
		f(x,y,l/2,x+l/2-1,y+l/2-1);
		f(x,y+l/2,l/2,q_x,q_y);
		f(x+l/2,y,l/2,x+l/2,y+l/2-1);
		f(x+l/2,y+l/2,l/2,x+l/2,y+l/2);
	}
	else if(q_x >= x+l/2 && q_y <= y+l/2-1)//вСоб╫г 
	{
		cout << x+l/2-1 << " " << y+l/2 << " " << 3 << endl;
		f(x,y,l/2,x+l/2-1,y+l/2-1);
		f(x,y+l/2,l/2,x+l/2-1,y+l/2);
		f(x+l/2,y,l/2,q_x,q_y);
		f(x+l/2,y+l/2,l/2,x+l/2,y+l/2);
	}
	else if(q_x >= x+l/2 && q_y >= y+l/2)//сроб╫г 
	{
		cout << x+l/2-1 << " " << y+l/2-1 << " " << 4 << endl;
		f(x,y,l/2,x+l/2-1,y+l/2-1);
		f(x,y+l/2,l/2,x+l/2-1,y+l/2);
		f(x+l/2,y,l/2,x+l/2,y+l/2-1);
		f(x+l/2,y+l/2,l/2,q_x,q_y);
	}
}
int main()
{
	int k,q_x,q_y;
	cin >> k >> q_x >> q_y;
	f(1,1,pow(2,k),q_x,q_y);
	return 0;
}
