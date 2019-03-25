# include <iostream>
using namespace std;
int main(){
	
	int a,b,c,d,e,f,g,h,x,y,z;
	for(e=1;e<3;e++)
	for(a=1;a<10;a++)
	for(b=0;b<10;b++)
	for(c=0;c<10;c++)
	for(d=0;d<10;d++)
	for(f=0;f<10;f++)
	for(g=0;g<10;g++)
	for(h=0;h<10;h++){
		x=a*1000+b*100+c*10+d;
		y=e*1000+f*100+g*10+b;
		z=e*10000+f*1000+c*100+b*10+h;
		if((z==x+y)&&(a!=e)&&(b!=f)&&(c!=g)&&(d!=b)&&(e!=f)&&(f!=g)&&(g!=h)&&(h!=a))
			{cout<<x<<"+"<<y<<"="<<z<<endl;}
	}
	return 0;
}
