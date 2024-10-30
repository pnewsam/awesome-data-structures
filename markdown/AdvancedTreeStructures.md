# Advanced Tree Structures

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
