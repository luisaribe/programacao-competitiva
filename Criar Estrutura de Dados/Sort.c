#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

//# Complexidade espacial: O(1)
//# Performance no melhor caso: O(n)? Array já ordenado
//# Performance no caso médio: O(n^2) Array ordenado aleatoriamente
//# Performance no pior caso: O(n^2) Array ordenado ao contrário





// Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

//acha o menor da parte nao ordenada e coloca na frente(atras da parte ordenada)
//# Complexidade espacial: O(1)
//# Performance no melhor caso: O(n^2) Array já ordenado
//# Performance no caso médio: O(n^2) Array ordenado aleatoriamente
//# Performance no pior caso: O(n^2) Array ordenado ao contrário





// Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
//considera o primeiro elemento como ordenado, pega o primeiro da parte nao ordenada e compara com todos da 
//ordenada para ver onde sera inserido
//# Complexidade espacial: O(1)
//# Performance no melhor caso: O(n) Array já ordenado
//# Performance no caso médio: O(n^2) Array ordenado aleatoriamente
//# Performance no pior caso: O(n^2) Array ordenado ao contrário





// Merge function for merge sort
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

//dividir para conquistar
//l é o id que começa e m o id que termina
//# Complexidade espacial: O(n)
//# Performance no melhor caso: O(n log n) Array já ordenado
//# Performance no caso médio: O(n log n) Array ordenado aleatoriamente
//# Performance no pior caso: O(n log n) Array ordenado ao contrário






// Partition function for quicksort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

//dividir para conquistar com pivo aleatorio e colocando os num maiores que ele e os menores
//# Complexidade espacial: O(n)
//# Performance no melhor caso: O(n log n) Array já ordenado
//# Performance no caso médio: O(n log n) Array ordenado aleatoriamente
//# Performance no pior caso: O(n^2) Array ordenado ao contrário









void countingSortChars(char arr[], int n) {
    int range = 26; // De 'a' (97) a 'z' (122)
    int count[range];
    for (int i = 0; i < range; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        count[arr[i] - 'a']++;
    }
    int index = 0;
    for (int i = 0; i < range; i++) {
        while (count[i] > 0) {
            arr[index] = 'a' + i;
            index++;
            count[i]--;
        }
    }
}
//# Complexidade espacial: O(m) (quantidade de letras/números possíveis)
//# Performance no melhor caso: O(n+2m) Array já ordenado
//# Performance no caso médio: O(n+2m) Array ordenado aleatoriamente
//# Performance no pior caso: O(n+2m) Array ordenado ao contrário

int main(){

    int arr[5] = {1, 7, 89, 56, 23};
    mergeSort(arr, 0, 4);

    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}