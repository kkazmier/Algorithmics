guest_qty = input()
visited = list()
visited.append(True)
neighbor = list()
neighbor.append(0)
cycles = list()
result = 0

for i in range(1, guest_qty + 1):
    n = input()
    visited.append(False)
    neighbor.append(n)
    print(i)

visited[1] = True
c = set(1)
cycles.add(c)

for n in neighbor:
    
print(result)
