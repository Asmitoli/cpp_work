#include <iostream>
using namespace std;

class point
{
    private:
    int x,y;

    public:
        point (int x1,int y1)

        {
            x=x1;
            y=y1;
        }

        int getX()
        {
            return x;
        }

        int getY()
        {
            return y;
        }

};

int main()
{
    point p(10 , 15);
    cout<<"p.x = "<<p.getX()<<endl;
    cout<<"p.y = "<<p.getY()<<endl;
    return 0;

}