#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<iomanip.h>

int i;
int j;
int k;
int h;
long double n;
long double r;
int z[40][40];
int x[40][40];
int y[40][40];
long double a=0;
long double b=0;
long double c=0;
long double d=0;
long double  num1=0;
long double  num2=0;
int modno1=0;
int modno2=0;
long double  sum=0;
long double  size=0;
long double  multsum=1;
long double multsum2=1;
long double multsum3=1;
long double  num=0;
char tag[50];
long double nums[50];

void main () {
	clrscr();
	cout<<endl;
	cout<<"------------------------SANTA CLARA------------------------"<<endl;
	cout<<endl;
	cout<<"Enter your command :  ";
	gets(tag);


	if (strcmpi(tag,"multiply")==0) {
	cout<<"Enter the number of terms to multiply"<<endl;
	   cin>>size;
	   cout<<"Enter the numbers"<<endl;
	   for (i=0; i<size; i++) {
	   cin>>nums[i];
	   }
	   for (i=0; i<size; i++) {
		multsum=multsum*nums[i];
		}
		cout<<"Answer : "<<multsum<<endl;
	   }
		if (strcmpi(tag,"add")==0) {
			cout<<"Enter the number of terms to add"<<endl;
			cin>>size;
			cout<<"Enter the numbers"<<endl;
			for (i=0; i<size; i++) {
			cin>>nums[i];
			}
			for (i=0; i<size; i++) {
			sum=sum+nums[i];
			}
			cout<<"Answer : "<<sum<<endl;
		}
	if (strcmpi(tag,"negadd")==0) {
			cout<<"Enter the number of terms to add"<<endl;
			cin>>size;
			cout<<"Enter the negative integers"<<endl;
			for (i=0; i<size; i++) {
			cin>>nums[i];
			}
			for (i=0; i<size; i++) {
			sum=sum-nums[i];
			}
			cout<<"Answer : "<<sum<<endl;
		}
				if (strcmpi(tag,"sum")==0) {
					cout<<"Enter the first no:"<<endl;
					cin>>num1;
					cout<<"Enter the second no:"<<endl;
					cin>>num2;
					sum=num1+num2;
					cout<<"Answer : "<<sum<<endl;
					}
				if (strcmpi(tag,"sub")==0) {
					cout<<"Enter the first no:"<<endl;					cout<<"Enter the first no:"<<endl;
					cin>>num1;
					cout<<"Enter the second no:"<<endl;
					cin>>num2;
					sum=num1-num2;
					cout<<"Answer : "<<sum<<endl;
					}

				if (strcmpi(tag,"product")==0) {
					cout<<"Enter the first no:"<<endl;
					cin>>num1;
					cout<<"Enter the second no:"<<endl;
					cin>>num2;
					sum=num1*num2;
					cout<<"Answer : "<<sum<<endl;
					}

				if (strcmpi(tag,"div")==0) {
					cout<<"Enter the first no:"<<endl;
					cin>>num1;
					cout<<"Enter the second no:"<<endl;
					cin>>num2;
					sum=num1/num2;
					cout<<"Answer : "<<sum<<endl;
					}

				if (strcmpi(tag,"mod")==0) {
					cout<<"Enter the first no:"<<endl;
					cin>>modno1;
					cout<<"Enter the second no:"<<endl;
					cin>>modno2;
					sum=modno1%modno2;
					cout<<"Answer : "<<sum<<endl;
					}

				if (strcmpi(tag,"square.num")==0) {
					cout<<"Enter the numer to be squared"<<endl;
					cin>>num1;
					sum=num1*num1;
					cout<<"Answer : "<<sum<<endl;
					}

				if (strcmpi(tag,"cube.num")==0) {
					cout<<"Enter the number"<<endl;
					cin>>num1;
					sum=num1*num1*num1;
					cout<<"Answer : "<<sum<<endl;
					}
				if (strcmpi(tag,"power")==0) {
					cout<<"Enter the power"<<endl;
					cin>>size;
					cout<<"Enter the number"<<endl;
					cin>>num;
					for (i=0; i<size; i++) {
					multsum=multsum*num;
					}
					cout<<"Answer : "<<multsum<<endl;
					}
				if (strcmpi(tag,"square.area")==0) {
					cout<<"Enter the length of thr side"<<endl;
					cin>>num;
					multsum=num*num;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"rectangle.perimeter")==0) {
					cout<<"Enter the length"<<endl;
					cin>>size;
					cout<<"Enter the breadth"<<endl;
					cin>>num;
					multsum=2*(size+num);
					cout<<"Answer : "<<multsum<<endl;
					}
				if (strcmpi(tag,"triangle.area")==0) {
					cout<<"Enter the height"<<endl;
					cin>>size;
					cout<<"Enter the base"<<endl;
					cin>>num;
					multsum=0.5*num*size;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"triangle.perimeter")==0) {
					cout<<"Enter the length of side 1"<<endl;
					cin>>size;
					cout<<"Enter the lrngth of side 2"<<endl;
					cin>>num;
					cout<<"Enter the length of side 3"<<endl;
					cin>>num1;
					multsum=num1+num+size;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"square.diagonal")==0) {
					cout<<"Enter the length of side"<<endl;
					cin>>size;
					multsum=1.4142*size;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"rectangle.diagonal")==0) {
					cout<<"Enter the length"<<endl;
					cin>>size;
					cout<<"Enter the breadth"<<endl;
					cin>>num;
					multsum=sqrt(size+num);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"root")==0) {
					cout<<"Enter the number to find square root"<<endl;
					cin>>size;
					multsum=sqrt(size);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"square.perimeter")==0) {
					cout<<"Enter the length"<<endl;
					cin>>size;
					multsum=4*size;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"trapezium.area")==0) {
					cout<<"Enter the length of base 1"<<endl;
					cin>>size;
					cout<<"Enter the length of base 2"<<endl;
					cin>>num;
					cout<<"Enter the height"<<endl;
					cin>>num1;
					multsum=((size+num)*0.5)*num1;
					cout<<"Answer : "<<multsum<<endl;
					}
				if (strcmpi(tag,"polygon.area")==0) {
					cout<<"Enter the number of sides"<<endl;
					cin>>num1;
					cout<<"Enter the length of a side"<<endl;
					cin>>size;
					cout<<"Enter the length of apothem"<<endl;
					cin>>num;
					multsum=(num*size*num)/2;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"rectangle.area")==0) {
					cout<<"Enter the length"<<endl;
					cin>>num1;
					cout<<"Enter the breadth"<<endl;
					cin>>size;
					multsum=num1*size;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"pentagon.area")==0) {
					cout<<"Enter the length of a side"<<endl;
					cin>>num1;
					multsum=0.25*sqrt(5*(5+(2*sqrt(5))))*num1*num1;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"hexagon.area")==0) {
					cout<<"Enter the length of a side"<<endl;
					cin>>size;
					multsum=1.5*sqrt(3)*size*size;
					cout<<"Answer : "<<multsum<<endl;
					}
				if (strcmpi(tag,"cube.root")==0){
					cout<<"Enter the length of a side"<<endl;
					cin>>size;
					multsum=pow(size,0.33);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"cos")==0){
					cout<<"Enter the angle (radians)"<<endl;
					cin>>size;
					multsum=cos(size);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"sin")==0){
					cout<<"Enter the angle (radians)"<<endl;
					cin>>size;
					multsum=sin(size);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"deg2rad")==0){
					cout<<"Enter the angle in degree"<<endl;
					cin>>size;
					multsum=size*22/(180*7);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"rad2deg")==0){
					cout<<"Enter the angle in radians"<<endl;
					cin>>size;
					multsum=size*(180/3.14);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"tan")==0){
					cout<<"Enter the angle (radians)"<<endl;
					cin>>size;
					multsum=tan(size);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"cos.inverse")==0){
					cout<<"Enter the angle (radians)"<<endl;
					cin>>size;
					multsum=acos(size);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"sin.inverse")==0){
					cout<<"Enter the angle (radians)"<<endl;
					cin>>size;
					multsum=asin(size);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"tan.inverse")==0){
					cout<<"Enter the angle (radians)"<<endl;
					cin>>size;
					multsum=atan(size);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"hyperbolic.tan")==0){
					cout<<"Enter the angle (radians)"<<endl;
					cin>>size;
					multsum=tanh(size);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"hyperbolic.sin")==0){
					cout<<"Enter the angle (radians)"<<endl;
					cin>>size;
					multsum=sinh(size);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"hyperbolic.cos")==0){
					cout<<"Enter the angle (radians)"<<endl;
					cin>>size;
					multsum=cosh(size);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"log")==0){
					cout<<"Enter the angle"<<endl;
					cin>>size;
					multsum=log(size);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"log10")==0){
					cout<<"Enter the angle"<<endl;
					cin>>size;
					multsum=log10(size);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"(a+b)2")==0){
					cout<<"Enter the first number"<<endl;
					cin>>size;
					cout<<"Enter the second number"<<endl;
					cin>>num;
					a=pow(size,2);
					b=pow(num,2);
					c=2*size*num;
					multsum=a+b+c;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"(a-b)2")==0){
					cout<<"Enter the first number"<<endl;
					cin>>size;
					cout<<"Enter the second number"<<endl;
					cin>>num;
					a=pow(size,2);
					b=pow(num,2);
					c=2*size*num;
					multsum=a+b-c;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"a2-b2")==0){
					cout<<"Enter the first number"<<endl;
					cin>>size;
					cout<<"Enter the second number"<<endl;
					cin>>num;
					multsum=(size+num)*(size-num);
					cout<<"Answer : "<<multsum<<endl;
					}
				if (strcmpi(tag,"(x+a)(x+b)")==0){
					cout<<"Enter the first number"<<endl;
					cin>>size;
					cout<<"Enter the second number"<<endl;
					cin>>num;
					cout<<"Enter the third number"<<endl;
					cin>>num1;
					a=pow(size,2);
					multsum=a+((num+num1)*size)+(num*num1);
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"(a+b+c)2")==0){
					cout<<"Enter the first number"<<endl;
					cin>>size;
					cout<<"Enter the second number"<<endl;
					cin>>num;
					cout<<"Enter the third number"<<endl;
					cin>>num1;
					a=pow(size,2);
					b=pow(num,2);
					c=pow(num1,2);
					multsum=a+b+c+2*size*num+2*num*num1+2*size*num1;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"(a+b)3")==0){
					cout<<"Enter the first number"<<endl;
					cin>>size;
					cout<<"Enter the second number"<<endl;
					cin>>num;
					a=pow(size,3);
					b=pow(num,3);
					c=3*num*size*(num+size);
					multsum=a+b+c;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"(a-b)3")==0){
					cout<<"Enter the first number"<<endl;
					cin>>size;
					cout<<"Enter the second number"<<endl;
					cin>>num;
					a=pow(size,3);
					b=pow(num,3);
					c=3*size*num*(size-num);
					multsum=a-b-c;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"circle.area")==0){
					cout<<"Enter the radius"<<endl;
					cin>>size;
					multsum=3.14*size*size;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"circle.circumference")==0){
					cout<<"Enter the radius"<<endl;
					cin>>size;
					multsum=2*3.14*size;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"circle.diameter")==0){
					cout<<"Enter the radius"<<endl;
					cin>>size;
					multsum=2*size;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"sphere.area")==0){
					cout<<"Enter the radius"<<endl;
					cin>>size;
					multsum=4*3.14*size*size;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"hemisphere.csa")==0){
					cout<<"Enter the radius"<<endl;
					cin>>size;
					multsum=2*3.14*size*size;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"hemisphere.tsa")==0){
					cout<<"Enter the radius"<<endl;
					cin>>size;
					a=2*3.14*size*size;
					b=3.14*size*size;
					multsum=a+b;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"sphere.volume")==0){
					cout<<"Enter the radius"<<endl;
					cin>>size;
					multsum=1.34*3.14*size*size*size;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"hemisphere.volume")==0){
					cout<<"Enter the radius"<<endl;
					cin>>size;
					multsum=0.67*3.14*size*size*size;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"semicircle.diameter")==0){
					cout<<"Enter the radius"<<endl;
					cin>>size;
					multsum=2*size;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"cone.volume")==0){
					cout<<"Enter the radius"<<endl;
					cin>>size;
					cout<<"Enter the height"<<endl;
					cin>>num;
					multsum=3.14*size*size*(num/3);
					cout<<"Answer : "<<multsum<<endl;
					}
				if (strcmpi(tag,"cone.tsa")==0){
					cout<<"Enter the radius"<<endl;
					cin>>size;
					cout<<"Enter the height"<<endl;
					cin>>num;
					a=sqrt(size*size+num*num);
					multsum=3.14*size*(a+size);
					cout<<"Answer : "<<multsum<<endl;

					}

				if (strcmpi(tag,"cone.csa")==0){
					cout<<"Enter the radius"<<endl;
					cin>>size;
					cout<<"Enter the height"<<endl;
					cin>>num;
					a=sqrt(size*size+num*num);
					multsum=3.14*size*a;
					cout<<"Answer : "<<multsum<<endl;
					}
				if (strcmpi(tag,"cylinder.tsa")==0){
					cout<<"Enter the radius"<<endl;
					cin>>size;
					cout<<"Enter the height"<<endl;
					cin>>num;
					multsum=2*3.14*size*(num+size);
					cout<<"Answer : "<<multsum<<endl;
					}
				if (strcmpi(tag,"cylinder.csa")==0){
					cout<<"Enter the radius"<<endl;
					cin>>size;
					cout<<"Enter the height"<<endl;
					cin>>num;
					multsum=2*3.14*size*num;
					cout<<"Answer : "<<multsum<<endl;
					}

				if (strcmpi(tag,"cylinder.volume")==0){
					cout<<"Enter the radius"<<endl;
					cin>>size;
					cout<<"Enter the height"<<endl;
					cin>>num;
					multsum=size*3.14*size*num;
					cout<<"Answer : "<<multsum<<endl;
					}
				if (strcmpi(tag,"rhombus.area")==0){
					cout<<"Enter the length of diagonal 1"<<endl;
					cin>>size;
					cout<<"Enter the length of diagonal 2"<<endl;
					cin>>num;
					multsum=(size*num)/2;
					cout<<"Answer : "<<multsum<<endl;
					}
				if (strcmpi(tag,"kite.area")==0){
					cout<<"Enter the length of diagonal 1"<<endl;
					cin>>size;
					cout<<"Enter the length of diagonal 2"<<endl;
					cin>>num;
					multsum=(size*num)/2;
					cout<<"Answer : "<<multsum<<endl;
					}
				if (strcmpi(tag,"matrix.sub")==0){
					cout<<"Enter the number ofrows"<<endl;
					cin>>size;
					cout<<"Enter the number of columns"<<endl;
					cin>>num;
					cout<<"Enter the numbers in the first matrix"<<endl;
					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						cin>>z[i][j];
					cout<<"The entered matrix"<<endl;
					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						cout<<z[i][j]<<endl;
					cout<<"Enter the numbers in the second matrix"<<endl;
					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						cin>>x[i][j];
					cout<<"The entered matrix"<<endl;
					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						cout<<x[i][j]<<endl;
					cout<<"Subtracting....."<<endl;
					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						y[i][j]=x[i][j]-z[i][j];

					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						 cout<<"Answer : "<<y[i][j]<<endl;


					}
				if (strcmpi(tag,"matrix.add")==0){
					cout<<"Enter the number ofrows"<<endl;
					cin>>size;
					cout<<"Enter the number of columns"<<endl;
					cin>>num;
					cout<<"Enter the numbers in the first matrix"<<endl;
					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						cin>>z[i][j];
					cout<<"The entered matrix"<<endl;
					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						cout<<z[i][j]<<endl;
					cout<<"Enter the numbers in the second matrix"<<endl;
					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						cin>>x[i][j];
					cout<<"The entered matrix"<<endl;
					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						cout<<x[i][j]<<endl;
					cout<<"Adding....."<<endl;
					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						y[i][j]=x[i][j]+z[i][j];

					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						 cout<<"Answer : "<<y[i][j]<<endl;
						}
				if (strcmpi(tag,"matrix.product")==0){
					cout<<"Enter the number ofrows"<<endl;
					cin>>size;
					cout<<"Enter the number of columns"<<endl;
					cin>>num;
					cout<<"Enter the numbers in the first matrix"<<endl;
					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						cin>>z[i][j];
					cout<<"The entered matrix"<<endl;
					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						cout<<z[i][j]<<endl;
					cout<<"Enter the numbers in the second matrix"<<endl;
					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						cin>>x[i][j];
					cout<<"The entered matrix"<<endl;
					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						cout<<x[i][j]<<endl;
					cout<<"Multiplying...."<<endl;
					for(i=0;i<size;i++)  {
						for(j=0;j<num;j++) {
						y[i][j]=0;
					for(k=0;k<num;k++) {
						y[i][j]+=z[i][k]*x[k][j];
						}
						}
						}
					for(i=0;i<size;i++)
						for(j=0;j<num;j++)
						 cout<<"Answer : "<<y[i][j]<<endl;
						}

				if (strcmpi(tag,"parabola.xaxis")==0){
					cout<<"X-axis parabola's equation (y-k)^2=4a(x-h)"<<endl;
					cout<<"Enter the following"<<endl;
					cout<<"h = ";
					cin>>size;
					cout<<"k = ";
					cin>>num;
					cout<<"a = ";
					cin>>num1;
					cout<<"Focus : "<<"( "<<size+num1<<", "<<num<<")"<<endl;
					cout<<"Vertex : ( "<<size<<", "<<num<<")"<<endl;
					cout<<"Directrix x = "<<-num1+size<<endl;
					cout<<"Axis y = "<<num<<endl;
					cout<<"Tangent at the vertex x = "<<size<<endl;
					cout<<"Lactus rectum x = "<<num1+size<<endl;
					if (num1<=0) {
						cout<<" Length of latus rectum = "<<-4*num1<<endl;
						}
					 else {
					cout<<" Length of latus rectum = "<<4*num1<<endl;
					}
					cout<<"Enp points of latus rectum "<<"( "<<num1+size<<", "<<2*num1+num<<" )"<<" &"<<"( "<<num1+size<<", "<<-2*num1+num<<" )"<<endl;
					}
				if (strcmpi(tag,"parabola.yaxis")==0){
					cout<<"X-axis parabola's equation (x-h)^2=4b(y-k)"<<endl;
					cout<<"Enter the following"<<endl;
					cout<<"h = ";
					cin>>size;
					cout<<"k = ";
					cin>>num;
					cout<<"b = ";
					cin>>num1;
					cout<<"Focus : "<<"( "<<size<<", "<<num+num1<<")"<<endl;
					cout<<"Vertex : ( "<<size<<", "<<num<<")"<<endl;
					cout<<"Directrix x = "<<-num1+size<<endl;
					cout<<"Axis x = "<<size<<endl;
					cout<<"Tangent at the vertex y = "<<num<<endl;
					cout<<"Lactus rectum y = "<<num1+num<<endl;
					if (num1<=0) {
						cout<<" Length of latus rectum = "<<-4*num1<<endl;
						}
					 else {
					cout<<" Length of latus rectum = "<<4*num1<<endl;
					}
					cout<<"Enp points of latus rectum "<<"( "<<2*num1+size<<", "<<num1+num<<" )"<<" &"<<"( "<<-2*num1+size<<", "<<num1+num<<" )"<<endl;
					}
				if (strcmpi(tag,"hyperbola")==0){
					cout<<"Hyperbola's equation (x^2/a^2) - (y^2/b^2) = 1"<<endl;
					cout<<"Enter the following"<<endl;
					cout<<"a = ";
					cin>>a;
					cout<<"b = ";
					cin>>b;
					c = sqrt((1+(b*b/a*a)));
					cout<<"Eccentricty = "<<c<<endl;
					cout<<"Focus : "<<"( "<<-a*c<<", "<<d<<")"<<" &"<<"("<<a*c<<", "<<d<<endl;
					cout<<"Vertices : "<<"( "<<-a<<", "<<d<<")"<<"&"<<" ("<<a<<", "<<d<<")";
					cout<<"Directrix x = "<<-a/c<<"& "<<a/c<<endl;
					cout<<"Length of transverse axis = "<<2*a<<endl;
					cout<<"Length of conjugate axis ="<<2*b<<endl;
					cout<<"Lactus rectum x = "<<a*c<<" &"<<" x = "<<a*c<<endl;
					cout<<" Distance between 2 directrices = "<<2*(a/c)<<endl;
					cout<<"Enp points of latus rectum "<<"( "<<a*c<<", "<<(b*b/a)<<")"<<", ( "<<a*c<<", "<<-(b*b/a)<<" )"<<", ( "<<-a*c<<", "<<(b*b/a)<<" )"<<", ( "<<-a*c<<", "<<-(b*b/a)<<" )"<<endl;
					}
				if (strcmpi(tag,"ellipse")==0){
					cout<<"Ellipse's equation (x^2/a^2) + (y^2/b^2) = 1"<<endl;
					cout<<"Enter the following"<<endl;
					cout<<"a = ";
					cin>>a;
					cout<<"b = ";
					cin>>b;
					cout<<"Enter eccentrity :"<<endl;
					cin>>c;
					if (a>b) {
					cout<<"Eccentricty = "<<c<<endl;
					cout<<"Focus : "<<"( "<<-a*c<<", "<<d<<")"<<" &"<<"("<<a*c<<", "<<d<<endl;
					cout<<"Vertices : "<<"( "<<-a<<", "<<d<<")"<<"&"<<" ("<<a<<", "<<d<<")";
					cout<<"Directrix x = "<<-a/c<<"& "<<a/c<<endl;
					cout<<"Length of major axis = "<<2*a<<endl;
					cout<<"Length of minor axis :"<<" x=0"<<endl;
					cout<<"Lactus rectum length = "<<(2*b*b/a)<<endl;
					}
					else {
					cout<<"Eccentricty = "<<c<<endl;
					cout<<"Focus : "<<"( "<<d<<", "<<-(b*c)<<")"<<" &"<<"("<<d<<", "<<-(b*c)<<endl;
					cout<<"Vertices : "<<"( "<<d<<", "<<b<<")"<<"&"<<" ("<<d<<", "<<-b<<")";
					cout<<"Directrix x = "<<-b/c<<"& "<<b/c<<endl;
					cout<<"Length of major axis = "<<2*b<<endl;
					cout<<"Length of minor axis : "<<" y=0"<<endl;
					cout<<"Lactus rectum length = "<<(2*a*a/b)<<endl;
					}
					}
					if (strcmpi(tag,"combination")==0){
						cout<<"formula : n!/r!(n-r)!"<<endl;
						cout<<"Enter n :"<<endl;
						cin>>n;
						cout<<"Enter r :"<<endl;
						cin>>r;
						sum=n-r;
						multsum=1;
						for(i=1; i<=n; i++)
						multsum=i*multsum;
						cout<<multsum<<endl;

						for(i=1; i<=r; i++)
						multsum2=i*multsum2;
						cout<<multsum2<<endl;

						for(i=1; i<=sum; i++)
						multsum3=i*multsum3;
						cout<<multsum3<<endl;

						a=multsum/(multsum3*multsum2);
						cout<<"Answer : "<<a<<endl;
						}

					if (strcmpi(tag,"permutation")==0){
						cout<<"formula : n!/r!(n-r)!"<<endl;
						cout<<"Enter n :"<<endl;
						cin>>n;
						cout<<"Enter r :"<<endl;
						cin>>r;
						sum=n-r;
						multsum=1;
						for(i=1; i<=n; i++)
						multsum=i*multsum;
						cout<<multsum<<endl;

						for(i=1; i<=r; i++)
						multsum2=i*multsum2;
						cout<<multsum2<<endl;

						for(i=1; i<=sum; i++)
						multsum3=i*multsum3;
						cout<<multsum3<<endl;

						a=multsum/multsum3;
						cout<<"Answer : "<<a<<endl;
						}
					else {
					cout<<"Command over"<<endl;
					}


	   getch();
}
