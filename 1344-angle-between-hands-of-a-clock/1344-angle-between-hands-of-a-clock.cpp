class Solution {
public:
    double angleClock(int hour, int minutes) {
        // int ans = abs((30 * hour ) − (5.5* mintes ) )
        double h = 30 * hour  + 0.5 * minutes;
        double m = 6 * minutes;
        double angle = abs(h - m);
        if(angle > 180) return 360 - angle;
        return angle;
     }
};