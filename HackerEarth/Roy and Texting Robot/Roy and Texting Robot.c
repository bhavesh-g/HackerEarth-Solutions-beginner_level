//Author Name: Bhavesh Gupta
//Question link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/roy-and-texting-robot-2/

#include<stdio.h>
int checkflag(char c);
int count(char c);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
            int i=0,fn,fp=1,net,netf=0;
    char s[1000];
        scanf("%s",s);
        while(s[i]!='\0')
        {
            fn=checkflag(s[i]);
            net=count(s[i]);
            if(fp==fn){
            netf=net+netf;}
            else{netf=net+netf+1;}
            fp=fn;
            i++;
        }
          printf("%d\n",netf);
    }
    return 0;
}
int checkflag(char c)
{

    if((c>=97&&c<=99)||c==50)
        return 2;
    else if((c>=100&&c<=102)||c==51)
        return 3;
        else if((c>=103&&c<=105)||c==52)
        return 4;
        else if((c>=106&&c<=108)||c==53)
        return 5;
        else if((c>=109&&c<=111)||c==54)
        return 6;
        else if((c>=112&&c<=115)||c==55)
        return 7;
        else if((c>=106&&c<=118)||c==56)
        return 8;
        else if((c>=119&&c<=122)||c==57)
        return 9;
        else if((c>=100&&c<=102)||c==40)
        return 3;
        else if(c==44||c==46||c==33||c==63||c==49)
        return 1;
        else if(c==95||c==48){
            return 0;}
}
int count(char c)
{

    if(c=='a'||c=='d'||c=='g'||c=='j'||c=='m'||c=='t'||c=='w'||c=='p'||c=='.'||c=='_')
        return 1;
    else if(c==','||c=='b'||c=='e'||c=='h'||c=='k'||c=='n'||c=='q'||c=='u'||c=='x'||c=='0')
        return 2;
    else if(c=='?'||c=='c'||c=='f'||c=='i'||c=='l'||c=='o'||c=='r'||c=='v'||c=='y')
        return 3;
    else if(c=='!'||c=='s'||c=='z'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='8')
        return 4;
    else {return 5;}
}
