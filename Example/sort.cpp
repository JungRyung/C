#include<iostream>
#include<algorithm>
using namespace std;
void Print(int *arr){
	cout << "arr[i] : " ;
	for(int i=0; i<10; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main(void){
	int arr[10] = {3, 7, 2, 4, 1, 0, 9, 8, 5, 6};
	Print(arr);
	sort(arr, arr+10);
	Print(arr);

	return 0;
}
