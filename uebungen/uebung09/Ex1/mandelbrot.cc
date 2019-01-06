#include "point.hh"
#include "canvas.hh"
#include <string>
#include <cmath>

class IterationResult
{
  // member variables are private
private:

    Point _lastcalc;
    int _numiter;

  // Constructor and method definitions
public:

    IterationResult(Point lastcalc, int numiter)
        : _lastcalc(lastcalc)
        , _numiter(numiter)
    {}

    // Accesors for member variables

    Point lastcalc() const
    {
        return _lastcalc;
    }

    int numiter() const
    {
        return _numiter;
    }
};

IterationResult iterate (Point z, Point c, double threshold, int maxIt)
{
    int numiter;
    for(int i = 0; i < maxIt; i++)
    {
        if (z.x() > threshold) break;
        if (z.y() > threshold) break;

        z.set_x(z.x() * z.x() - z.y() * z.y() + c.x());
        z.set_y(2 * z.x() * z.y() + c.y());

        numiter = i;
    }
    return IterationResult(z, numiter);
}

void mandelbrot (Canvas& canvas, double threshold, int maxIt,
                 std::string filename)
{
    Point origin(0,0);
    for(int i = 0; i < canvas.horPixels(); i++)
    {
        for(int j = 0; j < canvas.vertPixels(); j++)
        {
            IterationResult value = iterate(origin, canvas.coord(i,j), threshold, maxIt);
            if (value.numiter() == maxIt)
            {
                canvas(i,j) = 0;
            }
            else
            {
                canvas(i,j) = std::log(value.numiter()) * 100;
            }
        }
    }
    canvas.write(filename);
}

int main()
{
    Point center(-1, 0);
    Canvas canvas(center, 1000, 1000, 100, 100);
    mandelbrot(canvas, 1000, 500, "test01");

}
