n = int(input())
arr = list(map(int, input().split()))

freq = {}

for x in arr:
    freq[x] = freq.get(x, 0) + 1

found = False

for x in arr:
    if freq[x] > 1:
        print("First Repeating Element:", x)
        found = True
        break

if not found:
    print("No repeating element")
