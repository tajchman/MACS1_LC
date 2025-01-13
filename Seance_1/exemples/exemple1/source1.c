int F1(double y)
{
    return (int) y*1.5;
}

int F2(double x)
{
    double a = x*3.4;
    int b = F1(a) + F1(a*2.5);
    return b;
}

int main()
{
    double u = 2.4;
    int v = F2(u);
    return 0;
}