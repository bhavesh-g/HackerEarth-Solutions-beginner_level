//Author Name: Bhavesh Gupta
//Question link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/

#include<stdio.h>
int main()
{
    int def_size,n_pics,count=0,w,h;
    scanf("%d" ,&def_size);
    scanf("%d" ,&n_pics);
    while(count<n_pics)
    {
        scanf("%d%d" ,&w,&h);
        if(w==h&&w>=def_size)
        {
            printf("ACCEPTED\n");
            goto x;
        }
        if(w<def_size||h<def_size)
        {
            printf("UPLOAD ANOTHER\n");
            goto x;
        }
        if(w>=def_size && h>=def_size)
        {
            printf("CROP IT\n");
            goto x;
        }
        x:
        count++;
    }
    return 0;
}
