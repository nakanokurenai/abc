def main():
    N = int(input())
    E = {}
    A = input()
    for _, a in enumerate(map(lambda i: int(i)-1, A.split(' '))):
        E[a] = E.get(a, 0) + 1

    for i in range(N):
        print(E.get(i, 0))

main()
