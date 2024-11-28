#include<stdio.h>
#include<string.h>
#define MAX_RECORDS 20
#define NAME_LENGTH 50

typedef struct {
    char name[NAME_LENGTH];
    int marks;
} Record;

void bubbleSort(Record records[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (records[j].marks > records[j+1].marks){
                Record temp = records[j];
                records[j] = records[j+1];
                records[j+1] = temp;
            }
        }
    }
}

int binarySearch(Record records[], int n, int target){
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (records[mid].marks == target){
            return mid;
        } else if (records[mid].marks < target){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    Record records[MAX_RECORDS];
    int n = 0;
    printf("Enter upto %d records (name and marks):\n", MAX_RECORDS);

    for (n=0; n<MAX_RECORDS; n++){
        printf("Record %d:\n", n+1);
        printf("Name: ");
        scanf("%s", records[n].name);
        printf("Marks: ");
        scanf("%d", &records[n].marks);

        char choice;
        printf("Do you want to add another record? (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'y' || choice == 'Y') {
            continue;
        } else {
            n++;
            break;
        }
    }

    bubbleSort(records, n);

    printf("\nSorted Records (by Marks):\n");
    for (int i=0; i<n; i++){
        printf("Name: %s, Marks: %d\n", records[i].name, records[i].marks);
    }

    int target;
    printf("\nEnter a marks value to search for: ");
    scanf("%d", &target);
    int result = binarySearch(records, n, target);
    if (result != -1) {
        printf("Record found: \n\tName: %s, Marks: %d\n", records[result].name, records[result].marks);
    } else {
        printf("Record with marks %d not found.\n", target);
    }

    return 0;
}