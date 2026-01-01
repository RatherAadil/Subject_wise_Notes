#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct queue
{
    struct node *front;
    struct node *rear;
};
void addq(struct queue *pq, int x)
{
    node *temp;
    temp = new node();
    if (temp == NULL)
    {
        cout << "Queue is Full";
    }
    temp->data = x;
    temp->next = NULL;
    if (pq->front == NULL)
    {
        pq->front = pq->rear = temp;
    }
    else
    {
        pq->rear->next = temp;
        pq->rear = temp;
    }
}

int delq(struct queue *pq)
{
    node *temp;
    int item;
    if (pq->front == NULL)
    {
        return -1;
    }
    else
    {
        temp = pq->front;
        item = temp->data;
        if (pq->front == pq->rear)
        {
            pq->front = pq->rear = NULL;
        }
        else
        {
            pq->front = pq->front->next;
        }
        delete temp;
        return item;
    }
}
int main()
{
    struct queue q;
    int i, n, ch;
    q.front = q.rear = NULL;
    do
    {
        cout << "\nEnter your choice" << endl;
        cout << "\n1. Add Queue\t2. Delete Queue\t0. Quit" << endl;
        cout << "\nYour Choice is:->";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nEnter Element to Add:->";
            cin >> n;
            addq(&q, n);
            break;
        case 2:
            i = delq(&q);
            if (i == -1)
                cout << "\nQueue is Empty";
            else
                cout << "\nItem Deleted from Front of Queue is " << i;
            break;
        case 0:
            exit(0);
        default:
            cout << "\nInvalid Choice Entered. Please Try Again";
        }
    } while (ch != 0);
    return 0;
}
