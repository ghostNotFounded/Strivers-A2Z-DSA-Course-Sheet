int isSorted(int n, vector<int> a) {
  for (int i = 1; i < a.size(); i++) {
    if (a[i - 1] > a[i])
      return 0;
  }

  return 1;
}
