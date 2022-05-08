int compareArrays(int a[], int b[], int n) {
    int ii;
        for(ii = 1; ii < n; ii++) {
        if (a[ii] != b[ii]) return 0;    }
    return 1;
}
