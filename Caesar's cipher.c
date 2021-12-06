#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    char A[10001]; /*inicialização do vetor que recebera a cifra*/
    scanf("%[^\n]", A);
    char B[53]="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    int a=0; int b=0; int c=0; int d=0; int e=0; int f=0; int g=0; int h=0; int i=0; 
    int j=0; int k=0; int l=0; int m=0; int n=0; int o=0; int p=0; int q=0; int r=0;
    int s=0; int t=0; int u=0; int v=0; int w=0; int x=0; int y=0; int z=0;
    int X; /*variaveis que usamos para contar a ocorrencia de um caracter*/
    for(X=0; X<strlen(A); ++X){ /*laco para contar os caracteres*/
        if(A[X]=='a'){
            a=a+1;
        }
        else if(A[X]=='b'){
            b=b+1;
        }
        else if(A[X]=='c'){
            c=c+1;
        }
        else if(A[X]=='d'){
            d=d+1;
        }
        else if(A[X]=='e'){
            e=e+1;
        }
        else if(A[X]=='f'){
            f=f+1;
        }
        else if(A[X]=='g'){
            g=g+1;
        }
        else if(A[X]=='h'){
            h=h+1;
        }
        else if(A[X]=='i'){
            i=i+1;
        }
        else if(A[X]=='j'){
            j=j+1;
        }
        else if(A[X]=='k'){
            k=k+1;
        }
        else if(A[X]=='l'){
            l=l+1;
        }
        else if(A[X]=='m'){
            m=m+1;
        }
        else if(A[X]=='n'){
            n=n+1;
        }
        else if(A[X]=='o'){
            o=o+1;
        }
        else if(A[X]=='p'){
            p=p+1;
        }
        else if(A[X]=='q'){
            q=q+1;
        }
        else if(A[X]=='r'){
            r=r+1;
        }
        else if(A[X]=='s'){
            s=s+1;
        }
        else if(A[X]=='t'){
            t=t+1;
        }
        else if(A[X]=='u'){
            u=u+1;
        }
        else if(A[X]=='v'){
            v=v+1;
        }
        else if(A[X]=='w'){
            w=w+1;
        }
        else if(A[X]=='x'){
            x=x+1;
        }
        else if(A[X]=='y'){
            y=y+1;
        }
        else if(A[X]=='z'){
            z=z+1;
        }
    }
    int C[26]={a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
    int Y; int Z; Z=0; int D;
    for(Y=0; Y<26; ++Y){ /*laco usado para analisar qual o caracter com maior repeticao*/
        if(C[Y]>Z){
            Z=C[Y];
            D=Y; 
        }
    }
    int I; int P; 
    if(D!=0 && D!=25){ /*lacos responsaveis por decifrar a cifra */
    for(I=0; I<strlen(A);++I){
        for(P=0; P<25;++P){
         if(P+D+1<(2*D+1)){
            if(A[I]==B[P+D+1]){
                A[I]=B[P];
                break;
            }
         }
         else if(P+D+1>=(2*D+1)){
            if(A[I]==B[P+D+1]){
                A[I]=B[P+1];
                break;
            } 
          }
        }   
      }
    }
    else if(D==0){
        for(I=0; I<strlen(A);++I){
           for(P=0; P<25;++P){
               if(A[I]==B[0]){
                   A[I]=B[0];
                   break;
               }
               else if(A[I]==B[1]){
                   A[I]=B[25];
                   break;
               }
               else if(A[I]==B[P+2]){
                   A[I]=B[P+1];
                   break;
               }
           }
        }
    }
    else if(D==25){
        for(I=0; I<strlen(A);++I){
           for(P=0; P<25;++P){
               if(A[I]==B[25]){
                   A[I]=B[25];
                   break;
               }
               else if(A[I]==B[0]){
                   A[I]=B[24];
                   break;
               }
               else if(A[I]==B[P+1]){
                   A[I]=B[P];
                   break;
               }
            }
        }
    }    
    printf("%s\n", A);
    
   return 0; 
}
















