# Array

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
