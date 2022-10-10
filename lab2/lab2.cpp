#include <iostream>
using namespace std;
#include <cmath>

void findAverage(int twoD[][10], int rows, double oneD[]);

class Point{
    private:
        float x;
        float y;
    public:
        Point() {
            this->x = 0;
            this->y = 0;
        }

        Point(float newX, float newY){
                x = newX ;
                y = newY;

        }  

        friend float operator + (Point &obj, Point &obj2){
            float x1, y1, x2, y2;
            obj.x = x1;
            obj.y = y1;

            obj2.x = x2;
            obj2.y = y2;

            float dist;
           
            dist = sqrt(pow((x2 - x1),2) + pow((y2 - y1), 2));

            return dist;
        }

        float Point::setX(float xc){
            x = xc;
        }

        float Point::setY(float yc){
            y = yc;
        }

        float Point::getX()const{
            return x;
        }

        float Point::getY()const{
            return y;
        }
};

class Line{
    private:
        Point begin;
        Point end;
    public:
        Line();
        Line(Point b, Point e);
        void setBegin(Point b);
        void setEnd(Point e);
        double getLength() const;
        void showCoordinate() const;

        void setBegin(Point b){
            this -> begin = b;
        }

        void setEnd(Point e){
            this->end = e;
        }

        double getLength() const{
            return begin + end;
        }

        void showCoordinate() const{
            cout << begin.getX() << endl;
            cout << begin.getY() << endl;
            cout << end.getX() << endl;
            cout << end.getY() << endl;
        }
};

int main(){
    int twoD[3][10] = {{1,1,6,1,1,1,1,1,1,10},
                      {1,1,6,1,1,1,1,1,1,10},
                      {1,1,6,1,1,1,1,1,1,10}};

    double oneD[3];

    findAverage(twoD, 3, oneD);
    
    for (int i = 3 - 1; i >= 0; i--) 
        cout << oneD[i] << endl;

    return 0;
}

void findAverage(int twoD[][10], int rows, double oneD[]){

    int i;
    int count;
    double sum = 0;
    double mean = 0;
    int n = 0;
    for(i = 0; i < rows; i++){
        for(count = 0; count < 10; count++){
            sum = sum + twoD[i][count];
        }
        mean = double(sum)/10; //mean needs to reset to 0 for the next row.
        oneD[n] = mean;
        n++;
        cout << mean << endl;
        mean = 0;
        sum = 0;
    }

    Line * MakeLineArray(int size){
        {
        int i = 0;
        Line lineArray[size];
        while i < size{
            lineArray[i];
            i++;
        }
    }
    }

    

    Line Shortest (Line * ptr, int size){
        
    }
    Void sortLine (Line * ptr, int size){}

}
