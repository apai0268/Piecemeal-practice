//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct complex {
//    int real;
//    int imag;
//};
//
//struct complex multiply(struct complex x, struct complex y);
//
//int main()
//{
//    struct complex product, x, y;
//
//    scanf("%d %d %d %d", &x.real, &x.imag, &y.real, &y.imag);
//    product = multiply(x, y);//product的值为调用函数后return的值
//    printf("(%d+%di) * (%d+%di) = %d + %di\n",
//        x.real, x.imag, y.real, y.imag, product.real, product.imag);
//
//    return 0;
//}
//struct complex multiply(struct complex x, struct complex y)
//{
//   //x.real,x.img;y.real.y.img;
//    struct complex product1;
//    product1.real = x.real * y.real - x.imag * y.imag;
//    product1.imag = x.imag * y.real + y.imag * x.real;
//    return product1;
//}
