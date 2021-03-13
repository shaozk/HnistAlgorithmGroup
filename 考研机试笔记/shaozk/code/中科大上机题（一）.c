#include <stdio.h>

int find_min(int *arr, int n) {
	int min = arr[0];
	for(int i = 1; i < n; i++) {
		if(min > arr[i]) min = arr[i];
	}
	return min;
}

int find_max(int *arr, int n){
	int max = arr[0];
	for(int i = 1; i < n; i++){
		if(max < arr[i]) max = arr[i];
	}
	return max;
}

int gcd_(int a, int b) {
	if(a % b == 0) return b;
	else return (b, a % b);
}

int find_gcd(int *arr, int n){
	int g = gcd_(arr[0], arr[i]);
	for(int i = 2; i < n; i++) {
		g = gcd_(g, arr[i]);
	}
	return g;
	
}


int main() {
	int n, min, max, gcd;
	int *arr;
	scanf("%d",&n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	min = find_min(arr, n);
	max = find_max(arr, n);
	gcd = find_gcd(arr, n);
	printf("%d %d %d\n", min, max, gcd);
	return 0;
}