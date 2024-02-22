void selectionSort(vector<int>&arr) {
    for (int i = 0 ; i < arr.size(); i++) {
        int minIdx = i;

        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}
