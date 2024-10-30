# B Tree

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
