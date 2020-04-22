def main():
    N = int(input())
    print("NO" if len(set(map(lambda x: int(x), input().split(" ")))) != N else "YES")

main()
