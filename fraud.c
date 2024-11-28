#include <stdio.h>
#include <stdlib.h>

// Define a structure for a transaction
typedef struct Transaction {
    int id;           // Transaction ID
    double amount;    // Transaction amount
    struct Transaction* next; // Pointer to the next transaction
} Transaction;

// Function to create a new transaction node
Transaction* createTransaction(int id, double amount) {
    Transaction* newTransaction = (Transaction*)malloc(sizeof(Transaction));
    newTransaction->id = id;
    newTransaction->amount = amount;
    newTransaction->next = NULL;
    return newTransaction;
}

// Function to append a transaction to the linked list
void appendTransaction(Transaction** head, int id, double amount) {
    Transaction* newTransaction = createTransaction(id, amount);
    if (*head == NULL) {
        *head = newTransaction;
    } else {
        Transaction* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newTransaction;
    }
}

// Convert linked list to array
int linkedListToArray(Transaction* head, double amounts[], int ids[]) {
    int index = 0;
    while (head != NULL) {
        amounts[index] = head->amount;
        ids[index] = head->id;
        head = head->next;
        index++;
    }
    return index;
}

// Quick sort partition function
int partition(double amounts[], int ids[], int low, int high) {
    double pivot = amounts[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (amounts[j] <= pivot) {
            i++;
            // Swap amounts
            double tempAmount = amounts[i];
            amounts[i] = amounts[j];
            amounts[j] = tempAmount;

            // Swap IDs
            int tempID = ids[i];
            ids[i] = ids[j];
            ids[j] = tempID;
        }
    }
    // Swap pivot
    double tempAmount = amounts[i + 1];
    amounts[i + 1] = amounts[high];
    amounts[high] = tempAmount;

    int tempID = ids[i + 1];
    ids[i + 1] = ids[high];
    ids[high] = tempID;

    return i + 1;
}

// Quick sort function
void quickSort(double amounts[], int ids[], int low, int high) {
    if (low < high) {
        int pi = partition(amounts, ids, low, high);
        quickSort(amounts, ids, low, pi - 1);
        quickSort(amounts, ids, pi + 1, high);
    }
}

// Binary search function
int binarySearch(double amounts[], int n, double threshold) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (amounts[mid] == threshold)
            return mid;
        else if (amounts[mid] < threshold)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low; // First index where amount >= threshold
}

// Detect fraud (transactions exceeding threshold)
void detectFraud(double amounts[], int ids[], int n, double threshold) {
    int startIndex = binarySearch(amounts, n, threshold);

    printf("\nTransactions exceeding the threshold of %.2f:\n", threshold);
    for (int i = startIndex; i < n; i++) {
        printf("Transaction ID: %d, Amount: %.2f\n", ids[i], amounts[i]);
    }
}

// Main function
int main() {
    Transaction* head = NULL;

    // Sample transactions
    appendTransaction(&head, 101, 500.0);
    appendTransaction(&head, 102, 1500.0);
    appendTransaction(&head, 103, 200.0);
    appendTransaction(&head, 104, 750.0);
    appendTransaction(&head, 105, 1200.0);

    // Convert linked list to array
    double amounts[100];
    int ids[100];
    int n = linkedListToArray(head, amounts, ids);

    // Sort transactions using quick sort
    quickSort(amounts, ids, 0, n - 1);

    // Detect fraud based on a threshold
    double threshold = 1000.0;
    detectFraud(amounts, ids, n, threshold);

    return 0;
}