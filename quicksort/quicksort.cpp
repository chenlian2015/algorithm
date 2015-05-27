#include<iostream>
using namespace std;
void quick_sort(int s[], int l, int r)
{
    if (l < r)
    {
		
        int i = l, j = r, x = s[l];
        while (i < j)
        {
            while(i < j && s[j] >= x) 
				j--;  
            if(i < j) 
				s[i++] = s[j];
			
            while(i < j && s[i] < x) 
				i++;  
            if(i < j) 
				s[j--] = s[i];
        }
        s[i] = x;
        quick_sort(s, l, i - 1);
        quick_sort(s, i + 1, r);
    }
}

int main(int argc, char* argv[])
{
int a[] = {49, 38, 65, 97, 26, 13, 27, 49, 55, 4};

int n = sizeof(a)/sizeof(int);

for(int i=0; i<n; i++)
{
  cout<<a[i]<<"-";
}
cout<<endl;

quick_sort(a, 0, n);


for(int i=0; i<n; i++)
{
  cout<<a[i]<<"-";
}
cout<<endl;
}
