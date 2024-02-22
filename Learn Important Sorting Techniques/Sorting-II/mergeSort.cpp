void merge(int arr[], int low, int mid, int high) {
    int res[high - low + 1];

    int l = low, r = mid + 1, idx = 0;

    while (l <= mid && r <= high) {
        if (arr[l] > arr[r]) {
            res[idx++] = arr[r++];
        } else {
            res[idx++] = arr[l++];
        }
    }

    while (l <= mid) {
        res[idx++] = arr[l++];
    }

    while (r <= high) {
        res[idx++] = arr[r++];
    }

    for (int i = 0; i < high - low + 1; i++) {
        arr[low + i] = res[i];
    }
}

void divide(int arr[], int l, int r) {
    if (l >= r) {
        return;
    }

    int mid = l + (r - l)/2;

    divide(arr, l, mid);
    divide(arr, mid + 1, r);

    merge(arr, l, mid, r);
}

void mergeSort(int arr[], int l, int r) {
   divide(arr, l, r);
}
