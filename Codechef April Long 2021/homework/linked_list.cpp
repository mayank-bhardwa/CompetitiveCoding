#include <iostream>
using namespace std;

template <typename type>
struct Node
{
    type data;
    Node *next;

    Node(type data)
    {
        this->data = data;
        this->next = NULL;
    }
};

template <typename type>
Node<type> *insert(Node<type> *head, type data);

template <typename type>
Node<type> *insert_front(Node<type> *head, type data);

template <typename type>
void print(Node<type> *head);

template <typename type>
Node<type> *reverse(Node<type> *head);

template <typename type>
Node<type> *add(Node<type> *h1, Node<type> *h2);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
#endif

    Node<int> *h1 = NULL;

    h1 = insert(h1, 1);
    h1 = insert(h1, 2);
    h1 = insert(h1, 3);

    Node<int> *h2 = NULL;
    h2 = insert(h2, 3);
    h2 = insert(h2, 9);

    Node<int> *h3 = add(h1, h2);
    print(h3);

    return 0;
}

template <typename type>
Node<type> *insert(Node<type> *head, type data)
{
    Node<type> *temp = new Node(data);

    if (head == NULL)
        return temp;

    Node<type> *h = head;
    while (h->next != NULL)
        h = h->next;

    h->next = temp;
    return head;
}

template <typename type>
Node<type> *insert_front(Node<type> *head, type data)
{
    Node<type> *temp = new Node(data);
    temp->next = head;
    head = temp;
    return head;
}

template <typename type>
void print(Node<type> *head)
{
    Node<type> *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

template <typename type>
Node<type> *reverse(Node<type> *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node<type> *new_head = NULL, *next;

    while (head != NULL)
    {
        next = head->next;
        head->next = new_head;
        new_head = head;
        head = next;
    }

    return new_head;
}

template <typename type>
Node<type> *add(Node<type> *h1, Node<type> *h2)
{
    if (h1 == NULL && h2 == NULL)
        return h1;
    if (h1 == NULL)
        return h2;
    if (h2 == NULL)
        return h1;

    h1 = reverse(h1);
    h2 = reverse(h2);

    int temp, carry = 0;
    Node<type> *h3 = NULL;
    while (h1 != NULL || h2 != NULL)
    {
        if (h1 == NULL)
        {
            temp = h2->data + carry;
            h2 = h2->next;
        }
        else if (h2 == NULL)
        {
            temp = h1->data + carry;
            h1 = h1->next;
        }
        else
        {
            temp = h1->data + h2->data + carry;
            h1 = h1->next;
            h2 = h2->next;
        }
        carry = temp / 10;
        h3 = insert_front(h3, temp % 10);
    }

    if (carry != 0)
        h3 = insert_front(h3, carry);

    return h3;
}
