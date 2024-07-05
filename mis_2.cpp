#include<iostream>

int main(int argc, char **argv)
{
    std::cout << "Received " << argc << " arguments...\n";
    for(int i = argc - 1; i > 0; --i)
    {
        std::cout << argv[i] << std::endl;
    }
    return 0;
}