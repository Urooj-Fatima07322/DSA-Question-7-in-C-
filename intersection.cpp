#include<iostream>
using namespace std;

void intersection(int array1[],int array2[],int len1,int len2){
	for(int i=0; i<len1; i++){
		for(int j=0; j<len2; j++){
			if(array1[i]==array2[j]){
				cout<<array1[i]<<" ";
				break;
			}
		}
	}
}
int main(){
	int array1[]={4, 2, 7, 8, 1, 2, 5};
	int array2[]={4, 51, 0, -16, 100};
	int len1=sizeof(array1)/sizeof(array1[0]);
	int len2=sizeof(array2)/sizeof(array2[0]);
	intersection(array1,array2,len1,len2);
	return 0;
}