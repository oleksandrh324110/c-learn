#include <stdio.h>

void selection_sort(int *arr, const int size) {
  for (int i = 0; i < size; i++) {
    struct {
      int index, value;
    } max = {i, arr[i]};

    for (int j = i + 1; j < size; j++) {
      if (arr[j] > max.value) {
        max.index = j;
        max.value = arr[j];
      }
    }

    int buff = arr[i];
    arr[i] = arr[max.index];
    arr[max.index] = buff;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  const int size = sizeof(arr) / sizeof(arr[0]);

  selection_sort(arr, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
