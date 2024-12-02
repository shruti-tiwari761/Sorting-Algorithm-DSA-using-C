#include <stdio.h>
#define MAX_SIZE 10
#include<stdlib.h>
//single linked list
void create();
void displaylinkedlist();
void insert_end();
void insert_begin();
void insert_specific();
void delete_end();
void delete_begin();
void delete_specific();
//for array
void display(int arr[], int size);
void insertInArray(int arr[], int *size);
void deleteFromArray(int arr[], int *size);
int searchInArray(int arr[], int size, int element);
//double linked list
void dinsert_begin(int value);
void dinsert_end(int value);
void dinsert_after_specified_ele(int value,int ele);
 void ddelet_begin();
 void ddelet_middle(int ele);
 void ddelet_end();
  void ddisplay();
// circular linked list
struct node* ccreateNode(int data);
struct node* cinsertAtEnd(struct node* head, int data);
struct node* cdeleteFromFront(struct node* head);
void cdisplay(struct node* head);
//sorting
void swap(int *a, int *b);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void insertionSort(int arr[], int n);
void selectionSort(int arr[], int n);
void printArray(int arr[], int size);
//queue
void enqueue(int value);
int dequeue();
void displayQueue();
int isFull();
int isEmpty();
//stack
void push(int item);
int pop();
int peek();
int stack_isEmpty();
int stack_isFull();
void stack_display();
struct node
{
    struct node *prev;
    int data;
    struct node*next;
};
struct node *s=NULL,*head=NULL, *ptr;

