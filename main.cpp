#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <stdnoreturn.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
//noreturn void stop_now();
//static int t;

int main(){
int n,t,c=0,ans=0,d;
scanf("%d",&n);
t=n;
while(t!=0){
    d=t%2;
    t=t/2;
    ans=pow(10,c)*d+ans;
    c++;
}
printf("%d",ans);
}





/*int main(){
    char ch;
    printf("Enter H for hot drink and C for cold drink\n");
    scanf("%c",&ch);
    if(ch=='H'){
         //   char ch1;
        printf("Press Y for milk or N for otherwise\n");
        scanf(" %c",&ch);
        if(ch=='Y')
            printf("Milk added\n");
   // char ch2;
        printf("Press Y for sugar or N for otherwise\n");
        scanf(" %c",&ch);
        if(ch=='Y')
            printf("Sugar added\n");
        printf("Hot drink dispersed\n");
    }
    else
        printf("Cold drink dispersed\n");
return 0;
}













/*int main(){
char name[20],email[20],gender;
int phone,age;
printf("Enter name and email\n");
scanf("%s",name);
scanf("%s",email);
printf("Enter phone number\n");
scanf("%d",&phone);
printf("Enter age and gender\n");
scanf("%d %c",&age,&gender);
printf("Name : %s\nEmail : %s\nPhone : %d\nAge : %d\nGender : %c\n",name,email,phone,age,gender);
if(age>=18)
    printf("Adult");
else
    printf("Child");
}























/*int main(void){
FILE *f;
f=fopen("C:\\Users\\shku275347\\Documents\\test.txt","w");
if(f==NULL)
    printf("error");
else{
    fprintf(f,"%s\n","file handling");
    fputc('A',f);
    fputs("\n demo for puts function",f);
}
fclose(f);
return 0;
}

























/*int main(void){
uint32_t data;
uint8_t *cptr;
data=1;
cptr=(uint8_t*)&data;
if(*cptr==1)
    printf("little endiann");
else if(*cptr==0)
    printf("big endiann");
printf("\nvalue of data %x",data);
printf("value of pointer cptr %x",*cptr);
return 0;
}




























/*int main(){
float (*fp)(float,float);
float Gain(float,float);
void func(float (*fp)(float,float));
float result;

fp=Gain;
result=Gain(5,4.5);
printf("Result is %f\n",result);
printf("Result is %f\n",(*fp)(10,4.5));
func(fp);
return 0;
}
float Gain(float a,float b){
return a*b;
}
void func(float (*fp)(float,float)){
float func_res;
printf("func() is called\n");
printf("Result of func() %f",(*fp)(12,2));
}





























/*int main(){
union a{
short int i;
char ch[2];
};
union a key;
key.i=512;
printf("key.i = %d\n",key.i);
printf("key.ch[0] = %d\n",key.ch[0]);
printf("key.ch[1] = %d\n",key.ch[1]);

return 0;
}


















/*struct data {
unsigned short a:1,b:2,c:3,d:4,e:5;
};
int main(){
struct data d;
d.a=1;d.b=2;d.c=3;d.d=4;d.e=6;

unsigned char *ptr;
ptr=(unsigned char*)&d;
printf("Addr and value of 1st byte %p ===> %X\n",ptr,*ptr);
printf("Addr and value of 2nd byte %p ===> %X",(ptr+1),*(ptr+1));
return 0;
}























/*struct TMOD {
uint8_t M1:2,CT1:1,GATE1:1,M0:2,CT0:1,GATE0:1;
};

int main(){
struct TMOD t;
t.M1=0;
t.CT1=0;
t.GATE1=0;
t.M0=2;
t.CT0=1;
t.GATE0=0;
printf("%d %d %d %d %d %d",t.GATE0,t.CT0,t.M0,t.GATE1,t.CT1,t.M1);
return 0;
}






















/*struct skill_bits {
unsigned char f1:1,
reserve1:1,f2:2,reserve2:2,f3:3;
};
int main(){
struct skill_bits c;
c.f1=3;
c.f2=3;c.f3=9;
printf("%d %d %d",c.f1,c.f2,c.f3);
return 0;
}





























/*struct demo {
char a;int b;char c;short d;
};

int main(){
struct demo Data;
Data.a=0x21;Data.b=0xFFFF1167;Data.c=0x12;Data.d=0xABCB;
uint8_t *ptr;
ptr=(uint8_t*)&Data;
uint32_t datasize=sizeof(struct demo);
for(uint32_t i=0;i<datasize;i++){
    printf("Addr and value of each element %d = %p ==> %x\n",i,ptr,*ptr);
    ptr++;
}
printf("Size of demo %d",sizeof(struct demo));
return 0;
}


























/*typedef struct {
uint32_t DATABits[255];
uint32_t DATA;
uint32_t DIR;
}GPIO_Type;

//#define GPIOF_BASE  0X61FE00 // Base address for GPIO port F
//#define GPIOF  ((GPIO_Type *)GPIOF_BASE)  //Pointer to variable of GPIO_Type
#define LED_RED  (1U <<1)

int main(){
GPIO_Type *GPIOF;
GPIO_Type PORTA;
GPIOF=&PORTA;
GPIOF->DATA=LED_RED;
GPIOF->DATA=LED_RED;

printf("Data is %x\n",GPIOF->DATA);
    printf("Data is %x\n",PORTA.DATA);
    printf("Data is %x\n",&PORTA);
return 0;
}






















/*{
int res=0;
va_list va;
va_start(va,N);
printf("N =%d\n",N);
for(int i=0;i<N;i++){
        printf("%d\n",va_arg(va,int));
    res+=va_arg(va,int);
}
return res;
}
int main(){

 printf("Sum =%d\n",sum(2,7,3));
 printf("Sum = %d\n",sum(3,10,1,3));
}
































 /*
























printf("Name of program %s\n",argv[0]);
if(argc<2)
    printf("no arguments in command line\n");
else
    printf("first argument %s",argv[1]);
return 0;




















/*
void fun(){
    static int a=10,b=24;
    printf("%d %d\n",a,b);
    a++;b++;
}
int main(){
 for(int i=1;i<=3;i++)
    fun();
 printf("%d %d",a,b);
return 0;
}




















/*
int fun(int a,char b){
printf("Hello %d %c",a,b);
}
int main(){
    int (*fun_ptr)(int,char)=&fun;
    (*fun_ptr)(10,'X');
    return 0;
}










    /*





int a=3,*ip=&a;
float f=2.3,*fp=&f;
void *vp;
vp=ip;
printf("%d ",*(int*)vp);
*(int*)vp=67;
printf("%d ",*(int*)vp);
return 0;






}
    /*char a;
    long double*b,*c;
    uint16_t p;
    uint16_t *x;
    b=NULL;c=NULL;
    char *ptr;
    a='G';
    p=102;
    x=&p;
    ptr=&a;
    printf("value of a %c\n",a);
    printf("Address of variable a %p\n",&a);
    printf("Size of variable a is %lu\n",sizeof(a));
}
    /*
    int marks=75;
    int *iptr,*jptr,*kptr;
    iptr=&marks;
    jptr=(int*)0X61FEFF;
    *jptr=500;
    printf("jptr value : %d ",*jptr);
    //jptr=&marks;
    kptr=&marks;
    printf("%d %d %d",*iptr,*jptr,*kptr);





   int i=3;
   int *j;
   j=&i;

   printf("value of i %d\n",i);
   printf("value of j %d\n",j);
   *j=*j+2;
   printf("value of i %d\n",i);
}
/*noreturn void stop_now(){
printf("code aborted\n");
abort();
}


    /*uint8_t a=0X75,b=0X80;

    printf("toggled = %d",a^b);*/

    /*
    printf("a=%d b=%d",a,b);
    printf("a&b = %d\n",a&b);
    printf("a|b = %d\n",a|b);
    printf("a^b = %d\n",a^b);
    printf("~a = %d\n",~a);
    printf("b<<1 = %d\n",b<<1);
    printf("b>>1 = %d\n",b>>1);*/


