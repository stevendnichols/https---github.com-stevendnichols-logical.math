
const unsigned int UINT_ALL_SET = ~0;
const unsigned int UINT_MAX = ~0;
const int INT_MAX = (int)(((unsigned int)~0) >> 1);
const int INT_MIN = ~(((unsigned int)~0) >> 1);
const unsigned int INT_HIGH_BIT = ~(((unsigned int)~0) >> 1);

int add(int m, int n)
{
   int carry = (m & n) << 1;
   if(carry) {
      return add(m^n, carry);
   }
   return m^n;
}

int equal(int m, int n)
{
   return !(m^n); 
}

int notEqual(int m, int n)
{
   return m^n;
}

int greaterThan(int m, int n)
{
  unsigned int s = INT_HIGH_BIT;
  int x = m & s, y = n & s;
  if(x ^ y) {
    return y;      
  }
  s>>=1;
  while(s) {
      if((m ^ n) & s) {
          return m & s;
      }
      s>>=1;
  }
  return 0;
}

int lesserThan(int m, int n)
{
   return greaterThan(n, m);
}

