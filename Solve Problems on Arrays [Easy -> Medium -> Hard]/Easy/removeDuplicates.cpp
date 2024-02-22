int removeDuplicates(vector<int> &arr, int n) {
	if (n == 0 || n == 1) 
        return n;

    int unique = 1; 
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[unique] = arr[i]; 
            unique++;
        }
    }
	
	return unique;
}
