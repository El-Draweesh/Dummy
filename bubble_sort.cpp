#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a[5]={5,4,3,2,1,};
	bool swapped = true;
	while (swapped == true)
	{
		swapped=false;
		for (int i=1;i<5;i++)
		{
			if (a[i-1]>a[i])
			{
				swap(a[i-1],a[i]);
				swapped=true;		
			}
		}
	}
	for (int k=0;k<5;k++)
	{
		cout<<a[k]<<endl;
	
	}
	return 0;
}