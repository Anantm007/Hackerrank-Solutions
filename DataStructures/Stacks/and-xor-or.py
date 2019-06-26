class Stack:
    def __init__(self):
        self.items = []
        self.size = 0
    def push(self, elem):
        self.items.append(elem)
        self.size += 1
    def pop(self):
        self.size -= 1
        return self.items.pop()
    def peek(self):
        return self.items[-1]
    def isEmpty(self):
        return self.size == 0
N = int(input())
A = [int(x) for x in input().split(" ")]
mx = A[0]^A[1]
stack = Stack()
for i in A:
    popped = True
    while not stack.isEmpty():
        top = stack.peek() 
        Si = i^top  
        if Si > mx:  # yield
            mx = Si
        if i < top:
            stack.pop()
        else:
            break
    stack.push(i)
print(mx)
