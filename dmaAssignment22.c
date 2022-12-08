Question =1
//*
#include<stdio.h>
int main()
{
    char *str,c;
    int i=0,j=1;
    str=(char*)malloc(sizeof(char));
    printf("enter string\n");
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        str=(char*)realloc(str,j*sizeof(char));
        str[i]=c;
        i++;
    }
    str[i]='\0';
    printf("the entered string is %s ",str);
    free(str);
    return 0;
}
*\
Question =2
/*
#include<stdio.h>
int main()
{
    int *ptr,c;
    int i=0,size=0,sum=0,percentage;
    printf("enter the size of array\n ");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("memory allocation is failed\n");
    }
    printf("entered the %d values\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);

    }
    for(i=0;i<size;i++)
    {
sum+=*(ptr+i);
    }
    
    printf("total percentage is %d\n",sum/size);
    free(ptr);

}
*\
Question =3
/*
#include<stdio.h>
int main()
{
    int *ptr,c;
    int i=0,size=0,sum=0;
    printf("enter the size of array\n ");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("memory allocation is failed\n");
    }
    printf("entered the %d values\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);

    }
    for(i=0;i<size;i++)
    {
sum+=*(ptr+i);
    }
    
    printf("total sum is %d\n",sum);
    free(ptr);
}
*\
Question =4
/*
#include<stdio.h>
int main()
{
    int *str;
    int i,c,j=1;
    str=(char*)malloc(sizeof(char));
    printf("enter string :\n");
    while(c!='\n')
    {
    c=getc(stdin);
    j++;
    str=(char*)realloc(str,j*sizeof(char));
    str[i]=c;
    i++;
    }
    str[i]='\0';
    printf("the entered string is %s",str);
    free(str);
    return 0;

}
*\
Question =5
/*
#include<stdio.h>
int main()
{
    int *ptr;
    int i,sum=0,size=0;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("memory allocation failed\n");
    }
    printf("enter the %d value of the array\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);

    }
    
    for(i=0;i<size;i++)
    {
        sum+=*(ptr+i);
    }
    printf("read the array element\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    
    printf("the percentage is %d\n",sum/size);

}
*\
Question =6
/*
#include<stdio.h>
int main()
{
    int *ptr,size,max,i,j;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("memory allocation is failed\n");
    }
    printf("enter elements");
    for(i=0;i<size;i++)
    {
        scanf("%d\n",ptr+i);
    }
        max=ptr[0];
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                if(max<*(ptr+i))
                {
                max=*(ptr+i);

            }
            }
        }
            printf("the maximum value is %d\n",max,*(ptr+i));
            

        }
    *\
    Question =7
    /*
    #include<stdio.h>
int main()
{
    int *ptr;
    ptr=(int*)calloc(size,sizeof(int));

    free(ptr);
    return 0;
}
*\
Question =8
/*
#include<stdio.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf("before free %d\n"*ptr);
    free(ptr);
    printf("after free %d\n",*ptr);
    return 0;

}
*\
Question =9
/*
#include<stdio.h>
int main()
{
    int *ptr;
    int max,min,i,j,size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("memory allocation failed\n");
    }
    printf("enter the value of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
   *\
   Question =10
   /*
    #include<stdio.h>
int main()
{
    int *ptr;
    int max,min,i,j,size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("memory allocation failed\n");
    }
    printf("enter the value of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    max=ptr[0];
    min=ptr[0];
    for(i=0;i<size;i++)
    {
        
        
        if(max<*(ptr+i))
        {
        max=*(ptr+i);
        }
        if(min>*(ptr+i))
        {
            min=*(ptr+i);
        }
    }
    
    printf("the maximum value is %d",max,*(ptr+i));
    printf("the minimum value is %d",min,*(ptr+i));
}
*\
