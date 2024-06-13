class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {

        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int count = 0;
        for (int i = 0; i < seats.size(); i++) {
            for (; seats[i]!=students[i]; ) {
                if(seats[i]>students[i])
                {
                    students[i]++;
                }
                else
                {
                    students[i]--;
                }
                count++;
            }
        }

        return count;
    }
};