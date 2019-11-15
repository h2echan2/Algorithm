class Stack:
    def __init__(self):
        self.array = []
        self.counter = 0

    def push(self, x):
        self.array.append(x)
        self.counter += 1

    def pop(self):
        if not self.array :
            return -1
        else:
            tmp = self.array[self.counter-1]
            del self.array[self.counter-1]
            self.counter -= 1
            return tmp

    def size(self):
        return len(self.array)

    def empty(self):
        if not self.array :
            return 1
        else:
            return 0

    def top(self):
        if not self.array :
            return -1
        else:
            return self.array[-1]


num = int(input())
stack = Stack()

while(num > 0):
    num -= 1
    input_split = input().split()

    op = input_split[0]
    if op == "push":
        stack.push(input_split[1])
    elif op == "pop":
        print(stack.pop())
    elif op == "size":
        print(stack.size())
    elif op == "empty":
        print(stack.empty())
    elif op == "top":
        print(stack.top())
    else:
        print("unacceptable op")

