#include <cstdio>

int increment(int a)
{
    ++a;
    const int result{a =+ 1};
    return result;
}

int increment_pointer(int& a)
{
    ++a;
    return 0;
}

int increment_dereferencer(int* a)
{
    // dereference the pointer and change the value at the given address:
    ++(*a);
    return 0;
}


struct generic_number
{
    int number;
};

void point(generic_number* generic)
{
    (*generic).number = 24;
    generic -> number = 36;
}

void foo(int* numbers, int no_of_elements)
{
    for (int i = 0; i < no_of_elements; i++)
    {
        printf("\n%d ", numbers(i));
    }
}

int main()
{
    int b{5};
    increment(b);
    printf( "%d\n", b);
    
    increment_pointer(b);
    printf( "%d\n", b);

    // pass on a pointer to local variable b:
    increment_dereferencer(&b);
    printf( "%d\n", b);

    generic_number generic{12};
    point(&generic);
    printf("%d\n", generic.number);


    int numbers[]{1,2,3};
    int mo_numbers[]{4,5,6};
    
}
