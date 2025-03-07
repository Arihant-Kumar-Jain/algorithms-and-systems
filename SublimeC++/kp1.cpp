#include <bits\stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int val) : data(val), next(nullptr), prev(nullptr) {}
    node(int val, node *prv, node *nxt) : data(val), next(nxt), prev(prv) {}
};

node *ihead(node *head, int val)
{
    if (!head)
        return new node(val);
    node *temp = new node(val, nullptr, head);
    head->prev = temp;
    return temp;
}

node *itail(node *head, int val)
{
    if (!head)
        return new node(val);
    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = new node(val, temp, nullptr);
    return head;
}

node *ik(node *head, int val, int k)
{
    if (!head || k <= 1)
        return ihead(head, val);
    node *temp = head;
    for (int i = 1; temp->next && i < k - 1; i++)
    {
        temp = temp->next;
    }
    node *p = new node(val, temp, temp->next);
    temp->next = p;
    if (p->next)
    {
        p->next->prev = p;
    }

    return head;
}

node *dhead(node *head)
{
    if (!head || !head->next)
    {
        return nullptr;
    }
    node *p = head->next;
    delete p->prev;
    p->prev = nullptr;
    return p;
}

node *dtail(node *head)
{
    if (!head || !head->next)
    {
        return nullptr;
    }
    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    delete temp;
    return head;
}

node *dk(node *head, int k)
{
    if (!head || k <= 1)
        return dhead(head);
    node *temp = head;
    for (int i = 1; temp->next && i < k; i++)
    {
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    if (temp->next)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
    return head;
}

void printt(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << "<->";
        temp = temp->next;
    }
    cout << nullptr << endl;
}

node *sortt(node *head)
{
    if (!head || !head->next)
        return head;
    node *sorted = nullptr;
    node *current = head;
    while (current)
    {
        if (!sorted || sorted->data >= current->data)
        {
            sorted = ihead(sorted, current->data);
        }
        else
        {
            node *temp = sorted;
            while (temp->next && temp->next->data < current->data)
            {
                temp = temp->next;
            }
            node *p = new node(current->data, temp, temp->next);
            temp->next = p;
            if (p->next)
            {
                p->next->prev = p;
            }
        }
        current = current->next;
    }
    return sorted;
}

int main()
{
    node *head = new node(1);
    for (int i = 0; i < 5; i++)
    {
        head = ihead(head, i + 2);
    }
    for (int i = 0; i < 5; i++)
    {
        head = itail(head, i + 7);
    }
    head = ik(head, 1, 2);
    head = ik(head, 100, 20);
    printt(head);
    head = dhead(head);
    head = dtail(head);
    printt(head);
    head = dk(head, 2);
    printt(head);
    head = sortt(head);
    printt(head);
    return 0;
}