int queue[MAX_SIZE];
int front = -1, rear = -1;
int top = -1;
int stack_arr[];
int MAX;
int main() {

    int choice, array_choice,linkedchoice,listchoice, a[MAX_SIZE] = {12, 34, 56, 78, 90}, size = 5,value,ele,i,n,item;
    int arr[10],j,temp;
     do{
    printf("\n*---o---o---o DATA STRUCTURE & ALGORITHM o---o---o---*");
    printf("\n|                  1. ARRAYS                         |");
    printf("\n|                  2.LINKED LIST                     |");
    printf("\n|                  3.SORTING                         |");
    printf("\no                  4.QUEUE                           o");
    printf("\n|                  5.STACK                           |");
    printf("\n|                  6.EXIT                            |");
    printf("\n*---o---o---o---o---o---o---o---o---o---o---o---o----*");

    printf("\n* * * * * * * PLEASE ENTER YOUR CHOICE * * * * * * * *\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            printf("\n*o---o---o---o---o ARRAYS o---o---o---o---o*");
            printf("\n|               1. INSERTION               |");
            printf("\no               2. DELETION                O");
            printf("\n|               3. SEARCHING               |");
            printf("\n*---o---o---o---o---o---o---o---o---o---o--*");
            printf("\n * * * * Array Contain Following Elemnts:* * * * *\n");
            for (int i = 0; i < size; i++)
            {
               printf("%d ", a[i]);
            }
            printf("\n* * * * * PLEASE ENTER YOUR CHOICE * * * * *\n");

            scanf("%d", &array_choice);

            switch (array_choice) {
                case 1:
                    insertInArray(a, &size);
                    break;

                case 2:
                    deleteFromArray(a, &size);
                    break;

                case 3:
                {
                    int element;
                    printf("Enter the element to search: ");
                    scanf("%d", &element);
                    int position = searchInArray(a, size, element);
                    if (position != -1) {
                        printf("Element found at position %d.\n", position + 1);
                    }
                    else
                    {
                        printf("Element not found.\n");
                    }
                    break;
                }
                case 4:
                {
                display(a,size);
                }
                break;

                default:
                    printf("Invalid choice");
            }
            break;
        }
        case 2:

        {
        printf("\n*o---o---o---o---o---* Linked list *---o---o---o---o--*");
        printf("\n|                      1.Singly linked list           |");
        printf("\no                      2.Double linked list            o");
        printf("\n|                      3.Circular linked list         |");
        printf("\n*---o---o---o---o---o---o---o---o---o---o---o---o---o*\n");
        printf("Enter your choice");
        scanf("%d",&listchoice);
        switch(listchoice)
        {
         case 1:
        {
        printf("\n *o---o---o---*Singly Linked List *---o---o---o---o--* ");
        printf("\n |                     1.create                      | ");
        printf("\n o                     2.display                     o ");
        printf("\n |                     3.insert_end                  | ");
        printf("\n o                     4.insert begin                0 ");
        printf("\n |                     5.insert at specific position | ");
        printf("\n o                     6.delete end                  o ");
        printf("\n |                     7.delete begin                | ");
        printf("\n o                     8.delete specific postion     0 ");
        printf("\n*---o---o---o---o---o---o---o---o---o---o---o---o---o*\n");
        printf("Enter the choice");
        scanf("%d",&linkedchoice);
        switch(linkedchoice)
        {
            case 1:create();
            break;
            case 2: displaylinkedlist();
            break;
            case 3:insert_end();
            break;
            case 4: insert_begin();
            break;
            case 5:insert_specific();
            break;
            case 6:delete_end();
            break;
            case 7:delete_begin();
            break;
            case 8:delete_specific();
            break;

            default:printf("Invalid choice");

        }
        }
        break;
        case 2:
        {
        printf("\n *o---o---o---*Doubly Linked List *---o---o---o---o--* ");
        printf("\n |                1:insert_begin                      |");
        printf("\n *                 2:insert_end                       *");
        printf("\n |                3:insert at specified postion       |");
        printf("\n *                 4:delet_begin                       *");
        printf("\n |                 5:delet_end                        |");
        printf("\n *                 6:delet_middle                     *");
        printf("\n*---o---o---o---o---o---o---o---o---o---o---o---o---o*\n");
          while(1)
          {
              printf("Enter the choice");
              scanf("%d",&choice);
              switch(choice)
              {
                  case 1:
                  {
                      printf("Enter the value ");
                      scanf("%d",&value);
                      dinsert_begin(value);
                      ddisplay();
                      break;
                  }
                   case 2:
                  {
                      printf("Enter the value ");
                      scanf("%d",&value);
                      dinsert_end(value);
                      ddisplay();
                      break;
                  }
                   case 3:
                  {
                      printf("Enter the value ");
                      scanf("%d",&value);
                      printf("Enter the postion");
                      scanf("%d",&ele);
                       dinsert_after_specified_ele( value, ele);
                      ddisplay();
                      break;
                  }
                   case 4:
                   {
                       ddelet_begin();
                       ddisplay();
                       break;
                   }
                   case 5:
                   {
                       ddelet_end();
                       ddisplay();
                       break;
                   }
                   case 6:
                   {
                       printf("Enter the element you eant to delet");
                       scanf("%d",&ele);
                       ddelet_middle(ele);
                       ddisplay();
                       break;
                   }
                       
                   }
                  }
              }
              case 3:
              printf("\n *---o---o---o---o* Circular Linked List Menu:*---o---o---o---o*");
              printf("\n|                      1. Insert at End                        |");
              printf("\n*                      2. Delete from Front                    *");
              printf("\n                       3. Display                              |");
              printf("\n                       4. Exit                                 *");
              printf("\n*---o---o---o---o---o--o---o--o--o--o---o---o---o---o---o---o*\n");

              printf("Enter your choice:");
              scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                head = cinsertAtEnd(head, value);
                break;
            case 2:
                head = cdeleteFromFront(head);
                break;
            case 3:
                cdisplay(head);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
             

        }
        }

        break;
        case 3:
        {
            printf("*\n---o---o---o--o* Enter the number of elements in the array *o---o---o---o---o*\n");
             scanf("%d", &n);
           int arr[n];
   
    printf("*---o---o---o---o * Enter the elements of the array *---o---o---o---o*\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n*---o---o---o---o* Sorting *---o---o---o---o*");
    printf("\n|               1. Bubble Sort              |");
    printf("\n*               2. Quick Sort               *");
    printf("\n|               3. Insertion Sort           |");
    printf("\n*               4. Selection Sort           *");
    printf("\n*---o---o---o---o---o--o--o---o---o---o---o*\n");
    printf("*---o---o---o---o* Enter your choice *---o---o---o---*\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            {
           for(i=0;i<n-1;i++)
            {
           for(j=0;j<n-i-1;j++)
            {
          if(arr[j]>arr[j+1])
          {
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
          }
        }
       }

            }
            break;
        case 2:
            quickSort(arr, 0, n - 1);
            break;
        case 3:
            insertionSort(arr, n);
            break;
        case 4:
            selectionSort(arr, n);
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    printf("Sorted array: ");
    printArray(arr, n);

        }
        break;
        case 4:
        {
        printf("\n*---o---o---o* Queue Menu *---o---o---o*");
        printf("\n|              1. Enqueue               |");
        printf("\no              2. Dequeue               o");
        printf("\n|              3. Display Queue         |");
        printf("\n*---o---o---o---o---o--o--o---o---o--o*\n");
        printf("*---o---o---o---o* Enter your choice *---o---o---o---*\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                {
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                }
                break;

            case 2:
                {
                if (!stack_isEmpty())
                {
                    printf("Dequeued element: %d\n", dequeue());
                } else
                {
                    printf("Queue is empty. Cannot dequeue.\n");
                }
       
                }
                break;

            case 3:
                {
                displayQueue();
                }
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

        }
        break;
        case 5:
        {
             printf("\n1.Push\n");
                printf("2.Pop\n");
                printf("3.Display the top element\n");
                printf("4.Display all stack elements\n");
                printf("5.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                 case 1 :
                 
                        printf("\nEnter the item to be pushed : ");
                        scanf("%d",&item);
                        push(item);
                        break;
                 case 2:
                        item = pop();
                        printf("\nPopped item is : %d\n",item );
                        break;
                 case 3:
                        printf("\nItem at the top is : %d\n", peek() );
                        break;
                 case 4:
                        stack_display();
                        break;
                 case 5:
                        exit(1);
                 default:
                        printf("\nWrong choice\n");
                }/*End of switch*/
        }/*End of while*/

        break;
         case 6:
                // Exit the program
                printf("Exiting program. Goodbye!\n");
                break;

    }
}while(choice != 6);
    return 0;
}

