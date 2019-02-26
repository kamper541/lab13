#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	
//Write your code here.
	int i, a, j; 
	int z;
   for (i = 1; i < N; i++) 
   { 
	   int z=i;
       a = d[i];
       j = i-1;
	   for(int k=0;k<10;k++){
		   if(k==i) cout<<"["<<d[k]<<"] ";
		   else cout<<d[k]<<" ";
	   }cout<<"==>";
       while (j >= 0 && d[j] < a) 
       { 	
		   
           swap(d,j+1,j);
		   z=j;
           j = j-1;
       } 
       d[j+1] = a;
	for(int k=0;k<10;k++){
		if(k==z) cout<<"["<<d[z]<<"] ";
		else cout<<d[k]<<" ";
	   }cout<<endl;
   }
   /*int x,y,z;
   for(int i=1;i<N;i++){
	   for(int k=0;k<10;k++){
		   cout<<d[k]<<" ";
	   }
	   cout << endl;
	   cout<<d[i];
	   for(int j=0;j<i;j++){
	   if(d[i]>d[i-1]){
		   swap(d,j,i);
	   }
   	}
	   cout<<"==>";
   }*/
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
