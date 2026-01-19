#include <iostream>
#include <vector>

typedef long long ll;

std::vector<ll> factors(ll n) {
    std::vector<ll> facs;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            facs.push_back(i);
            if (i != n / i) facs.push_back(n / i);
        }
    }
    return facs;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    ll w, h, d, n;
    std::cin >> w >> h >> d >> n;
    
    std::vector<ll> wfacs = factors(w);
    std::vector<ll> hfacs = factors(h);
    
    for (ll wf : wfacs) {
        for (ll hf : hfacs) {
            if (n % (wf * hf) == 0) {
                ll df = n / (wf * hf);
                if (d % df == 0) {
                    std::cout << wf - 1 << ' ' << hf - 1 << ' ' << df - 1;
                    return 0;
                }
            }
        }
    }
    std::cout << -1;
    return 0;
}
