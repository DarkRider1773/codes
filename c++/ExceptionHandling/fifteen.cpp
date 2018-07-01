//uncaught_exception
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;
struct Foo {
    bool count;
    Foo(){ count = std::uncaught_exception();}
    ~Foo() {
        std::cout << (count == uncaught_exception()
            ? "~Foo() called normally\n"
            : "~Foo() called during stack unwinding\n");
    }
};
int main()
{
    Foo a;
    try {
        Foo b;
        cout << "Exception thrown\n";
        throw runtime_error("test exception");
    } catch (const std::exception& e) {
        cout << "Exception caught: " << e.what() << '\n';
    }
}
