
<<<<<<< HEAD
=======


//Sudarshan Parthasarathy 106116095
>>>>>>> sort
//favourite sorting algorithm - selection sort-in ascending order
#include<iostream>
using namespace std;
void arraysort(int a[], int n)
{
int i,j,small,temp,pos;
for(i=0;i<n;i++)
{
 small=a[i];pos=i;
  for(j=i+1;j<n;j++)
 if(a[j]<small)
  {
   small=a[j];
   pos=j;
  }
 temp=a[i];
 a[i]=small;
 a[pos]=temp;
}

}

int main()
{
int a[100],n,i,j;
cout<<"Enter the size of the array"<<endl;
cin>>n;
cout<<"Enter the elements of the array"<<endl;
for(i=0;i<n;i++)
cin>>a[i];
arraysort(a,n);
cout<<"The sorted array is:"<<endl;
for(i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;
}
