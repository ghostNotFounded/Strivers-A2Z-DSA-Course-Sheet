int partitionArray(int input[], int start, int end) {
    int pivot = input[end];
    int l = start - 1;

    for (int r = start; r <= end - 1; r++) {
        if (input[r] <= pivot) {
            l++;
            int temp = input[l];
            input[l] = input[r];
            input[r] = temp;
        }
    }
    int temp = input[l + 1];
    input[l + 1] = input[end];
    input[end] = temp;
    return l + 1;
}

void quickSort(int input[], int start, int end) {
    if (start < end) {
        int pivotIndex = partitionArray(input, start, end);
        quickSort(input, start, pivotIndex - 1);
        quickSort(input, pivotIndex + 1, end);
    }
}
