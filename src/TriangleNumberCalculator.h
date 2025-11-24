//
// Created by ybsxm on 11/23/2025.
//

#ifndef YOU_NEED_POWER_WISDOM_AND_COURAGE_WHEN_USING_RECURSION_TRIANGLENUMBERCALCULATOR_H
#define YOU_NEED_POWER_WISDOM_AND_COURAGE_WHEN_USING_RECURSION_TRIANGLENUMBERCALCULATOR_H


class TriangleNumberCalculator {
private:
public:
    TriangleNumberCalculator() {
        // no- op
    }

    int value(int n) {
        if (n == 1) {
            return n;
        }
        return n + value(n - 1);
    }

    int add (int n, int m) {
        return value(n) + value(m);
    }
    int subtract (int n, int m) {
        return value(n) - value(m);
    }
};


#endif //YOU_NEED_POWER_WISDOM_AND_COURAGE_WHEN_USING_RECURSION_TRIANGLENUMBERCALCULATOR_H