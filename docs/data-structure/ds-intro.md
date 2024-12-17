---
title: Data structure introduction
sidebar_label: Introduction
---

We have already seen data structures such as arrays. All data structures have
two main aspects:

1. operation they support (search item, find minimum, find maximum, insert new
item, delete an existing item etc.). We can think of this as an interface to the
data structure.
2. implementation of such data structure

Depending on the what operations we need to perform on our data, a specific
data structure is more suitable than others.

### Array

Arrays are good for certain operations but bad for others. Here are some pros
and cons of static (size of the array is fixed) arrays.

**Pros:**

1. Constant time access given the index
2. Only consists of data, in contrary for linked lists we need to store data and
a pointer for each entry
3. Physical continuity (memory locality) between successive elements help
exploit the high-speed cache-memory in modern CPUs.

**Cons:**

1. Size of array must be known beforehand
2. Resizing array is expensive
3. Insertion/<wbr/>deletion requires shifting subsequent elements

### Dynamic array

Dynamic arrays might start with a specific size, and double the size once run
out of space. Although resizing is expensive, we hope that we won't do it too
often (for $n$ elements we need to double $\log_2 n$ times).

The apparent waste in this procedure involves the recopying of the old contents
on each expansion. If half the elements move once, a quarter of the elements
move twice, and so on, the total number of movements $M$ is:

$$
\begin{aligned}
M &= \sum_{i=1}^{\log n} i \times n/2^i \\
&= n \sum_{i=1}^{\log n} i/2^i \\
&\le n \sum_{i=1}^{\infty} i/2^i \\
&= 2 n
\end{aligned}
$$

Thus each of the n elements move an average of only twice, the total work of
managing the dynamic array is the same as  a simple array $\mathcal{O}(n)$.

Another disadvantage is it will waste memory by allocating extremely large
arrays.

### Linked lists

Searching in a linked list can be done iteratively or recursively. Searching in
sorted array could be done by binary search in $\mathcal{O}(\log n)$. Access is
$\mathcal{O}(n)$ since we need to traverser from the head; compared to
$\mathcal{O}(1)$ in case of arrays. Insertion/<wbr/>deletion in head is
$\mathcal{O}(1)$. Insertion/<wbr/>deletion elsewhere is $\mathcal{O}(n)$.

Pros of linked list:
1. No overflow
2. Insertion and deletion are simpler than static arrays
3. With large records, moving pointer is much more efficient than moving the
data part.

### Stacks and Queues

Containers to store items, we access them in the order they came.
**Stack:** Last in first out (LIFO).

**Queue:** First in first out (FIFO).

Stacks and Queues can be implemented using arrays or linked lists.

### Dictionary/Dynamic set operation
Supports operations:
1. `Search(Set, k)`: returns pointer to an item `x` such that `key[x] = k`, or
`nil` if no such element exists.
2. `Insert(S, x)`
3. `Delete(S, x)`
4. `Min(S)`, `Max(S)` (smallest/<wbr/>largest key)
5. `Predecessor(S, x)`/<wbr/>`Successor(S, x)`

There are variety of implementation of these dictionary operations, each of
which yield different time complexities of different operations.

Example: Array based sets: unsorted arrays
1. `Search(S, k)` - sequential search, $\mathcal{O}(n)$
2. `Insert(S, x)` - place in first empty spot (last element), $\mathcal{O}(1)$,
can use dynamic array, no need to worry about resizing
3. `Delete(S, x)` - copy nth (last item) to the `x`-th spot, $\mathcal{O}(1)$
4. `Min/Max` - sequential search $\mathcal{O}(n)$
5. `Successor/Predecessor` - sequential search $\mathcal{O}(n)$
(previous/<wbr/>next index is not successor/<wbr/>predecessor)

If we use sorted array, searching could be done by binary search and complexity
reduces to $\mathcal{O}(\log n)$.

`Insert/delete` becomes costly as we need to keep them sorted. $\mathcal{O}(n)$
complexity. `Min/Max` is easy $\mathcal{O}(1)$. `Successor/Predecessor` is also
$\mathcal{O}(1)$.

We can implement dictionary using singly/<wbr/>doubly sorted/<wbr/>unsorted
linked list:

Dictionary Operation | Singly unsorted | Singly sorted | Doubly unsorted | Doubly sorted
-------------------- | --------------- | ------------- | --------------- | -------------
Search(L, k) | $\mathcal{O}(n)$, sequential search | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ | $\mathcal{O}(n)$
Insert(L, x) | $\mathcal{O}(1)$, insert in the head | $\mathcal{O}(1)$ | $\mathcal{O}(n)$ | $\mathcal{O}(n)$
Delete(L, x) | $\mathcal{O}(n)$, sequential search to arrive | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ | $\mathcal{O}(1)$
Successor/ Predecessor(L, x) | $\mathcal{O}(n)$, need to go through all items | $\mathcal{O}(n)$ |Successor $\mathcal{O}(1)$, Predecessor $\mathcal{O}(n)$ | $\mathcal{O}(1)$
Min/ Max(L) | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ | Min $\mathcal{O}(1)$, Max $\mathcal{O}(n)$ | $\mathcal{O}(1)$

### Hash tables

Hash tables are a very practical way to maintain a dictionary. The idea is
simply that looking an item up in an array is $\Theta(1)$ once you have its
index.

A hash function is a mathematical function which maps keys to integers. Since we
are mapping larger set to a smaller set, collisions might happen. If the keys
are uniformly distributed, then each bucket should contain very few keys.

#### Hash functions

A good hash function has following properties:

1. Is cheap to evaluate
2. Tends to use all positions from $0, 1, \ldots, M$ with uniform frequency.

Here is an example of hash function: say we want to map text data into integers.
The first step is usually to map the key to a big integer, remember ascii
characters can have code up to 128 (2<sup>7</sup>).

$$
h = \sum_{i=0}^M 128^i \times char(key[i])
$$

Here $M$ is the key length.

#### Modular arithmetic

Then we use use modular arithmetic to map large integers to smaller ones, whose
size is between 1 and the size of our hash table.

$$
h(k) = k \mod M
$$

Where M is best a large prime not too close to $2^i - 1$, which would mask off
the high bits. $mod$ is the remainder of $k \% M$. This works on the same
principle as a roulette wheel.

#### Collisions
No matter how good is our hash function, we have to prepared for collisions
since we are mapping larger space into a smaller size space. Recall the birthday
paradox: if you are in a party of about 23 people, there is 50% probability that
two person share the same birthday. And if there are about 56 people, the
probability is very close to 1. If we have too many collisions operations on our
data structure becomes less efficient. For example look up takes
$\mathcal{O}(1)$ without collision, now it becomes $\mathcal{O}(x)$, where `x`
is the number of collision in a particular bin, and in worst case it is
$\mathcal{O}(n)$.

### Priority Queue

Supports following three operations:
1. `Insert(Q, x)`: Given an item `x` with key `k`, insert into the priority
queue $Q$.
2. `Min/Max(Q)`
3. `Delete-Min/Max(Q)`

We could use balanced binary trees for queues, and all three operations could be
done in $\mathcal{O}(\log n)$ time.

### Heap


### Resources
- [Analysis of Algorithms by Steven Skiena](https://www.youtube.com/playlist?list=PLOtl7M3yp-DXbHTFe_w9zFPXeau28CDao)
