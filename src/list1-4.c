#include <stdio.h>
#include <stdlib.h>
// space でもいいの！？
#define SIZE 3 // SIZE は 3 と定義

int main(int argc, char** argv){
    double d[3] = { 0.2 , 0.4 , 0.6 }; // 小数の中でも 64bit で 3つ入る配列を定義
    double *p1 = NULL,*p2 = NULL; // *をつけることでメモリの番地(address)を付与できる
    int i; // 符号付き整数 i を定義
    // p1,p2 の空だったアドレスに d のものを代入
    p1 = d;
    p2 = d;
    // i = 3 のとき core dumped error
    // 2 についても同様 3に戻す
    // 真の原因: i=3 としていた
    for ( i = 0 ; i < 3 ; i++) // 0 から 3 未満まで 1 ずつ 繰り返す
    {
        // d+1 としてしまっていたが修正しても core dumped error
        printf("%f %f %f\n",*(d+i),p1[i],*p2); // 配列変数に配ったものを表示
        p2++; // p2 をひとつ進める
    }
    return 0;
}