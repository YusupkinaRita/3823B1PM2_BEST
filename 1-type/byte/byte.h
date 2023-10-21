unsigned char max_byte(unsigned short number) {
unsigned char x, y;
x=(unsigned char)number;
y=number>>8;
if(x>=y)
return x;
else
return y;}