///all functions
void display(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertInArray(int arr[], int *size)
{
    if (*size == MAX_SIZE)
    {
        printf("Array is full. Insertion not possible.\n");
        return;
    }

    int num;
    printf("Enter the element to insert: ");
    scanf("%d", &num);

    int insertion_choice;
    printf("\no---o---o---o---o---o---oInsertion---o---o---o---o---o---o");
    printf("\n|         1. Insert at Zeroth Position                   |");
    printf("\no         2. Insert at Specific Position                 o");
    printf("\n|         3. Insert at the End                           |");
    printf("\n---o---o---o---o---o---o---o---o---o---o---o---o---o---o--\n");
    printf("Enter your choice: ");
    scanf("%d", &insertion_choice);

    switch (insertion_choice) {
        case 1:
            for (int i = *size - 1; i >= 0; i--) {
                arr[i + 1] = arr[i];
            }
            arr[0] = num;
            (*size)++;
            break;

        case 2: {
            int pos;
            printf("Enter the position to insert: ");
            scanf("%d", &pos);

            if (pos < 1 || pos > *size + 1) {
                printf("Invalid position for insertion.\n");
            } else {
                for (int i = *size - 1; i >= pos - 1; i--) {
                    arr[i + 1] = arr[i];
                }
                arr[pos - 1] = num;
                (*size)++;
            }
            break;
        }

        case 3:
            arr[*size] = num;
            (*size)++;
            break;

        default:
            printf("Invalid choice for insertion.\n");
    }

    display(arr, *size);
}

// Function to delete an element from the array
void deleteFromArray(int arr[], int *size)
{
    if (*size == 0) {
        printf("Array is empty. Deletion not possible.\n");
        return;
    }

    int deletion_choice;
    printf("\no---o---o---o---o---o---oDeletion---o---o---o---o---o---o");
    printf("\n|               1. Delete at Front                      |");
    printf("\no               2. Delete at Specific Position          o");
    printf("\n|               3. Delete at Last                       |");
    printf("\n---o---o---o---o---o---o---o---o---o---o---o---o---o---o-\n");
    printf("Enter your choice: ");
    scanf("%d", &deletion_choice);

    switch (deletion_choice) {
        case 1:
            for (int i = 0; i < *size - 1; i++) {
                arr[i] = arr[i + 1];
            }
            (*size)--;
            break;

        case 2: {
            int pos;
            printf("Enter the position to delete: ");
            scanf("%d", &pos);

            if (pos < 1 || pos > *size) {
                printf("Invalid position for deletion.\n");
            } else {
                for (int i = pos - 1; i < *size - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                (*size)--;
            }
            break;
        }

        case 3:
            (*size)--;
            break;

        default:
            printf("Invalid choice for deletion.\n");
    }

    display(arr, *size);
}

// Function to search for an element in the array
int searchInArray(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}
void create()
{
    struct node *p,*s1;
    p=(struct node*) malloc(sizeof(struct node));
    printf("enter the element\n");
    scanf("%d",&p->data);
    p->next=NULL;
    if(s==NULL)
    {
        s=p;
    }
    else
    {
        s1=s;
        while(s1->next!=NULL)
        {
            s1=s1->next;
        }
        s1->next=p;
    }
}
void displaylinkedlist()
{
  struct node* s1;
  if(s==NULL)
  {
    printf("list is empty");
    return;
  }
    else
    {
        s1=s;
        printf("the elements are:\n");
        while(s1!=NULL)
        {
            printf("%d ",s1->data);
            s1=s1->next;
        }
    }
}
void insert_end()
{
    struct node *p,*s1;
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the element\n");
    scanf("%d",&p->data);
    p->next=NULL;
    if(s==NULL)
    {
        s=p;
    }
    else
    {
        s1=s;
        while(s1->next!=NULL)
        {
            s1=s1->next;
        }
        s1->next=p;
    }
}
void insert_begin()
{
  struct node *p,*s1;
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the element\n");
    scanf("%d",&p->data);
    p->next=NULL;
    if(s==NULL)
    {
        s=p;
    }
    else
    {
     p->next=s;
     s=p;
    }
}
void insert_specific()
{
    struct node *p,*s1;
    int pos,i;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the position where you want to insert the elements:");
    scanf("%d,pos");
    printf("Enter the element:");
    scanf("%d\n",&p->data);
    p->next=NULL;
    if(pos==0)
    {
        p->next=s;
        s=p;

    }
    else{
        s1=s;
        for(i=0;i<=pos-2;i++ && s1->next!=NULL)
        {
            s1=s1->next;

        }
        p->next=s1->next;
        s1->next=p;

    }

}
void delete_end()
{
    struct node *s1,*temp;
    if(s==NULL)
    {
        printf("linked list is empty");
        exit(0);
    }
    else if(s->next==NULL)
    {
        s1=s;
        s=NULL;
        printf("The deleted elements is %d",s1->data);
        free(s1);
    }
    else
    {
        s1=s;
        while(s1->next!=NULL)
        {
            temp=s1;
            s1-s1->next;
        }
        temp->next=NULL;
         printf("The deleted elements is %d",s1->data);
        free(s1);
    }
}
void delete_begin()
{
    struct node *temp;
    if(s==NULL)
    {
        printf("Linked list is empty");
        exit(0);
    }
    else
    {
        temp=s;
        s=s->next;
        printf("deleted element is %d",s->data);
        free(temp);
    }
}
void delete_specific()
{
    int i,pos;
    struct node *s1,*temp;
    if(s==NULL)
    {
        printf("Linked list is empty");
        exit(0);
    }
    else
    {
        printf("Enter the positionof the node to be deleted");
        scanf("%d",pos);
        if(pos==0)
        {
            s1=s;
            s=s->next;
            printf("The deleted elements is %d",s1->data);
            free(s1);
        }
        else
        {
            s1=s;
            for(i=0;i<pos;i++&& s1->next!=NULL)
            {
                temp=s1;
                s1=s1->next;
            }
            temp->next-s1->next;
             printf("The deleted elements is %d",s1->data);
            free(s1);
        }
    }
}
void dinsert_begin(int value)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=value;
    temp->prev=NULL;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
 void dinsert_end(int value)
 {
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=value;
    temp->prev=NULL;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next != NULL)
        {
            ptr=ptr->next;
        }
          ptr->next=temp;
          temp->prev=ptr;
    }
 }
 void dinsert_after_specified_ele(int value,int ele)
 {
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=value;
    temp->prev=NULL;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
      ptr=head;
      while(ptr->data != ele)
      {
          ptr=ptr->next;
      }
       temp->next=ptr->next;
       temp->prev=ptr;
       ptr->next->prev=temp;
       ptr->next=temp;
    }
 }
 void ddelet_begin()
 {
     if(head == NULL)
     {
         printf("List is empty,Deletion is not possible");
     }
     else
     {
         ptr=head;
         head=head->next;
         ptr->next=NULL;
         head->prev=NULL;
         free(ptr);
     }
 }
 void ddelet_end()
 {
     if(head == NULL)
     {
         printf("List is empty,Deletion is not possible");
     }
     else
     {
         ptr=head;
         while(ptr->next != NULL)
         {
             ptr=ptr->next;
         }
         ptr->prev->next=NULL;
         ptr->prev=NULL;
         free(ptr);
     }
 }
 void ddelet_middle(int ele)
 {
     if(head == NULL)
     {
         printf("List is empty,Deletion is not possible");
     }
     else
     {
         while(ptr->data != ele)
         {
             ptr=ptr->next;
         }
         ptr->prev->next=ptr->next;
         ptr->next->prev=ptr->prev;
         ptr->next=NULL;
         ptr->prev=NULL;
         free(ptr);
     }
 }
 void ddisplay()
 {
     if(head ==NULL)
     {
         printf("List is empty,Deletion is not possible");
     }
     else
     {
         ptr=head;
         while(ptr != NULL)
         {
             printf("%d <=>",ptr->data);
             ptr=ptr->next;
         }
           printf("\n");
     }
 }
 //circular linked list
 struct node* ccreatenode(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

// Function to insert a node at the end of the circular linked list
struct node* cinsertAtEnd(struct node* head, int data) {
    struct node* newnode = ccreatenode(data);

    if (head == NULL) {
        head = newnode;
        head->next = head;
    } else {
        struct node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = head;
    }

    printf("Inserted element: %d\n", data);
    return head;
}

// Function to delete a node from the front of the circular linked list
struct node* cdeleteFromFront(struct node* head) {
    if (head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return head;
    }

    struct node* temp = head;
    if (head->next == head) {
        // Only one node in the list
        printf("Deleted element: %d\n", temp->data);
        free(temp);
        return NULL;
    } else {
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = head->next;
        printf("Deleted element: %d\n", head->data);
        free(head);
        return temp->next;
    }
}

// Function to display the elements of the circular linked list
void cdisplay(struct node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(head)\n");
}
//sorting
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int isFull() {
    return rear == MAX_SIZE - 1;
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1;
}

// Function to enqueue an element into the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (isEmpty()) {
            front = 0; // Set front to 0 when inserting the first element
        }
        rear++;
        queue[rear] = value;
        printf("Enqueued %d\n", value);
    }
}

