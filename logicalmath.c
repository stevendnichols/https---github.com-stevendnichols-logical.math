
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

