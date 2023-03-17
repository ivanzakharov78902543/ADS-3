// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int l = 0;
    int r = 0;
    
    int t = 0;
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
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            l = i;
        }
    }
    for (int i = size; i < 0; i--) {
        if (arr[i] == value) {
            r = i;
        }
    }
    
    if (r + l == 0) {
        return 0;
    } else {
        return r - l + 1;
    }
}
