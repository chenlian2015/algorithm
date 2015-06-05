#include<iostream>
using namespace std;


int HeapAdjust(int *data, int i, int cnt);

void BuildHeap(int *data, int cnt);

void HeapSort(int *data, int cnt);

int HeapAdjust(int *data, int i, int cnt)
{
  
  int lChild = 2*i;
  int rChild = 2*i + 1;
  int max = i;
  if(i<=cnt/2)
  {
     if(lChild<=cnt && data[max] < data[lChild])
     {
         max = lChild;
     }
     
          
     if(rChild<=cnt && data[max] < data[rChild])
     {
         max = rChild;
     }
     
     if(max !=i)
     {
	swap(data[max], data[i]);
        HeapAdjust(data, max, cnt);
     }
  }   
}

void BuildHeap(int *data, int cnt)
{
    for(int i=cnt/2; i>=1;i--)
    {
       HeapAdjust(data, i, cnt);
    }
}

void HeapSort(int *data, int cnt)
{
     BuildHeap(data, cnt);
     for(int i=cnt; i>=1; i--)
     { 
       swap(data[1], data[i]);
       HeapAdjust(data, 1, i-1);
     }
}

int Show(int *argv, int cnt)
{
  for(int i=1; i<=cnt; i++)
  {
     cout<<argv[i]<<endl;
  }
  cout<<endl<<endl;
}

int main(int argc, char*argv[])
{
  int a[] = {0,16,20,3,11,17,8};
  int cnt = sizeof(a)/sizeof(int) - 1;
  
  Show(a, cnt);
  HeapSort(a, cnt);
  Show(a, cnt);
}



