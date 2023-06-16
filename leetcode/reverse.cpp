#include <stdio.h>
#include <math.h>
int reverse(int x) {
int reversed = 0;
int mode = 0;

if (x > INT_MAX || x < INT_MIN) {
	return 0;
}

while (x != 0) {
	mode = x % 10;
	if (reversed > (pow(2, 31) - 1) / 10 || reversed < -(pow(2, 31) / 10)) {
		return 0;
	}
	reversed = reversed * 10 + mode;
	x /= 10;
}

return reversed;
}

int main (){
    int x = -36461;
    printf ("%d",reverse(x));

}