#include <stdio.h>
#include <string.h>

#define MAX_RECORDS 20
#define NAME_LENGTH 50

// Structure to hold student records
typedef struct {
    char name[NAME_LENGTH];
    int marks;
} Record;

// Function to perform bubble sort based on marks
void bubbleSort(Record records[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (records[j].marks > records[j + 1].marks) {
                // Swap records[j] and records[j + 1]
                Record temp = records[j];
                records[j] = records[j + 1];
                records[j + 1] = temp;
            }
        }
    }
}

// Function to perform binary search on sorted records
int binarySearch(Record records[], int n, int targetMarks) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (records[mid].marks == targetMarks) {
            return mid; // Found the record
        } else if (records[mid].marks < targetMarks) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Not found
}

int main() {
    Record records[MAX_RECORDS];
    int n = 0;

    // Input records
    printf("Enter up to %d records (name and marks):\n", MAX_RECORDS);
    for (n = 0; n < MAX_RECORDS; n++) {
        printf("Record %d:\n", n + 1);
        printf("Name: ");
        scanf("%s", records[n].name);
        printf("Marks: ");
        scanf("%d", &records[n].marks);

        // Ask if the user wants to continue entering records
        char choice;
        printf("Do you want to enter another record? (y/n): ");
        scanf(" %c", &choice);
        if (choice != 'y') {
            break;
        }
    }

    // Sort records based on marks
    bubbleSort(records, n);

    // Display sorted records
    printf("\nSorted Records (by Marks):\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Marks: %d\n", records[i].name, records[i].marks);
    }

    // Search for a record
    int targetMarks;
    printf("\nEnter marks to search for: ");
    scanf("%d", &targetMarks);

    int result = binarySearch(records, n, targetMarks);
    if (result != -1) {
        printf("Record found: Name: %s, Marks: %d\n", records[result].name, records[result].marks);
    } else {
        printf("Record with marks %d not found.\n", targetMarks);
    }

    return 0;
}