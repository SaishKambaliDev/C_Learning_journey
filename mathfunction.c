#include <stdio.h>
#include <math.h>

int main()
{
    /* sin(x), cos(x), tan(x) returns the sine, cos and tan of x for 
    x is in radians*/
    const double PI = 3.141592653589793;

    printf("sin(0): %f\n", sin(0) );
    printf("sin(90): %f\n", sin(PI/2));
    printf("cos(0): %f\n", cos(0));
    printf("tan(0): %f\n", tan(0));

    /*asin(x), acos(x), atan(x) are inverse trignometric function 
    they return angle(in radians) whose sine, cos, or tan value is x*/

    printf("sin-1(1):%f\n", asin(1));
    printf("cos-1(1):%f\n", acos(1));
    printf("tan-1(1):%f\n", atan(1));

    /*atan2(y,x) returns an angle theta in radians from the conversion of cartesian coordinates (x, y) to 
     polar coordinates (r, theta)*/

     printf("%f\n", atan2(1,1));

     /*sinh(), cosh(), tanh(), asinh(), acosh(), atanh()*/

     printf("%f\n", sinh(1));
     printf("%f\n", cosh(1));
     printf("%f\n", tanh(1));
     printf("%f\n", asinh(1));
     printf("%f\n", acosh(1));
     printf("%f\n", atanh(1));

     /*square root sqrt()*/
     printf("%f\n", sqrt(16));

     /*cube root cbrt()*/
     printf("%f\n", cbrt(27));

     /*pow(x,y) power x^y*/
     printf("%f\n", pow(2,3));

     /*exponential, e^x*/
     printf("%f\n", exp(1));

     /*exponential 2^x, exp2(x)*/
     printf("%f\n", exp2(3));

     /*e^x - 1, expm1(x)*/
     printf("%f\n", expm1(1));

     /*logarithmic */
     printf("natural log: %f\n", log(2.71828));  //natural log
     printf("log to base 10: %f\n", log10(100));    //log to base 10
     printf("log to base 8: %f\n", log2(8));       //log to base 8
     printf("%f\n", log1p(1));        //ln(1+x)

     /*rounding function*/
     printf("floor 2.9: %f\n", floor(2.9));   //rounds down
     printf("ceil 2.1: %f\n", ceil(2.1));    //rounds up
     printf("trunc 2.9: %f\n", trunc(2.9));    //cut decimal
     printf("round 2.5: %f\n", round(2.5));   //nearest integer

     /*lround(), llround(), lrint(), llrint() return nearest integer but 
     function with ll returns long long integer and with l prefix return long integer type
     lrint and llrint - uses the current CPU floating point rounding
     usually ties to even*/

     /*Absolute and min/max*/
     printf("absolute: %f\n", fabs(-5.5));
     printf("max of 3 and 7: %f\n", fmax(3,7));
     printf("min of 3 and 7: %f\n", fmin(3,7));

     /*The fmod() function return the floating point remainder of the divison
     dividend/divisor where the results of the divisions in truncated (the decimal part is removed)*/
    printf("fmod(11.00, 3.00): %f\n", fmod(11.00, 3.00));  //a - trunc(a/b) * b
    printf("remainder(11.00, 3.00): %f\n", remainder(11.00, 3.00));   // a - round(a/b) * b

    /*copysign(a, b) copies sign of b to a while keeping magnitude of a the same*/

    printf("copysign(5.0, -3.0): %f\n", copysign(5.0, -3.0));

    /*erf(x) return the values of the error function of x, it simple tells give me a number that tells how much of the bell
    shaped curved is covered upto x*/

    printf("erf(1): %f\n", erf(1));

    /*erfc(x) means complementary error funnction which tells how much area is left  
    after erf(x) has taken its part*/

    printf("erfc(1): %f\n", erfc(1));

    /*fdim(x, y) return the positive difference between x - y if x is bigger or return 0 if x is small*/

    printf("fdim(3,2): %f\n", fdim(3, 2));

    /*fma(x, y, z) calculates  x* y + z fro set of three numbers*/

    printf("fma(1,2,3): %f\n", fma(1,2,3));

    /*frexp(x, y) splits a floating number into two parts
    x = m * 2^n
    where, m = fraction (between 0.5 and 1.0)
    n = power of 2 
    retruns m*/

    int expo;
    printf("frexp(8, &expo): %f\n", frexp(8, &expo));

    /*hypot(x, y) return sqrt(x^2 + y^2) without intermediate overflow or underflow*/
    printf("hypot(5, 6): %f\n", hypot(5, 6));

    /*ilogb(x) returns the power of 2 needed to represent x
    x = m * 2^n
    ilogb(x) return n*/

    printf("ilogb(8.0): %d\n", ilogb(8.0));

    /*ldexp(x , y) multiplies x * 2^y
    and returns it*/

    printf("ldexp(x, y): %f\n", ldexp(1, 2));

    /*lgamma(x) it returns the logarithmic of the absolute value of the gamma function at x*/

    printf("lgamaa(x): %f\n,", lgamma(5));

    /*logb(x) returns the power of 2 used to scale x
    x = m * 2^n
    it return floating value*/

    printf("logb(8.0): %f\n", logb(8.0));

    /*modf(x, y) splits one floating point number into two parts
    return the fractional (decimal) part*/

    double intpart;

    printf("Decimal part of 3.14: %f\n", modf(3.14, &intpart));

    /*NaN creates and return a special floating point value called NaN*/

    printf("Nan: %f\n", nan(""));


    /*nearbyint(x) rounds x to the nearest integer value (but
    rteurn it as a floating number)*/

    printf("Nearby for 2: %f\n", nearbyint(2));

    /*nextafter(x, y) returns the very next representable floating poinnt number after x, 
    moving in the direction of y*/

    printf("Nextafter 1.0 to 2.0: %.20f\n", nextafter(1.0, 2.0));

    /*nexttoward(x, y)*/

    printf("Nexttoward 1.0 to 2.0: %.20f\n", nexttoward(1.0, 2.0));

    /*remquo(x, y, z) it divides x by y
    return the remainder and stores the quotient (rounded to nearest integer) in z*/

    int quo;
    printf("Remainder of 4/2: %f\n", remquo(4, 2, &quo));

    /*rint(x) rounds x to the nearest integer value but returns it as a double*/

    printf("rint of 2.3: %f\n", rint(2.3));

    /*scalbn(x, y) returns x * 2^y where y is int 
    scalbln(x, y) returns x*2^y where y is long int*/

    printf("Scalbn from 5 to 6: %f\n", scalbn(5, 6));

    /*tgamma() returnn the gamma function value at x*/

    printf("tgamma: %f\n", tgamma(5));  //4! = 24
}