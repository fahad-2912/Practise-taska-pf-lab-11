#include<stdio.h>
void rope_cuts(int l,int *count1, int *count2,int *count3,int *sum){
if(l==0){
if(*count1>*count2 && *count1>*count3 ){
printf("%MAX CUTS : %d",*count1);
}else if(*count2>*count1 && *count2>*count3 ){
printf("%MAX CUTS : %d",*count2);
}else{
printf("%MAX CUTS : %d",*count3);
}
return;
}
if(l>=3){
(*count3)++;
rope_cuts(l-3,count1,count2,count3,sum);
}
else  if(l<3){
(*count2)++;
rope_cuts(l-2,count1,count2,count3,sum);
}
else if(l<+2){
(*count1)++;
rope_cuts(l-1,count1,count2,count3,sum);
}

}
int main(){
int l,count1=0,count2=0,count3=0,sum=0;
printf("Enter Length Of rope : \n");
scanf("%d",&l);
rope_cuts(l,&count1,&count2,&count3,&sum);

}