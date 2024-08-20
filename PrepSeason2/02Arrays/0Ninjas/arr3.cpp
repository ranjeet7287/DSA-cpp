int findUnique(int *arr, int size){
    int j=0;
    for (int i = 0; i < size; i++)
        j= j ^ arr[i];
    return j;
}

