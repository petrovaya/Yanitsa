#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
    private:
        int wigth;
        int height;
    public:
        void set_values(int, int);
        int area(){
            return wigth*height;
    };
};

#endif // RECTANGLE_H
