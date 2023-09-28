int squarerootfloor(int x){                     // sqrt(9)=3 and sqrt(15)=3
  
int i=1;
while(i*i<=x)
i++;

return (i-1);
}
