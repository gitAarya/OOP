#include <stdio.h>

// Structure to store process details
struct Process {
    int id, burst_time, waiting_time, turnaround_time;
};

// Function to swap two processes
void swap(struct Process *a, struct Process *b) {
    struct Process temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort processes by burst time (SJF)
void sortByBurstTime(struct Process p[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (p[j].burst_time > p[j + 1].burst_time) {
                swap(&p[j], &p[j + 1]);
            }
        }
    }
}

// Function to calculate waiting and turnaround times
void calculateTimes(struct Process p[], int n) {
    p[0].waiting_time = 0; // First process has no waiting time

    for (int i = 1; i < n; i++) {
        p[i].waiting_time = p[i - 1].waiting_time + p[i - 1].burst_time;
    }

    for (int i = 0; i < n; i++) {
        p[i].turnaround_time = p[i].waiting_time + p[i].burst_time;
    }
}

// Function to display process information
void displayProcesses(struct Process p[], int n) {
    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\n", p[i].id, p[i].burst_time, p[i].waiting_time, p[i].turnaround_time);
    }

    // Calculate average waiting and turnaround times
    float avg_wt = 0, avg_tat = 0;
    for (int i = 0; i < n; i++) {
        avg_wt += p[i].waiting_time;
        avg_tat += p[i].turnaround_time;
    }

    printf("\nAverage Waiting Time: %.2f", avg_wt / n);
    printf("\nAverage Turnaround Time: %.2f\n", avg_tat / n);
}

int main() {
    int n;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    struct Process p[n];

    for (int i = 0; i < n; i++) {
        p[i].id = i + 1;
        printf("Enter burst time for Process %d: ", i + 1);
        scanf("%d", &p[i].burst_time);
    }

    sortByBurstTime(p, n);
    calculateTimes(p, n);
    displayProcesses(p, n);

    return 0;
}
