// Online C++ compiler to run C++ program online
#include <iostream>

int ma[3][5];
void init_ma()
{
     for (int i = 0; i!=3; i++)
          for (int j = 0; j!=5; j++)
                ma[i][j] = i+j;
}

void print_ma()
{
     for (int i = 0; i!=3; i++) {
          for (int j = 0; j!=5; j++)
                std::cout << ma[i][j] << '\t';
          std::cout << '\n';
    }
}

int main() {
    init_ma();
    print_ma();
    return 0;
}
