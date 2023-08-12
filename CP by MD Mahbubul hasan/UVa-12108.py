def statistic_stu(vvi):
    k = sum(1 for c in vvi if c[2] <= c[0])
    return k

def next_minute(vvic, a, n):
    cs = True if n - a > a else False
    
    for i in range(n):
        if vvic[i][2] == vvic[i][0]:
            if cs:
                vvic[i][2] += 1
            else:
                vvic[i][2] = 1
        else:
            if vvic[i][2] == vvic[i][1] + vvic[i][0]:
                vvic[i][2] = 1
            else:
                vvic[i][2] += 1

def main():
    kcase = 0

    while True:
        n = int(input())
        if n == 0:
            break

        kcase += 1
        print(f"Case {kcase}: ", end='')

        vvi = []
        vvic = []

        for _ in range(n):
            vvi.append(list(map(int, input().split())))

        k = 0
        a = 0
        vvic = [row[:] for row in vvi]  # Copy the list of lists

        while True:
            k += 1
            a = statistic_stu(vvic)

            if a == n:
                print(k)
                break
            else:
                next_minute(vvic, a, n)

            if vvic == vvi:
                print("-1")
                break

if __name__ == "__main__":
    main()
