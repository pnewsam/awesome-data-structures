# Balanced Tree

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
