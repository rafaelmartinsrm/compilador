int teste(int b)
{
    int a;
    a = b;
    return a;
}

int main()
{
    int a;
    a = 6*6;
    writeln(a);
    if(a < 6)
    {
        a = 100;
    }
    else if(a < 35)
    {
        a = 11;
    }
    else if(a < 37)
    {
        a = 12;
        if(a > 2)
            a = 1;
    }
    else if(a > 2)
    {
        a = 120;
    }
    else
    {
        a = 0;
    }
    teste(2);
    writeln(a);
    teste(a);
}
