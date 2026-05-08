#include <stdio.h>

void tower_of_hanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        printf("move disk 1 from %c to %c\n", source, destination);
        return;
    }

    tower_of_hanoi(n - 1, source, destination, auxiliary);

    printf("ove disk %d from %c to %c\n", n, source, destination);

    tower_of_hanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int n = 3;

    tower_of_hanoi(n, 'A', 'B', 'C');

    return 0;
}
