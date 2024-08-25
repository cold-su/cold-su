/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int val = 0;
        for (auto& emp : employees) {
            if (emp.id == id) {
                val += emp.importance;
                if (emp.subordinates.size() == 0) break;
                // TODO
            }
        }
        return val;
    }
};