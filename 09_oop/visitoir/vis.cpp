#include <iostream>
#include <vector>

using namespace std;

struct Rectangle;
struct Circle;

struct IVisitable
{
    virtual void accept(Rectangle& r) = 0;
    virtual void accept(Circle& c) = 0;
    
    virtual ~IVisitable() {}
};

struct IElenent
{
    virtual void visit(IVisitable& v) = 0;
    
    virtual ~IElenent() {}
};

struct Rectangle: IElenent
{
    void visit(IVisitable& v) final
    {
        v.accept(*this);
    }
};

struct Circle: IElenent
{
    void visit(IVisitable& v) final
    {
        v.accept(*this);
    }
};


struct Printer: IVisitable
{
    void accept(Rectangle& r) final
    {
        cout << "Rectangle" << endl;
    }   
    void accept(Circle& c) final
    {
        cout << "Circle" << endl;
    }
};


int main()
{
    std::vector<IElenent*> elements; 
    
    elements.push_back(new Circle);
    elements.push_back(new Rectangle);

    Printer p;
    for(auto& el: elements)
    {
        el->visit(p);
    }
}
