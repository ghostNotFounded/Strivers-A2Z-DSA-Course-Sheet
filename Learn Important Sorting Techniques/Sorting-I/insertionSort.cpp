void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        int num = arr[i];

        while (j > 0 && arr[j - 1] > num) {
            arr[j] = arr[j - 1];
            j--;
        }

        arr[j] = num;
    }
}
