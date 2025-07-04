
def Nhap():
    xx = float(input("Nhap tung do: "))
    yy = float(input("Nhap hoanh do: "))

    return xx, yy

def TinhDienTich(xx1, yy1, xx2, yy2, xx3, yy3):
    s = abs(xx1*yy2 + xx2*yy3 + xx3*yy1 - xx2*yy1 - xx3*yy2 - xx1*yy3)
    return s

def KiemTraThuoc(xxA, yyA, xxB, yyB, xxC, yyC, xxM, yyM):
    SABC = TinhDienTich(xxA, yyA, xxB, yyB, xxC, yyC)
    SMAB = TinhDienTich(xxM, yyM, xxA, yyA, xxB, yyB)
    SMBC = TinhDienTich(xxM, yyM, xxB, yyB, xxC, yyC)
    SMCA = TinhDienTich(xxM, yyM, xxC, yyC, xxA, yyA)

    S = SMAB + SMBC + SMCA
    return S == SABC

def main():
    print("Nhap toa do diem A:")
    xA, yA = Nhap();
    print("Nhap toa do diem B:")
    xB, yB = Nhap();
    print("Nhap toa do diem C:")
    xC, yC = Nhap();
    print("Nhap toa do diem M:")
    xM, yM = Nhap();

    if KiemTraThuoc(xA, yA, xB, yB, xC, yC, xM, yM):
        print("M nam trong tam giac")
    else:
        print("M nam ngoai tam giac")

if __name__ == "__main__":
    main()
