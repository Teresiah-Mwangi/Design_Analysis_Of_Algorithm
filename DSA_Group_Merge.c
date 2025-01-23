#include <stdio.h>

/*      This program merges two sorted lists into
   a single sorted list by comparing elements and
   appending the remaining parts of the arrays.*/

int main(void) {
    int size1, size2;

    printf("Enter the number of elements in the first sorted list: ");
    scanf("%d", &size1);
    int arrlist1[size1];

    printf("Enter the elements of the first sorted list (sorted order):\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arrlist1[i]);
    }

    printf("Enter the number of elements in the second sorted list: ");
    scanf("%d", &size2);
    int arrlist2[size2];

    printf("Enter the elements of the second sorted list (sorted order):\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arrlist2[i]);
    }

    int mergedLists[size1 + size2];

    // Merging the two lists
    mergedLists_Function(arrlist1, size1, arrlist2, size2, mergedLists);

    printf("Merged sorted list:\n");
    for (int k = 0; k < size1 + size2; k++) {
        printf("%d\t", mergedLists[k]);
    }
    printf("\n");

    return 0;
}

//Defining our function body to merge the two lists

void mergedLists_Function(int arrlist1[], int size1, int arrlist2[], int size2, int mergedLists[]) {
    int i = 0, j = 0, n = 0;

    // Merge the two lists
    while (i < size1 && j < size2) {
        if (arrlist1[i] <= arrlist2[j]) {
            mergedLists[n] = arrlist1[i];
            i++;
        } else {
            mergedLists[n] = arrlist2[j];
            j++;
        }
        n++;
    }


    while (i < size1) {
        mergedLists[n] = arrlist1[i];
        n++;
        i++;
    }

    while (j < size2) {
        mergedLists[n] = arrlist2[j];
        n++;
        j++;
    }
}

