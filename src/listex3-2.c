#include <stdio.h>
#include <stdlib.h>

#define SIZE	3
                                
int main(int argc,char** argv){
    double d[3] = { 0.2 , 0.4 , 0.6 };
    double *p1 = NULL,*p2 = NULL;
	int i;
	p1 = d;	//	p1にdのアドレスを代入
	p2 = d;	//	p2にdのアドレスを代入
	for( i = 0 ; i < 3; i++){
		printf("%f %f %f\n",*(d+i),p1[i],*p2);  // p1を配列のように扱う
		p2++;	//	p2のアドレスをインクリメント
	}
    return 0;
}