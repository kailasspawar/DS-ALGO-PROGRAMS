#include<iostream>
#include<cmath>
using namespace std;

void Aliquot(int n)
{
	int k ;int sum = 0;
	int p;
	p = n;
	if(n==0)
		return;

	k=n/2;
	while(k>0)
	{ 
		if(n%k==0)
		{ 
			sum+=k;
			k--;
		}
		else
			k--;
	}
	if(sum==p)
	{
		cout<<sum;
		return;
	}
	else
		cout<<sum<<" ";
	 Aliquot(sum);
}


int main()
{
	int n;
	cout<<"Enter Value of n\n";
	cin>>n;
	cout<<n<<" ";
        Aliquot(n);
	cout<<endl;
	return 0;
}

