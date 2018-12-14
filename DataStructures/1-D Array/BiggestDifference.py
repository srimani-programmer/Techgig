def main():
    size = int(input().strip())
    a = [int(x) for x in input().split()]
    a = list(a)
    a.sort()
    print(a[size-1] - a[0])

main()