// Function to dequeue an element from the queue
int dequeue() {
    int value;
    if (isEmpty()) {
        return -1; // Return a special value to indicate an empty queue
    } else {
        value = queue[front];
        if (front == rear) {
            // Reset front and rear when the last element is dequeued
            front = rear = -1;
        } else {
            front++;
        }
        return value;
    }
}

// Function to display the elements in the queue
void displayQueue() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
//stack
void push(int item)
{
        if( isFull() )
        {
                printf("\nStack Overflow\n");
                return;
        }
        top = top+1;
        stack_arr[top] = item;
}/*End of push()*/

int pop(int MAX)
{
        int item;
        if( isEmpty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        item = stack_arr[top];
        top = top-1;
        return item;
}/*End of pop()*/

int peek(int MAX)
{
   
        if( isEmpty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        return stack_arr[top];
}/*End of peek()*/

int stack_isEmpty()
{
        if( top == -1 )
                return 1;
        else
                return 0;
}/*End of isEmpty*/

int stack_isFull(int MAX)
{
   
        if( top == MAX-1 )
                return 1;
        else
                return 0;
}/*End of isFull*/

void stack_display()
{
        int i;
        if( isEmpty() )
        {
                printf("\nStack is empty\n");
                return;
        }
    printf("\nStack elements :\n\n");
        for(i=top;i>=0;i--)
                printf(" %d\n", stack_arr[i] );
        printf("\n");
}/*End of display()*/
