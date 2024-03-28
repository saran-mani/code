#include <stdio>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100

void add_task(char *todo_list[], int *task_count) {
    if (*task_count >= MAX_TASKS) {
        printf("Todo list is full!\n");
        return;
    }

    char task[100];
    printf("Enter task: ");
    scanf(" %[^\n]s", task);

    todo_list[*task_count] = malloc(strlen(task) + 1);
    strcpy(todo_list[*task_count], task);

    (*task_count)++;
}

void remove_task(char *todo_list[], int *task_count) {
    if (*task_count == 0) {
        printf("Todo list is empty!\n");
        return;
    }

    char task[100];
    printf("Enter task to remove: ");
    scanf(" %[^\n]s", task);

    int found = 0;
    for (int i = 0; i < *task_count; i++) {
        if (strcmp(todo_list[i], task) == 0) {
            free(todo_list[i]);
            for (int j = i; j < *task_count - 1; j++) {
                todo_list[j] = todo_list[j + 1];
            }
            (*task_count)--;
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Task not found in the list.\n");
    }
}

void view_tasks(char *todo_list[], int task_count) {
    printf("Tasks:\n");
    for (int i = 0; i < task_count; i++) {
        printf("%d. %s\n", i + 1, todo_list[i]);
    }
}

int main() {
    char *todo_list[MAX_TASKS];
    int task_count = 0;
    char choice;

    while (1) {
        // printf("\n1. Add task\n");
        // printf("2. Remove task\n");
        // printf("3. View tasks\n");
        // printf("4. Quit\n");

        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                add_task(todo_list, &task_count);
                break;
            case '2':
                remove_tasks(todo_list, &task_count);
                break;
            case '3':
                view_tasks(todo_list, task_count);
                break;
            case '4':
                printf("Exiting program.\n");
                // Free memory for tasks
                for (int i = 0; i < task_count; i++) {
                    free(todo_list[i]);
                }
                exit(0);
            default:
                printf("Invalid choice. Please enter a number from 1 to 4.\n");
        }
    }

    return 0;
}


//sample output


/*
1. Add task
2. Remove task
3. View tasks
4. Quit
Enter your choice: 1
Enter task: code debug

1. Add task
2. Remove task
3. View tasks
4. Quit
Enter your choice: 3
Tasks:
1. code debug

1. Add task
2. Remove task
3. View tasks
4. Quit
Enter your choice: 
*/