#Linked List dojo
Császár Regina @Codecool BP 3 (2017.1) Group C

## 1 General overview
Linked lists are an implementation strategy for a traversable data structure. 
Meaning all data nodes can be visited in a predefined order.

The building blocks of linked lists are **nodes**.

In its simplest form a node contains two things:
- its data (however simple or complicated that may be)
- a reference or pointer to the next node in the list

A linked list thus is not a hierarchical data structure. 
Rather it is a set of nodes each pointing to another node.

## 2 Properties of linked lists
Linked lists have attributes on them:

**head**: a reference to the first node in a linked list
**last**: always points to the last element in the list. It's not always present but it's useful if you are appending a lot
**length**: the number of nodes in a list. It is also not mandatory to have this field but counting the length of the list is much slower without it

And one more concept:

The tail is the linked list without its head. Means all the elements except the first one.

## 3 OK, but what is the assignment?
Implement a SinglyLinkedList (nodes only reference the next node in the list)

Write tests to see if it's working OK (for example: head / tail / length / insert / remove / iterate)

If you still have time implement a DoublyLinkedList (nodes have a reference for both the previous and next node in the list)
 

Get to work and have fun. Read on later for more details :)

## 4 When is it useful to use linked lists
When iterating through a whole list is often needed. And nodes are added / removed regularly.

### 4.1 Example

A computer game has soldiers.
In every turn iterate through all the soldiers
Remove the ones which health has reached zero.
Add newly trained soldiers to the list of soldiers.

## 5 Special cases
### 5.1 Doubly linked lists
Linked lists where the nodes have references for both the previous and next node in the list. Obvious case is when we want to traverse the list in both directions. But removal of nodes also becomes easier from doubly linked lists.

### 5.2 Circular lists
Linked lists where the last node references the head of the list as its next node. This can be useful where we don't care about which is the first node but we continuously need to visit each node in succession (e.g. a task list where big tasks can be skipped for later execution)

### 5.3 Multiply linked lists
Useful where the same nodes have to be traversed in different order depending on different criteria (e.g. nodes are people and we want to traverse both by name and by phone number depending on context)

### 5.4 Skip lists
Nodes are storing references not just for the next node in the list but for nodes further down the list. This allows faster lookup of specific nodes. But also much more bookkeeping is needed to keep all references consistent.

## 6 Caveats
Questions worth thinking about:

- What references the first node in a list?
- What is referenced by the last node in a list?
- What other nodes are involved when a node is modified / added / deleted ?
- What if a node is referenced by multiple nodes?
- What is an empty list?