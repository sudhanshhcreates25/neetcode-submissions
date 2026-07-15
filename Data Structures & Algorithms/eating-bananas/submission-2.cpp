class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int speed = 1;

        while (true) {

            long long sum = 0;

            for (int i = 0; i < piles.size(); i++)
                sum += (piles[i] + speed - 1) / speed;

            if (sum <= h)
                return speed;

            speed++;
        }
    }
};
