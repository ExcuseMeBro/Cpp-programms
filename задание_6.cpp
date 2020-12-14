#include <bits/stdc++.h>
#include <fstream>
#include <vector>

using namespace std;

int product(int Ax, int Ay, int Bx, int By)
{
    return Ax * By - Ay * Bx;
}

double square(int a, int b, int c)
{
    double p = 0;
    p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int angle(int x1, int y1, int x2, int y2, int d1, int d2)
{
    return (x1 * x2 + y1 * y2) / (d1 * d2);
}
int main()
{
    int A[8];
    int k = 0;
    ifstream f("cdtes.txt");
    if (f.is_open())
    {
        while (!f.eof() && k < 8)
        {
            f >> A[k++];
        }
        f.close();
        int DB1 = A[0] - A[4];
        int DB2 = A[1] - A[5];
        int BC1 = A[2] - A[0];
        int BC2 = A[3] - A[1];
        int CD1 = A[4] - A[2];
        int CD2 = A[5] - A[3];
        int DA1 = A[6] - A[4];
        int DA2 = A[7] - A[5];
        int BA1 = A[6] - A[0];
        int BA2 = A[7] - A[1];
        int CA1 = A[6] - A[2];
        int CA2 = A[7] - A[3];
        int DBxDA = product(DB1, DB2, DA1, DA2);
        int BCxBA = product(BC1, BC2, BA1, BA2);
        int CDxCA = product(CD1, CD2, CA1, CA2);
        if (((DBxDA > 0) && (BCxBA > 0) && (CDxCA > 0)) || ((DBxDA < 0) && (BCxBA < 0) && (CDxCA < 0)))
        {
            cout << "Point A lies inside triangle BCD" << endl;
        }
        else
        {
            if ((DBxDA > 0) || (BCxBA > 0) || (CDxCA > 0))
            {
                cout << "Point A lies outside triangle BCD" << endl;
            }
            else
            {
                if ((DBxDA == 0) || (BCxBA == 0) || (CDxCA == 0))
                {
                    cout << "Point A lies on the side of triangle BCD" << endl;
                }
                else
                {
                    if (((DBxDA == 0) && (BCxBA == 0)) || ((BCxBA == 0) && (CDxCA == 0)) || ((CDxCA == 0) && (DBxDA == 0)))
                    {
                        cout << "Point A coincides with the apex of triangle BCD" << endl;
                    }
                }
            }
        }
        int dDB = sqrt(DB1 * DB1 + DB2 * DB2);
        int dBC = sqrt(BC1 * BC1 + BC2 * BC2);
        int dCD = sqrt(CD1 * CD1 + CD2 * CD2);
        int dDA = sqrt(DA1 * DA1 + DA2 * DA2);
        int dBA = sqrt(BA1 * BA1 + BA2 * BA2);
        int dCA = sqrt(CA1 * CA1 + CA2 * CA2);
        double SDAB = square(dDA, dDB, dBA);
        double SBAC = square(dBC, dCA, dBA);
        double SCAD = square(dDA, dCD, dCA);
        cout << "Area of a triangle SDAB=" << SDAB << endl;
        cout << "Area of a triangle SBAC=" << SBAC << endl;
        cout << "Area of a triangle SCAD=" << SCAD << endl;
        double maxS = max(SDAB, max(SBAC, SCAD));
        int x1 = 0;
        int y1 = 0;
        int xx1 = 0;
        int yy1 = 0;
        int xxx1 = 0;
        int yyy1 = 0;
        int d1 = 0;
        int d2 = 0;
        int d3 = 0;
        int a1 = 0;
        int b1 = 0;
        int a2 = 0;
        int b2 = 0;

        cout << "The area of the largest triangle ";
        if (maxS == SDAB)
        {
            cout << "DAB= " << maxS << endl;
            x1 = DB1;
            y1 = DB2;
            xx1 = BA1;
            yy1 = BA2;
            xxx1 = DA1;
            yyy1 = DA2;
            d1 = dDB;
            d2 = dBA;
            d3 = dDA;
            a1 = A[0];
            b1 = A[1];
            a2 = A[2];
            b2 = A[3];
        }
        else if (maxS == SBAC)
        {
            cout << "BAC= " << maxS << endl;
            x1 = BC1;
            y1 = BC2;
            xx1 = CA1;
            yy1 = CA2;
            xxx1 = BA1;
            yyy1 = BA2;
            d1 = dBC;
            d2 = dCA;
            d3 = dBA;
            a1 = A[2];
            b1 = A[3];
            a2 = A[4];
            b2 = A[5];
        }
        else
        {
            cout << "CAD= " << maxS << endl;
            x1 = CD1;
            y1 = CD2;
            xx1 = DA1;
            yy1 = DA2;
            xxx1 = CA1;
            yyy1 = CA2;
            d1 = dCD;
            d2 = dDA;
            d3 = dCA;
            a1 = A[4];
            b1 = A[5];
            a2 = A[0];
            b2 = A[1];
        }
        double COS1 = angle(x1, y1, xx1, yy1, d1, d2);
        double COS2 = angle(xx1, yy1, xxx1, yyy1, d1, d2);
        double COS3 = angle(xxx1, yyy1, x1, y1, d1, d2);
        if ((COS1 > 0) && (COS2 > 0) && (COS3 > 0))
        {
            cout << "The triangle with the largest area is acute-angled" << endl;
        }
        else if ((COS1 == 0) || (COS2 == 0) || (COS3 == 0))
        {
            cout << "The triangle with the largest area is rectangular" << endl;
        }
        else
        {
            cout << "The triangle with the largest area is obtuse" << endl;
        }
        int xh = (a1 + a2) / 2;
        int yh = (b1 + b2) / 2;
        int h = sqrt(pow(xh - A[6], 2) + pow(yh - A[7], 2));
        cout << "Height of the largest triangle =  " << h << endl;
        cout << "Height base coordinates = [" << xh << ";" << yh << "]\n";
    }
    else
    {
        cout << "File not found!" << endl;
    }
    return 0;
}
