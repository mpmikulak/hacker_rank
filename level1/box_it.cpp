#include<bits/stdc++.h>

using namespace std;

class Box {
    public:
        // Constructors
        Box() :l {0},b {0}, h {0} { };
        Box(int length, int breadth, int height) :l {length}, b {breadth}, h {height} { };
        Box(Box &boz) :l {boz.l},b {boz.b}, h {boz.h} { };

        // Public methods
        int getLength() { return l; }
        int getBreadth() { return b; }
        int getHeight() { return h; }
        long long CalculateVolume() {
            long long x, y, z;
            x = l;
            y = b;
            z = h;
            return x * y * z;
        }

        // Operator overloads
        bool operator<(const Box& f) {
            if (this->l < f.l) {
                return true;
            } else if (this->l == f.l) {
                if (this->b < f.b) {
                    return true;
                } else if (this->b == f.b) {
                    if (this->h < f.h) {
                        return true;
                    }
                }
            }
            return false;
        }

        friend ostream &operator<<( ostream &output, const Box &q ) {
            output << q.l << " " << q.b << " " << q.h;
            return output;
        }
    private:
        int l;
        int b;
        int h;

};



int main() {
    Box first(1039, 3749, 8473);
    Box second(5, 5, 7);

    if (first < second) {
        cout << "Yes\n";
    } else {
        cout << "No...\n";
    }

    cout << first.CalculateVolume() << endl;
    cout << second.CalculateVolume() << endl;
    return 0;
}
