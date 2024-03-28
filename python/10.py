todo_list = []

while True:
    print("1. Add task")
    print("2. Remove task")
    print("3. View tasks")
    print("4. Quit")
    
    choice = input("Enter your choice: ")
    
    if choice = '1':
        task = input("Enter task: ")
        todo_list.append(task)
    elif choice = '2':
        task = input("Enter task to remove: ")
        if task in todo_list:
            todo_list.remove(task)
        else:
            print("Task not found in the list.")
    elif choice = '3':
        print("Tasks:")
        for index, task in enumerate(todo_list, start=1):
            print(f"{index}. {task}")
    elif choice = '4':
        break
    else:
        print("Invalid choice. Please enter a number from 1 to 4.")

#Sample Output
        
"""
1. Add task
2. Remove task
3. View tasks
4. Quit
Enter your choice: 3
Tasks:

1. Add task
2. Remove task
3. View tasks
4. Quit
Enter your choice: 1
Enter task: take ID Card

1. Add task
2. Remove task
3. View tasks
4. Quit
Enter your choice: 2
Enter task to remove: no
Task not found in the list.

1. Add task
2. Remove task
3. View tasks
4. Quit
Enter your choice: 4
"""