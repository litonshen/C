#include <stdio.h>
int count_before_one(int arr[], int N)
{
for (int i = 0; i <N; i++)
{
    if (arr[i]==1)  // arrey te 1 search korbe jodi pai. pele break loop bondo korbe
    {
     return i;
     // break;  // break command ta lagbe na karon return korar por loop emni bondo hoe jai
    }
}
 return N;

}

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
   for (int i = 0; i < N; i++)
   {
    scanf("%d", &arr[i]);
   }
  int val=count_before_one(arr,N);
  printf("%d", val);
return 0;
}