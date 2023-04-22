// MODULO EXPONENTIATION OF POWER
#define ll long long
ll mod = 1e9+7;
ll pow(ll x, ll y)
{
    ll temp;
    if (y == 0)
        return 1;
    temp = pow(x, y / 2);
    if (y % 2 == 0)
        return (temp * temp)%mod;
    else
        return (x * temp * temp)%mod;
}