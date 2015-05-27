#include<iostream>
using namespace std;

void ShellInsert(int* pDataArray, int d, int iDataNum)
{
	for (int i = d; i < iDataNum; i += 1)  
	{
		int j = i - d;
		int temp = pDataArray[i];    
		while (j >= 0 && pDataArray[j] > temp)    
		{
			pDataArray[j+d] = pDataArray[j];    
			j -= d;
		}

		if (j != i - d)    
			pDataArray[j+d] = temp;
	}
}


void ShellSort(int* pDataArray, int iDataNum)
{
	int d = iDataNum / 2;    
	while(d >= 1)
	{
		ShellInsert(pDataArray, d, iDataNum);
		d = d / 2;   
	}
}

int main(int arc, char *argv[])
{

int a[] = {49, 38, 65, 97, 26, 13, 27, 49, 55, 4};

int n = sizeof(a)/sizeof(int);

for(int i=0; i<n; i++)
{
  cout<<a[i]<<"-";
}
cout<<endl;

ShellSort(a, n);

for(int i=0; i<n; i++)
{
  cout<<a[i]<<"-";
}

return 0;

}

