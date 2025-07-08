#include<unistd.h>
int main(){
	int a,b;
	char c;
	c = 42;
	a = 0;
	b =0;
	while(a <= 10){
		while(b <= 20){
			if(!(a==0 || a==1 || a==9 || a==10)){
				if((b ==0||b==1||b==19||b==20)){
					write(1, &c,1);
				 }else{
					write(1, " ",1);
				 }	
			}else{
				write(1, &c,1);
			}
			b++;
		}
		write(1, "\n",1);
		b=0;
		a++;
	}

}
