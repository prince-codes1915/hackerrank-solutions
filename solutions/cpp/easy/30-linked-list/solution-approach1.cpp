// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-linked-list/problem?isFullScreen=true
// Problem     Day 15: Linked List
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-06, 11:33 p.m.
// Technique   linear-traversal-tail-insertion
// Time        O(n)
// Space       O(1)
// Insight     The function traverses the linked list until the last node is reached, then appends the new node to the tail, returning the original head pointer.
// Pitfalls    (1) Failing to handle the empty list case where head is null, which would cause a null pointer dereference during traversal.  (2) Forgetting to return the original head pointer after appending the new node, which results in losing the reference to the start of the list.
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

