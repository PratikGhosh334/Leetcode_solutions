// Last updated: 6/15/2025, 12:24:04 PM
class Solution {
public:
    int findMaximizedCapital(int k, int initialCapital, vector<int>& profits, vector<int>& capital) {
        int projectIndex = 0;
        int numsProjects = profits.size();
        vector<pair<int,int>> projects;
        for(int i = 0; i < numsProjects; i++)
            projects.push_back({capital[i],profits[i]});

        sort(projects.begin(),projects.end());
        priority_queue<int> maxProfitHeap;
        for(int currentProject = 0;currentProject<k;currentProject++){
            while(projectIndex<numsProjects && projects[projectIndex].first<= initialCapital){
                maxProfitHeap.push(projects[projectIndex].second);
                projectIndex++;
            }
            if(maxProfitHeap.empty())
                return initialCapital;

            initialCapital += maxProfitHeap.top();
            maxProfitHeap.pop();    
        }
        return initialCapital;
    }
};