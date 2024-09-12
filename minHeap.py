class MinHeap:
    def __init__(self, elements):
        self.elements = self.build(elements)
        self.size = 0

    def insert():
        return True

    def delete():
        return True

    def heapify(self, elements, size, index):
        # If left child is less than, swap them and heapify left child
        if self.leftChild(index) < elements[]


        # If right child is less than, swap them and heapify right child
        return True

    def parent(self, index):
        idx = (index / 2) - 1
        return self.elements[idx]

    def leftChild(self, index):
        idx = (index * 2) + 1
        return self.elements[idx]

    def rightChild(self, index):
        idx = (index * 2) + 2
        return self.elements[idx]

    def build(self, elements, size):
        for i in range(self.parent(size), 0, -1):
            self.heapify(elements, size, i)
