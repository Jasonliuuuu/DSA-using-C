stack = []
stack.append(1)  # push
stack.append(2)  # push
print(stack.pop())  # Output: 2
print(stack[-1])  # peek (not a standard list method, but Python list indexing)
print(len(stack) == 0)  # isEmpty
