#include <iostream>

void hanoy(int n, char a, char b, char c) {
    if (n == 1) {
        std::cout << "Move disk 1 from " << a << " to " << b << '\n';
        return;
    }

    hanoy(n - 1, a, c, b);
    
    std::cout << "Move dick " << n << " from " << a << " to " << b << '\n';

    hanoy(n - 1, c, b, a);
}



int main()
{
    int n;

    std::cout << "Enter number of dicks: ";
    std::cin >> n;

    hanoy(n, 'T', 'S', 'D');
}

