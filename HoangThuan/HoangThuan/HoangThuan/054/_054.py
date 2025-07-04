
def TongUocChan(nn):
    s = 0
    i = 2

    while i <= nn:
        if (nn % i == 0):
            s = s + i
        i = i + 2

    return s

def main():
    n = int(input("Nhap n: "))

    print("Tong uoc chan:", TongUocChan(n))

if __name__ == "__main__":
    main()
