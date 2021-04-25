int chamada(int teste1, int teste2)
{

    teste2 = 1;
}

int main ()
{
    int a;
    a = 1;
    int b;
    b = 2;
    if(a > b)
    {
        a = 2;
        a = a + b;
        int c;
        c = 3;
    }
    else
    {
        a = 3;
        a = 3 + c;
        chamada(a, b);
    }
}
