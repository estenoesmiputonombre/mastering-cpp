#include <iostream>
#include <string>

int main() {
    std::string str;
    int a, b;

    // The process of input and output can be a bottleneck, so with this two lines, it will be faster.
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    // It will read the input separated with a space or a new line.
    // 10 20 string
    // 10
    // 20
    // string
    std::cin >> a >> b >> str;

    // We are using the command std::endl, but in competitive programming is better to use the character new line.
    // The reason is that std::endl always causes a flush operation.
    std::cout << "This is the value of the variable a: " << a << std::endl;
    std::cout << "This is the value of the variable b: " << b << std::endl;
    std::cout << "This is the value of the variable str: " << str << std::endl;

    // With this two functions in C, we can get input or show output a bit faster.
    int c, d;
    scanf("%d %d", &c, &d);

    printf("%d %d\n", c, d);

    std::string s;
    // If we want to read the whole line from input, we can use the method getline.
    getline(std::cin, s);

    // If the amount of input is unknown, then we should use a while loop.
    // while (std::cin >> x) {
    // // here the code
    // }

    // At the beginning of the program, we can use both lines to write to file and read from file.
    // freopen("file.extension", "r", stdin);
    // freopen("file.extension", "w", stdout);

    return 0;
}