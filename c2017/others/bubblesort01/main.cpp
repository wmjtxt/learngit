#include <iostream>

using namespace std;

int main()
{
    void bubblesort(int a[],int n,int &c);
    int n = 5;
    int a[n] = {4,5,1,3,0};
    int cc = 0;
    bubblesort(a,n,cc);
    for(int i = 0; i < n-1; i++){
    cout << a[i] << '<';
    }
    cout << a[n-1] << endl << cc;
    return 0;
}

void bubblesort(int a[],int n,int &c){
  c = 0;
  for(int i = 1; i < n; i++)
    for(int j = n-1; j >= i; j--)
      if(a[j-1] > a[j])
        {
          int temp = a[j-1]; a[j-1] = a[j]; a[j] = temp;
          c++;
          }
}
