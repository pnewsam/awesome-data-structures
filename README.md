# Shakespeare Bot

Project Goals:

1. Parse the file and organize it for better use. Create a file for each play. (And one for the sonnets). Then create a text file containing a map of each filename.

## Data Structures

### Part 1: Essential Data Structures

1. Arrays and Dynamic Arrays
   Description: Contiguous memory blocks storing elements of the same type.

   a. C-style array (fixed-size)

   - `get_item(index)`, `set_item(index, value)`
   - `insert_item(index, value)`, `remove_item(index)`
   - `free()`, `clear()`

   b. Dynamic array (like std::vector)

   - `push_back(element)`, `pop_back()`
   - `at(index)`, `operator[]`
   - `size()`, `capacity()`, `empty()`
   - `reserve(new_capacity)`, `resize(new_size)`

   Implementation focus:

   - Memory allocation and management
   - Resizing strategy for dynamic arrays

2. Linked Lists
   Description: Sequence of nodes where each node points to the next node.

   a. Singly linked list

   - `push_front(element)`, `pop_front()`
   - `insert_after(position, element)`
   - `erase_after(position)`
   - `front()`, `empty()`, `clear() `

   b. Doubly linked list

   - `push_back(element)`, `push_front(element)`
   - `pop_back()`, `pop_front()`
   - `insert(position, element)`, `erase(position)`
   - `size()`, `empty()`, `clear()`

   Implementation focus:

   - Node structure and memory management
   - Handling edge cases (empty list, single element)

3. Stack and Queue
   Description: Abstract data types with specific insertion and deletion rules.

   a. Stack (LIFO - Last In First Out)

   - `push(element)`, `pop()`
   - `top()`, `empty()`, `size()`

   b. Queue (FIFO - First In First Out)

   - `enqueue(element)`, `dequeue()`
   - `front()`, `back()`, `empty()`, `size()`

   Implementation focus:

   - Implement using both array and linked list
   - Handling underflow and overflow conditions

4. Binary Search Tree (BST)
   Description: Tree data structure with ordered nodes for efficient searching.

   Implementation:

   - `insert(element)`, `delete(element)`
   - `search(element)`
   - `min()`, `max()`
   - traversals: `in_order()`, `pre_order()`, `post_order()`

   Implementation focus:

   - Recursive and iterative implementations
   - Balancing considerations (optional: implement basic balancing)

   Relevant terms

   - "Complete tree"
   - "Balanced tree"

5. Hash Table
   Description: Data structure that implements an associative array abstract data type.

   - `insert(key, value)`, `delete(key)`
   - `search(key)`
   - `hash_function(key)`
   - `handle_collision()` (implement both chaining and open addressing)
   - `resize()` and `rehash()`

   Implementation focus:

   - Efficient hash function design
   - Collision resolution strategies
   - Dynamic resizing

6. Heaps

   [Heap](./P1N6_Heap.md)

7. Graphs (Basic)
   Description: Collection of nodes potentially connected by edges.

   - `add_vertex()`, `add_edge()`
   - `remove_vertex()`, `remove_edge()`
   - `is_adjacent(vertex1, vertex2)`
   - `get_neighbors(vertex)`
   - `BFS(start_vertex)`, `DFS(start_vertex)`

   Implementation focus:

   - Implement both adjacency list and adjacency matrix representations
   - Traversal algorithms (BFS and DFS)

### Part 2: Advanced Data Structures

1. Balanced Trees

   a. AVL Tree
   Description: Self-balancing binary search tree where the height of the two child subtrees of any node differ by at most one.

   - `insert(element)`, `delete(element)`, `search(element)`
   - `left_rotate(node)`, `right_rotate(node)`
   - `update_height(node)`, `get_balance_factor(node)`
   - `rebalance(node)`

   Implementation focus:

   - Maintaining balance after insertions and deletions
   - Implementing rotation operations efficiently

   b. Red-Black Tree
   Description: Self-balancing binary search tree with good worst-case guarantees for insertion, deletion, and search.

   - `insert(element)`, `delete(element)`, `search(element)`
   - `left_rotate(node)`, `right_rotate(node)`
   - `color_flip(node)`
   - `fix_violation_after_insert(node)`, `fix_violation_after_delete(node)`

   Implementation focus:

   - Implementing color properties and violations
   - Balancing the tree while maintaining red-black properties

2. Advanced Tree Structures

   a. Trie (Prefix tree)
   Description: Tree-like data structure for efficient retrieval of keys in a dataset of strings.

   - `insert(word)`, `search(word)`, `delete(word)`
   - `starts_with(prefix)`
   - `get_all_words_with_prefix(prefix)`

   Implementation focus:

   - Efficient string operations and prefix matching
   - Memory-efficient node structure

   b. Segment Tree
   Description: Tree-like data structure for storing intervals or segments, allowing for efficient query operations.

   - `build(array)`
   - `query(start, end)`
   - `update(index, value)`
   - `range_update(start, end, value)` (optional: lazy propagation)

   Implementation focus:

   - Efficient range queries and updates
   - Implementing recursive and iterative versions

3. Disjoint Set (Union-Find)
   Description: Data structure that keeps track of a set of elements partitioned into disjoint subsets.

   - `make_set(element)`
   - `find(element)`
   - `union(element1, element2)`
   - `get_num_sets()`

   Implementation focus:

   - Path compression optimization
   - Union by rank or size

4. Advanced Graph Algorithms
   Description: More complex graph operations and algorithms.

   - `minimum_spanning_tree(graph)` (Kruskal's or Prim's algorithm)
   - `shortest_path(graph, start, end)` (Dijkstra's algorithm)
   - `all_pairs_shortest_path(graph)` (Floyd-Warshall algorithm)
   - `topological_sort(graph)`
   - `is_bipartite(graph)`

   Implementation focus:

   - Efficient implementation of classic graph algorithms
   - Handling different graph representations (adjacency list/matrix)

5. B-Tree and B+ Tree
   Description: Self-balancing tree data structures designed for efficient disk access and range queries.

   Implementation requirements for B-Tree:

   - `insert(key, value)`, `delete(key)`, `search(key)`
   - `split_child(node, index)`, `merge_children(node, index)`

   Additional for B+ Tree:

   - `range_query(start_key, end_key)`
   - `get_next_leaf()`, `get_prev_leaf()`

   Implementation focus:

   - Maintaining tree properties during insertions and deletions
   - Efficient range queries (for B+ Tree)

6. Bloom Filter
   Description: Space-efficient probabilistic data structure for membership testing.

   - `add(element)`
   - `might_contain(element)`
   - `get_false_positive_probability()`
   - `create_hash_functions(num_functions)`

   Implementation focus:

   - Implementing multiple hash functions
   - Optimizing for space efficiency and false positive rate

7. Skip List
   Description: Probabilistic data structure that allows for fast search within an ordered sequence of elements.

   - `insert(element)`, `delete(element)`, `search(element)`
   - `generate_level()`
   - `create_node(element, level)`

   Implementation focus:

   - Implementing probabilistic level generation
   - Efficient search and update operations
