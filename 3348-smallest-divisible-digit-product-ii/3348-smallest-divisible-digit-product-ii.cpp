// class Solution {
// public:
    // int productfinder(int n, int re) {
    //     int temp = n;
    //     while (temp > 0) {
    //         re *= temp % 10;
    //         temp /= 10;
    //     }
    //     return re;
    // }
    
  //  string smallestNumber(string num, long long t) {
        // int a = stoi(num), cou = 0;
        // int prod = productfinder(a, 1);

        // while (a+cou < 899999990) {

        //     if (prod % t == 0 && prod != 0) {
                
        //         return to_string(cou + a);

        //     } else {
        //         cou++;
        //         prod = productfinder(a + cou, 1);
        //     }
        // }
        // return "-1";
         //  long long start = stoll(num);
        // safety cap so this doesn't run forever during testing
       //
//        int digitFactors[10][4] = {
//     {0,0,0,0},{0,0,0,0},{1,0,0,0},{0,1,0,0},{2,0,0,0},
//     {0,0,1,0},{1,1,0,0},{0,0,0,1},{3,0,0,0},{0,2,0,0},
// };
// map<tuple<int,int,int,int>, int> memo;
// const int INF = 1e9;
// int minDigits(int p2, int p3, int p5, int p7) {
//     p2 = max(p2, 0); p3 = max(p3, 0); p5 = max(p5, 0); p7 = max(p7, 0);
//     if (p2 == 0 && p3 == 0 && p5 == 0 && p7 == 0) return 0;
//     auto key = make_tuple(p2, p3, p5, p7);
//     auto it = memo.find(key);
//     if (it != memo.end()) return it->second;
//     memo[key] = INF;
//     int best = INF;
//     for (int d = 2; d <= 9; d++) {
//         int np2 = p2 - digitFactors[d][0], np3 = p3 - digitFactors[d][1];
//         int np5 = p5 - digitFactors[d][2], np7 = p7 - digitFactors[d][3];
//         int sub = minDigits(np2, np3, np5, np7);
//         if (sub != INF) best = min(best, 1 + sub);
//     }
//     memo[key] = best;
//     return best;
// }
// string buildSmallest(int len, int p2, int p3, int p5, int p7) {
//     string res;
//     for (int pos = 0; pos < len; pos++) {
//         int remainingAfter = len - pos - 1;
//         for (int d = 1; d <= 9; d++) {
//             int np2 = p2 - digitFactors[d][0], np3 = p3 - digitFactors[d][1];
//             int np5 = p5 - digitFactors[d][2], np7 = p7 - digitFactors[d][3];
//             int need = minDigits(np2, np3, np5, np7);
//             if (need <= remainingAfter) {
//                 res += char('0' + d);
//                 p2 = max(np2,0); p3 = max(np3,0); p5 = max(np5,0); p7 = max(np7,0);
//                 break;
//             }
//         }
//     }
//     return res;
// }
// string optSolve(string num, long long t) {
//     int t2=0,t3=0,t5=0,t7=0; long long rem = t;
//     while (rem % 2 == 0) { rem /= 2; t2++; }
//     while (rem % 3 == 0) { rem /= 3; t3++; }
//     while (rem % 5 == 0) { rem /= 5; t5++; }
//     while (rem % 7 == 0) { rem /= 7; t7++; }
//     if (rem != 1) return "-1";
//     int need = minDigits(t2, t3, t5, t7);
//     int L = (int)num.size();
//     if (need > L) return buildSmallest(need, t2, t3, t5, t7);
 
