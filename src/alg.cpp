// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int k = 0;
    int w = 0;
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
            w = i;
        }
    }
    for (int i = w; i < size; i++) {
        if (arr[i] == value) {
            k += 1;
        } else {
            break;
        }
    }
    if (k == 0) {
        return 0;
    } else {
        return k; 
    }
}
