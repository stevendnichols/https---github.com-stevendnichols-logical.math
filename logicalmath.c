
int add(int m, int n)
{
   int carry = (m & n) << 1;
   if(carry) {
      return add(m^n, carry);
   }
   return m^n;
}

int equals(int m, int n)
{
   return !(m^n); 
}

