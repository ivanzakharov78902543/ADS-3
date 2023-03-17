// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int l = 0;
    int r = size - 1;
    int mid = 0;
    int k = 0;
    int t = 0;
    bool f = true;
    for (int i = 0; i < size; i++) {
        bool flag = true;
        for (int j = 0; j < size - (i + 1); j++) {
            if (arr[j] > arr[j + 1]) {
                flag = false;
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
        if (flag) {
            break;
        }
    }
    while ((l <= r) && (f)) {
        mid = (l + r) / 2;
        if (arr[mid] == value) {
            f = false;
            for (int i = mid; i <= r; i++) {
                if (arr[i] == value) {
                    k += 1;
                }
            }
            for (int i = mid; i >= l; i--) {
                if (arr[i] == value) {
                    k += 1;
                }
            }
        }
        if (arr[mid] > value) {
            r = mid - 1;
        } else {
             l = mid + 1;
        }
    }
    if (!f) {
        return k - 1;
    } else {
         return 0;
    }
}
