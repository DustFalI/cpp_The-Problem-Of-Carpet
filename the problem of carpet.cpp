#include <bits/stdc++.h>
using namespace std;
void f(int x,int y,int l,int q_x,int q_y)
{
	if(l == 1) return;
	if(q_x <= x+l/2-1 && q_y <= y+l/2-1)//左上角 
	{
		cout << x+l/2 << " " << y+l/2 << " " << 1 << endl;//确定障碍物后，对角线放置，输出
		f(x,y,l/2,q_x,q_y);
		f(x,y+l/2,l/2,x+l/2-1,y+l/2);//新放置的地毯作为其余区块的新障碍物
		f(x+l/2,y,l/2,x+l/2,y+l/2-1);
		f(x+l/2,y+l/2,l/2,x+l/2,y+l/2);
	}
	else if(q_x <= x+l/2-1 && q_y >= y+l/2)//右上角 
	{
		cout << x+l/2 << " " << y+l/2-1 << " " << 2 << endl;
		f(x,y,l/2,x+l/2-1,y+l/2-1);
		f(x,y+l/2,l/2,q_x,q_y);
		f(x+l/2,y,l/2,x+l/2,y+l/2-1);
		f(x+l/2,y+l/2,l/2,x+l/2,y+l/2);
	}
	else if(q_x >= x+l/2 && q_y <= y+l/2-1)//左下角 
	{
		cout << x+l/2-1 << " " << y+l/2 << " " << 3 << endl;
		f(x,y,l/2,x+l/2-1,y+l/2-1);
		f(x,y+l/2,l/2,x+l/2-1,y+l/2);
		f(x+l/2,y,l/2,q_x,q_y);
		f(x+l/2,y+l/2,l/2,x+l/2,y+l/2);
	}
	else if(q_x >= x+l/2 && q_y >= y+l/2)//右下角 
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
	f(1,1,pow(2,k),q_x,q_y);//注意参考坐标固定为区块左上角
	return 0;
}
