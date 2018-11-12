#include<iostream>
#include<queue>
#define R 3
#define  C 5
using namespace std;

struct ele
{
	int x,y;
};

bool isValid(int i,int j)
{
	return (i >= 0 && j>=0 && i<R && j < C);
}
bool allSame(int arr[R][C])
{
	for(int i = 0;i<R;i++)
		for(int j = 0;j<C;j++)
			if(arr[i][j] == 1)
				return false;
	return true;
}

bool isdelim(ele temp)
{
	return (temp.x == -1 && temp.y == 1);
}

int rotOranges(int arr[R][C])
{
	queue<ele>Q;
	ele temp;
	for(int i = 0;i<R;i++)
	{
		for(int j = 0;j<C;j++)
		{
			if(arr[i][j] == 2)
			{
				temp.x = i;
				temp.y = j;
				Q.push(temp);
			}
		}
	}

	temp.x = -1;
	temp.y = -1;
	Q.push(temp);
	int ans = 0;
	while(!Q.empty())
	{
		bool flag = false;
		while(!isdelim(Q.front()))
		{
			temp = Q.front();

			if(isValid(temp.x+1,temp.y) && arr[temp.x+1][temp.y] == 1)
			{
				if(!flag) ans++; 
				flag = true;
				arr[temp.x+1][temp.y] = 2;
				temp.x++;
				Q.push(temp);
				temp.x--; 
			}
			if(isValid(temp.x-1,temp.y) && arr[temp.x-1][temp.y] == 1)
			{
				if(!flag) ans++;
				flag = true;
				arr[temp.x-1][temp.y] = 2;
				temp.x--;
				Q.push(temp);
				temp.x++;
			}
			if(isValid(temp.x,temp.y+1) && arr[temp.x][temp.y+1] == 1)
			{
				if(!flag)  ans++;
				flag = true;
				arr[temp.x][temp.y+1] = 2;
				temp.y++;
				Q.push(temp);
				temp.y--;
			}
			if(isValid(temp.x,temp.y-1) && arr[temp.x][temp.y-1] == 1)
			{
				if(!flag)
					ans++;
				flag = true;
				arr[temp.x][temp.y-1] = 2;
				temp.y--;
				Q.push(temp);
			}
			Q.pop();
		}
		Q.pop();

		if(!Q.empty())
		{
			temp.x = -1;
			temp.y = -1;
			Q.push(temp);
		}
	}

	return allSame(arr) ? ans : -1;
}

int main()
{
	int arr[R][C] = { {2, 1, 0, 2, 1},
		    {1, 0, 1, 2, 1 },
		    {1, 0, 0, 2, 1 }};
	int ans = rotOranges(arr);
	if (ans == -1)
		cout << "All oranges cannot rot\n";
	else
		cout << "Time required for all oranges to rot => " << ans << endl;
	return 0;

}






