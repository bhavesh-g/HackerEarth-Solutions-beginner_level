//Author Name: Bhavesh Gupta
//Question link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/roy-and-trains-2/

#include<stdio.h>
#include<math.h>
int main(){
float t0,t1,t2,v1,v2,d,ans1,ans2;
int t,i,n;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%f %f %f %f %f %f",&t0,&t1,&t2,&v1,&v2,&d);
ans1=(t1+((d/v1)*60));
if((ans1-(int)ans1)==0){
ans1=(int)ans1;
}
else{
ans1=(int)ans1+1;
}
ans2=(t2+((d/v2)*60));
if((ans2-(int)ans2)==0){
ans2=(int)ans2;
}
else{
ans2=(int)ans2+1;
}
if(t1-t0>=0&&t2-t0>=0){

if(ans1>ans2)
printf("%0.f\n",ans2);
else
printf("%0.f\n",ans1);
}
else if(t1-t0>=0&&t2-t0<=0){
printf("%0.f\n",ans1);
}
else if(t1-t0<=0&&t2-t0>=0){
printf("%0.f\n",ans2);
}
else{
printf("-1\n");
}
ans1=0;
ans2=0;

}
return 0;
}
