// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-linked-list/problem?isFullScreen=true
// Problem     Day 15: Linked List
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-06, 11:33 p.m.
// ──────────────────────────────────────────────────



      Node* insert(Node *head,int data)
      {
          Node* newNode = new Node(data);

    // If list is empty
    if (head == nullptr)
    {
        return newNode;
    }

    // Go to the last node
    Node* temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    // Add new node at the end
    temp->next = newNode;

    return head;
      }