//     bool zeroFree = num.find('0') == string::npos;
//     if (zeroFree) {
//         int p2=t2,p3=t3,p5=t5,p7=t7;
//         for (char c : num) {
//             int d = c - '0';
//             p2 -= digitFactors[d][0]; p3 -= digitFactors[d][1];
//             p5 -= digitFactors[d][2]; p7 -= digitFactors[d][3];
//         }
//         if (p2<=0 && p3<=0 && p5<=0 && p7<=0) return num;
//     }
//     vector<array<int,4>> before(L+1);
//     before[0] = {t2,t3,t5,t7};
//     for (int i = 0; i < L; i++) {
//         int d = num[i]-'0';
//         before[i+1][0] = before[i][0] - (d==0?0:digitFactors[d][0]);
//         before[i+1][1] = before[i][1] - (d==0?0:digitFactors[d][1]);
//         before[i+1][2] = before[i][2] - (d==0?0:digitFactors[d][2]);
//         before[i+1][3] = before[i][3] - (d==0?0:digitFactors[d][3]);
//     }
//     string best = "";
//     for (int i = L - 1; i >= 0; i--) {
//         bool prefixOk = true;
//         for (int k = 0; k < i; k++) if (num[k]=='0') { prefixOk = false; break; }
//         if (!prefixOk) continue;
//         int p2 = before[i][0], p3 = before[i][1], p5 = before[i][2], p7 = before[i][3];
//         int origDigit = num[i]-'0';
//         int spaceAfter = L - i - 1;
//         for (int d = origDigit+1; d <= 9; d++) {
//             int np2 = p2 - digitFactors[d][0], np3 = p3 - digitFactors[d][1];
//             int np5 = p5 - digitFactors[d][2], np7 = p7 - digitFactors[d][3];
//             int req = minDigits(np2,np3,np5,np7);
//             if (req <= spaceAfter) {
//                 best = num.substr(0, i) + char('0'+d) + buildSmallest(spaceAfter, np2, np3, np5, np7);
//                 break;
//             }
//         }
//         if (!best.empty()) break;
//     }
//     if (!best.empty()) return best;
//     return buildSmallest(L+1, t2, t3, t5, t7);
//     }
class Solution {
public:
    // Prime contribution of each digit
    vector<int> two  = {0,0,1,0,2,0,1,0,3,0};
    vector<int> three= {0,0,0,1,0,0,1,0,0,2};
    vector<int> five = {0,0,0,0,0,1,0,0,0,0};
    vector<int> seven= {0,0,0,0,0,0,0,1,0,0};

    // Minimum digits required
    int minLen(long long a,long long b,long long c,long long d){
        a=max(0LL,a);
        b=max(0LL,b);
        c=max(0LL,c);
        d=max(0LL,d);

        int ans=d+c;

        ans+=a/3;
        a%=3;

        ans+=b/2;
        b%=2;

        if(a==2 && b==1) ans+=2;
        else if(a>0 || b>0) ans++;

        return ans;
    }

    bool possible(long long a,long long b,long long c,long long d,int rem){
        return minLen(a,b,c,d)<=rem;
    }

    string makeSuffix(long long a,long long b,long long c,long long d,int len){

        a=max(0LL,a);
        b=max(0LL,b);
        c=max(0LL,c);
        d=max(0LL,d);

        string s;

        while(d--){
            s+='7';
        }

        while(c--){
            s+='5';
        }

        int eight=a/3;
        a%=3;

        int nine=b/2;
        b%=2;

        if(a==2 && b==1){
            s+="26";
            a=0;
            b=0;
        }
        else if(a==1 && b==1){
            s+='6';
            a=0;
            b=0;
        }
        else if(a==2){
            s+='4';
            a=0;
        }
        else if(a==1){
            s+='2';
            a=0;
        }
        else if(b==1){
            s+='3';
            b=0;
        }

        while(nine--){
            s+='9';
        }

        while(eight--){
            s+='8';
        }

        while((int)s.size()<len){
            s+='1';
        }

        sort(s.begin(),s.end());
        return s;
    }

    string smallestNumber(string num, long long t) {

        long long need2=0,need3=0,need5=0,need7=0;

        while(t%2==0){
            need2++;
            t/=2;
        }

        while(t%3==0){
            need3++;
            t/=3;
        }

        while(t%5==0){
            need5++;
            t/=5;
        }

        while(t%7==0){
            need7++;
            t/=7;
        }

        if(t>1) return "-1";

        int n=num.size();

        vector<long long> p2(n+1,need2);
        vector<long long> p3(n+1,need3);
        vector<long long> p5(n+1,need5);
        vector<long long> p7(n+1,need7);

        int zeroPos=-1;

        for(int i=0;i<n;i++){

            int d=num[i]-'0';

            if(d==0){
                zeroPos=i;
                break;
            }

            p2[i+1]=p2[i]-two[d];
            p3[i+1]=p3[i]-three[d];
            p5[i+1]=p5[i]-five[d];
            p7[i+1]=p7[i]-seven[d];
        }

        if(zeroPos==-1 && possible(p2[n],p3[n],p5[n],p7[n],0))
            return num;

        int last=(zeroPos==-1)?n-1:zeroPos;

        for(int i=last;i>=0;i--){

            for(int d=num[i]-'0'+1;d<=9;d++){

                long long a=p2[i]-two[d];
                long long b=p3[i]-three[d];
                long long c=p5[i]-five[d];
                long long e=p7[i]-seven[d];

                if(possible(a,b,c,e,n-1-i)){

                    return num.substr(0,i)
                           + char('0'+d)
                           + makeSuffix(a,b,c,e,n-1-i);
                }
            }
        }

        int len=max(n+1,minLen(need2,need3,need5,need7));

        return makeSuffix(need2,need3,need5,need7,len);
    }
};
